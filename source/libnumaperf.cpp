
#include "utils/concurrency/automics.h"
#include "libnumaperf.h"
#include "utils/collection/hashmap.h"
#include "utils/concurrency/spinlock.h"
#include "utils/collection/hashfuncs.h"
#include <assert.h>
#include "utils/collection/priorityqueue.h"
#include "bean/pagedetailAccessInfo.h"
#include "bean/diagnoseobjinfo.h"
#include "bean/diagnosecacheinfo.h"
#include "utils/memorypool.h"
#include "bean/pagebasicaccessinfo.h"
#include "bean/cachelinedetailedinfo.h"
#include "bean/diagnosecallsiteinfo.h"
#include "utils/log/Logger.h"
#include "utils/timer.h"
#include <execinfo.h>
#include "bean/diagnosepageinfo.h"
#include "bean/objectInfo.h"
#include "utils/collection/addrtopageindexshadowmap.h"
#include "utils/collection/addrtocacheindexshadowmap.h"
#include "utils/collection/addrtopagesinglefragshadowmap.h"
#include "utils/programs.h"
#include "utils/asserts.h"
#include "utils/sorts.h"

inline void collectAndClearObjInfo(ObjectInfo *objectInfo);

#define BASIC_PAGE_SHADOW_MAP_SIZE (32ul * TB)
#define MAX_HANDLE_ADDRESS BASIC_PAGE_SHADOW_MAP_SIZE / sizeof(PageBasicAccessInfo) * PAGE_SIZE

typedef HashMap<unsigned long, ObjectInfo *, spinlock, localAllocator> ObjectInfoMap;
typedef HashMap<unsigned long, DiagnoseCallSiteInfo *, spinlock, localAllocator> CallSiteInfoMap;
typedef AddressToPageIndexSingleFragShadowMap<PageBasicAccessInfo> PageBasicAccessInfoShadowMap;
typedef AddressToCacheIndexShadowMap<CacheLineDetailedInfo> CacheLineDetailedInfoShadowMap;


thread_local int pageDetailSamplingFrequency = 0;
thread_local int pageBasicSamplingFrequency = 0;

bool inited = false;
unsigned long applicationStartTime = 0;
unsigned long largestThreadIndex = 0;
thread_local unsigned long currentThreadIndex = 0;
thread_local unsigned long lockAcquireNumber = 0;
thread_local unsigned long threadBasedAccessNumber[MAX_THREAD_NUM];

unsigned long GlobalThreadBasedAccessNumber[MAX_THREAD_NUM][MAX_THREAD_NUM];
unsigned long GlobalLockAcquireNumber[MAX_THREAD_NUM];
ObjectInfoMap objectInfoMap;
CallSiteInfoMap callSiteInfoMap;
PageBasicAccessInfoShadowMap pageBasicAccessInfoShadowMap;
CacheLineDetailedInfoShadowMap cacheLineDetailedInfoShadowMap;
PriorityQueue<DiagnoseCacheLineInfo> topCacheLineQueue(MAX_TOP_GLOBAL_CACHELINE_DETAIL_INFO);
PriorityQueue<DiagnosePageInfo> topPageQueue(MAX_TOP_GLOBAL_PAGE_DETAIL_INFO);

static void initializer(void) {
    Logger::info("NumaPerf initializer\n");
    Real::init();
    void *callStacks[1];
    backtrace(callStacks, 1);
    objectInfoMap.initialize(HashFuncs::hashUnsignedlong, HashFuncs::compareUnsignedLong, 1048576);
    callSiteInfoMap.initialize(HashFuncs::hashUnsignedlong, HashFuncs::compareUnsignedLong, 1048576);
    // could support 32T/sizeOf(BasicPageAccessInfo)*4K > 2000T
    pageBasicAccessInfoShadowMap.initialize(BASIC_PAGE_SHADOW_MAP_SIZE, true);
    cacheLineDetailedInfoShadowMap.initialize(2ul * TB, true);
    applicationStartTime = Timer::getCurrentCycle();
    inited = true;
}

//https://stackoverflow.com/questions/50695530/gcc-attribute-constructor-is-called-before-object-constructor
static int const do_init = (initializer(), 0);
//MemoryPool ObjectInfo::localMemoryPool(ADDRESSES::alignUpToCacheLine(sizeof(ObjectInfo)),
//                                       GB * 4);
MemoryPool CacheLineDetailedInfo::localMemoryPool(ADDRESSES::alignUpToCacheLine(sizeof(CacheLineDetailedInfo)),
                                                  GB * 4);
MemoryPool PageDetailedAccessInfo::localMemoryPool(ADDRESSES::alignUpToCacheLine(sizeof(PageDetailedAccessInfo)),
                                                   GB * 64);

MemoryPool DiagnoseObjInfo::localMemoryPool(ADDRESSES::alignUpToCacheLine(sizeof(DiagnoseObjInfo)),
                                            GB * 1);

MemoryPool DiagnoseCallSiteInfo::localMemoryPool(ADDRESSES::alignUpToCacheLine(sizeof(DiagnoseCallSiteInfo)),
                                                 GB * 1);

MemoryPool DiagnoseCacheLineInfo::localMemoryPool(ADDRESSES::alignUpToCacheLine(sizeof(DiagnoseCacheLineInfo)),
                                                  GB * 1);

MemoryPool DiagnosePageInfo::localMemoryPool(ADDRESSES::alignUpToCacheLine(sizeof(DiagnosePageInfo)),
                                             GB * 1);

inline void preAccessThreadBasedAccessNumber() {
    for (unsigned long i = 0; i <= largestThreadIndex; i++) {
        for (unsigned long j = 0; j <= largestThreadIndex; j++) {
            if (i == j) {
//                GlobalThreadBasedAccessNumber[i][j] = 0;
                continue;
            }
            if (i > j) {
                GlobalThreadBasedAccessNumber[i][j] = GlobalThreadBasedAccessNumber[j][i];
                continue;
            }
            GlobalThreadBasedAccessNumber[i][j] += GlobalThreadBasedAccessNumber[j][i];
        }
    }
}

inline void getThreadBasedAverageAccessNumber(unsigned long *threadBasedAverageAccessNumber) {
    for (unsigned long i = 0; i <= largestThreadIndex; i++) {
        threadBasedAverageAccessNumber[i] = 0;
        for (unsigned long j = 0; j <= largestThreadIndex; j++) {
            if (i == j) {
                continue;
            }
            threadBasedAverageAccessNumber[i] += GlobalThreadBasedAccessNumber[i][j];
        }
        threadBasedAverageAccessNumber[i] = threadBasedAverageAccessNumber[i] / (largestThreadIndex);
    }
}

inline void getThreadBasedAccessNumberDeviation(unsigned long *threadBasedAverageAccessNumber,
                                                unsigned long *threadBasedAccessNumberDeviation) {
    for (unsigned long i = 0; i <= largestThreadIndex; i++) {
        threadBasedAccessNumberDeviation[i] = 0;
        for (unsigned long j = 0; j <= largestThreadIndex; j++) {
            if (i == j) {
                continue;
            }
            threadBasedAccessNumberDeviation[i] += abs((long long)
                                                               (GlobalThreadBasedAccessNumber[i][j] -
                                                                threadBasedAverageAccessNumber[i]));
        }
        threadBasedAccessNumberDeviation[i] = threadBasedAccessNumberDeviation[i] / (largestThreadIndex);
    }
}

inline void getLocalBalancedThread(unsigned long *threadBasedAverageAccessNumber,
                                   bool *localBalancedThread) {
    for (unsigned long i = 0; i <= largestThreadIndex; i++) {
        if (GlobalThreadBasedAccessNumber[i][i] - threadBasedAverageAccessNumber[i] >
            threadBasedAverageAccessNumber[i]) {
            localBalancedThread[i] = false;
            continue;
        }
        localBalancedThread[i] = true;
    }
}


inline int getGlobalBalancedThread(unsigned long *threadBasedAverageAccessNumber,
                                   unsigned long *threadBasedAccessNumberDeviation,
                                   bool *balancedThread) {
    int balancedThreadNum = 0;
    for (unsigned long i = 0; i <= largestThreadIndex; i++) {
        if (threadBasedAverageAccessNumber[i] < threadBasedAccessNumberDeviation[i]) {
            balancedThread[i] = false;
            continue;
        }
        balancedThreadNum++;
        balancedThread[i] = true;
    }
    return balancedThreadNum;
}

inline void getAverageWOBalancedThread(unsigned long *threadBasedAverageAccessNumber,
                                       bool *balancedThread, int balancedThreadNum) {
    for (unsigned long i = 0; i <= largestThreadIndex; i++) {
        if (balancedThread[i]) {
            continue;
        }
        threadBasedAverageAccessNumber[i] = 0;
        for (unsigned long j = 0; j <= largestThreadIndex; j++) {
            if (balancedThread[j] || i == j) {
                continue;
            }
            threadBasedAverageAccessNumber[i] += GlobalThreadBasedAccessNumber[i][j];
        }
        threadBasedAverageAccessNumber[i] =
                threadBasedAverageAccessNumber[i] / (largestThreadIndex - balancedThreadNum);
    }
}

inline void getDeviationWOBalancedThread(unsigned long *threadBasedAverageAccessNumber,
                                         unsigned long *threadBasedAccessNumberDeviation,
                                         bool *balancedThread, int balancedThreadNum) {
    for (unsigned long i = 0; i <= largestThreadIndex; i++) {
        if (balancedThread[i]) {
            continue;
        }
        threadBasedAccessNumberDeviation[i] = 0;
        for (unsigned long j = 0; j <= largestThreadIndex; j++) {
            if (i == j) {
                continue;
            }
            if (balancedThread[j]) {
                continue;
            }
            threadBasedAccessNumberDeviation[i] += abs((long long)
                                                               (GlobalThreadBasedAccessNumber[i][j] -
                                                                threadBasedAverageAccessNumber[i]));
        }
        threadBasedAccessNumberDeviation[i] =
                threadBasedAccessNumberDeviation[i] / (largestThreadIndex - balancedThreadNum);
    }
}

typedef struct {
    int num;
    long bindedThreadId;
    long threadId[MAX_THREAD_NUM];
} ThreadCluster;

inline void
getTightThreadClusters(unsigned long *threadBasedAverageAccessNumber, bool *balancedThread, int balancedThreadNum,
                       ThreadCluster *threadCluster) {

    int *ordersOfThread = (int *) Real::malloc(sizeof(int) * MAX_THREAD_NUM * MAX_THREAD_NUM);
    int *indexByOrder = (int *) Real::malloc(sizeof(int) * MAX_THREAD_NUM * MAX_THREAD_NUM);
    for (unsigned long i = 0; i <= largestThreadIndex; i++) {
        threadCluster[i].num = 0;
        threadCluster[i].bindedThreadId = -1;
        if (balancedThread[i]) {
            threadBasedAverageAccessNumber[i] = 0;
            continue;
        }
        for (unsigned long j = 0; j <= largestThreadIndex; j++) {
            if (i == j || balancedThread[j]) {
                GlobalThreadBasedAccessNumber[i][j] = 0;
            }
        }
        Sorts::getOrder(GlobalThreadBasedAccessNumber[i], &(ordersOfThread[i * MAX_THREAD_NUM]),
                        largestThreadIndex + 1);
        Sorts::sortToIndex(GlobalThreadBasedAccessNumber[i], &(indexByOrder[i * MAX_THREAD_NUM]),
                           largestThreadIndex + 1);
    }
    int *averageIndexByOrder = (int *) Real::malloc(sizeof(int) * MAX_THREAD_NUM);
    Sorts::sortToIndex(threadBasedAverageAccessNumber, averageIndexByOrder, largestThreadIndex + 1);

    int thredNumPerNode = (largestThreadIndex + 1) / NUMA_NODES + 1;
    for (int tryBind = 1; tryBind <= NUMA_NODES; tryBind++) {
        int threadDistance = tryBind * thredNumPerNode;
        if (threadDistance > largestThreadIndex + 1) {
            threadDistance = largestThreadIndex + 1;
        }
        for (long i = 0; i <= largestThreadIndex; i++) {
            unsigned long threadId = averageIndexByOrder[i];
            if (balancedThread[threadId]) {  // do not need binding
                continue;
            }
            int bindedThreadId = threadCluster[threadId].bindedThreadId;
            if (bindedThreadId >= 0 && threadCluster[bindedThreadId].num >= thredNumPerNode) {  // this cluster has full
                continue;
            }
            if (bindedThreadId < 0) {
                threadCluster[threadId].bindedThreadId = threadId;
                threadCluster[threadId].threadId[threadCluster[threadId].num] = threadId;
                threadCluster[threadId].num = 1;
                bindedThreadId = threadId;
            }
            for (unsigned long j = 0; j < threadDistance; j++) {
                int targetThreadId = indexByOrder[threadId * MAX_THREAD_NUM + j];
                if (balancedThread[targetThreadId]) { // do not need binding
                    continue;
                }
                if (threadCluster[bindedThreadId].num >= thredNumPerNode) { // this cluster has full
                    break;
                }
                if (ordersOfThread[targetThreadId * MAX_THREAD_NUM + threadId] > threadDistance) {
                    continue;
                }
                int targetThreadBindedThreadId = threadCluster[targetThreadId].bindedThreadId;
                if (targetThreadBindedThreadId < 0) {
                    threadCluster[bindedThreadId].threadId[threadCluster[bindedThreadId].num] = targetThreadId;
                    threadCluster[bindedThreadId].num++;
                    threadCluster[targetThreadId].bindedThreadId = threadId;
                    continue;
                }
                if (targetThreadBindedThreadId == bindedThreadId) {
                    continue;
                }
                if (threadCluster[bindedThreadId].num + threadCluster[targetThreadBindedThreadId].num <
                    thredNumPerNode) {
                    for (int s = 0; s < threadCluster[targetThreadBindedThreadId].num; s++) {
                        int threadInTargetCluster = threadCluster[targetThreadBindedThreadId].threadId[s];
                        threadCluster[bindedThreadId].threadId[threadCluster[bindedThreadId].num] = threadInTargetCluster;
                        threadCluster[bindedThreadId].num++;
                        threadCluster[threadInTargetCluster].bindedThreadId = bindedThreadId;
                    }
                    threadCluster[targetThreadBindedThreadId].num = 0;
                }
            }
        }
    }
    Real::free(ordersOfThread);
    Real::free(indexByOrder);
}

int threadBasedImbalancedDetect(unsigned long *threadBasedAverageAccessNumber,
                                unsigned long *threadBasedAccessNumberDeviation, bool *localBalancedThread,
                                bool *globalBalancedThread) {
    preAccessThreadBasedAccessNumber();
    getThreadBasedAverageAccessNumber(threadBasedAverageAccessNumber);
    getLocalBalancedThread(threadBasedAverageAccessNumber, localBalancedThread);
    getThreadBasedAccessNumberDeviation(threadBasedAverageAccessNumber, threadBasedAccessNumberDeviation);
    int balancedThreadNum = getGlobalBalancedThread(threadBasedAverageAccessNumber, threadBasedAccessNumberDeviation,
                                                    globalBalancedThread);
#ifdef DEBUG_LOG
    for (unsigned long i = 0; i <= largestThreadIndex; i++) {
        if (threadBasedAverageAccessNumber[i] > 0 || threadBasedAccessNumberDeviation[i] > 0) {
            fprintf(dumpFile, "  Thread-:%lu, thread based access number average  : %lu\n", i,
                    threadBasedAverageAccessNumber[i]);
            fprintf(dumpFile, "  Thread-:%lu, thread based access number deviation: %lu\n", i,
                    threadBasedAccessNumberDeviation[i]);
        }
    }
    fprintf(dumpFile, "\n");
#endif
    getAverageWOBalancedThread(threadBasedAverageAccessNumber, globalBalancedThread, balancedThreadNum);
    getDeviationWOBalancedThread(threadBasedAverageAccessNumber, threadBasedAccessNumberDeviation, globalBalancedThread,
                                 balancedThreadNum);
    balancedThreadNum = getGlobalBalancedThread(threadBasedAverageAccessNumber, threadBasedAccessNumberDeviation,
                                                globalBalancedThread);
    return balancedThreadNum;
}

__attribute__ ((destructor)) void finalizer(void) {
    unsigned long totalRunningCycles = Timer::getCurrentCycle() - applicationStartTime;
    Logger::info("NumaPerf finalizer, totalRunningCycles:%lu\n", totalRunningCycles);
    inited = false;
    // collect and clear some objects that are not explicitly freed.
    for (auto iterator = objectInfoMap.begin(); iterator != objectInfoMap.end(); iterator++) {
        collectAndClearObjInfo(iterator.getData());
    }

    PriorityQueue<DiagnoseCallSiteInfo> topDiadCallSiteInfoQueue(MAX_TOP_CALL_SITE_INFO);
    for (auto iterator = callSiteInfoMap.begin(); iterator != callSiteInfoMap.end(); iterator++) {
//        fprintf(stderr, "%lu ,", iterator.getData()->getTotalRemoteAccess());
//        fprintf(stderr, "callSiteInfoMap callSite:%lu\n", iterator.getData()->getCallSiteAddress());
        if (iterator.getData()->getSeriousScore(totalRunningCycles) <= SERIOUS_SCORE_THRESHOLD) {
            continue;
        }
        topDiadCallSiteInfoQueue.insert(iterator.getData());
    }
    FILE *dumpFile = fopen("NumaPerf.dump", "w");
    if (!dumpFile) {
        Logger::error("can not reate dump file:NumaPerf.dump\n");
        exit(9);
    }
    fprintf(dumpFile, "Table of Contents\n");
    fprintf(dumpFile, "    Part One: Thread based lock require number.\n");
    fprintf(dumpFile, "    Part Two: Thread based imbalance detection & threads binding recommendation.\n");
    fprintf(dumpFile, "    Part Three: Top %d problematical callsites.\n\n\n", MAX_TOP_CALL_SITE_INFO);


    fprintf(dumpFile, "Part One: Thread based lock require number:\n");
    for (unsigned long i = 1; i <= largestThreadIndex; i++) {
        if (GlobalLockAcquireNumber[i] > 0) {
            fprintf(dumpFile, "  Thread-:%lu, acquires lock number: %lu\n", i, GlobalLockAcquireNumber[i]);
        }
    }
    fprintf(dumpFile, "\n");

    fprintf(dumpFile, "Part Two: Thread based imbalance detection & threads binding recommendation:\n\n");
    unsigned long threadBasedAverageAccessNumber[MAX_THREAD_NUM];
    unsigned long threadBasedAccessNumberDeviation[MAX_THREAD_NUM];
    bool globalBalancedThread[MAX_THREAD_NUM];
    bool localBalancedThread[MAX_THREAD_NUM];
    int balancedThreadNum = threadBasedImbalancedDetect(threadBasedAverageAccessNumber,
                                                        threadBasedAccessNumberDeviation, localBalancedThread,
                                                        globalBalancedThread);
    fprintf(dumpFile, "2.1 Local ImBalanced Threads:\n");
    for (unsigned long i = 0; i <= largestThreadIndex; i++) {
        if (!localBalancedThread[i]) {
            fprintf(dumpFile, "%ld,", i);
        }
    }
    fprintf(dumpFile, "\n\n");

    fprintf(dumpFile, "2.2 Global Balanced Threads:\n");
    for (unsigned long i = 0; i <= largestThreadIndex; i++) {
        if (globalBalancedThread[i]) {
            fprintf(dumpFile, "%ld,", i);
        }
    }
    fprintf(dumpFile, "\n\n");

    fprintf(dumpFile, "2.3 Global ImBalanced Threads:\n");
    for (unsigned long i = 0; i <= largestThreadIndex; i++) {
        if (!globalBalancedThread[i]) {
            fprintf(dumpFile, "%ld,", i);
        }
    }
    fprintf(dumpFile, "\n\n");
    fprintf(dumpFile, "2.4 Threads binding recomendations:\n");
    // get threads binding recommendations
    ThreadCluster *threadClusters = (ThreadCluster *) Real::malloc(sizeof(ThreadCluster) * MAX_THREAD_NUM);
    memset(threadClusters, 0, sizeof(long) * MAX_THREAD_NUM * MAX_THREAD_NUM);
    getTightThreadClusters(threadBasedAverageAccessNumber, globalBalancedThread, balancedThreadNum, threadClusters);
    int cluster = 0;
    for (unsigned long i = 0; i <= largestThreadIndex; i++) {
        if (threadClusters[i].num == 0) {
            continue;
        }
        cluster++;
        fprintf(dumpFile, "Thread cluster-%d:", cluster);
        for (unsigned long j = 0; j < threadClusters[i].num; j++) {
            fprintf(dumpFile, "%ld,", threadClusters[i].threadId[j]);
        }
        fprintf(dumpFile, "\n");
    }
    fprintf(dumpFile, "\n\n");
#ifdef DEBUG_LOG
    fprintf(dumpFile, "2.4 Thread based imbalance access:\n");
    for (unsigned long i = 0; i <= largestThreadIndex; i++) {
        if (balancedThread[i]) {
            continue;
        }
        for (unsigned long j = 0; j <= largestThreadIndex; j++) {
            if (!balancedThread[j] && GlobalThreadBasedAccessNumber[i][j] > 2 * threadBasedAverageAccessNumber[i]) {
                fprintf(dumpFile, "  Thread-:%lu----Thread-:%lu, thread based access number: %lu\n", i, j,
                        GlobalThreadBasedAccessNumber[i][j]);
            }
        }
    }
    fprintf(dumpFile, "\n");
#endif
#if 0
    fprintf(dumpFile, "Part One: Top %d problematical pages:\n", MAX_TOP_GLOBAL_PAGE_DETAIL_INFO);
    for (int i = 0; i < topPageQueue.getSize(); i++) {
        fprintf(dumpFile, "  Top problematical pages %d:\n", i + 1);
        topPageQueue.getValues()[i]->dump(dumpFile, 4, totalRunningCycles);
        fprintf(dumpFile, "\n\n");
    }

    fprintf(dumpFile, "Part Two: Top %d problematical cachelines:\n", MAX_TOP_CACHELINE_DETAIL_INFO);
    for (int i = 0; i < topCacheLineQueue.getSize(); i++) {
        fprintf(dumpFile, "  Top problematical cachelines %d:\n", i + 1);
        topCacheLineQueue.getValues()[i]->dump(dumpFile, 4, totalRunningCycles);
        fprintf(dumpFile, "\n\n");
    }
#endif
    fprintf(dumpFile, "Part Three: Top %d problematical callsites:\n", MAX_TOP_CALL_SITE_INFO);
    for (int i = 0; i < topDiadCallSiteInfoQueue.getSize(); i++) {
        fprintf(dumpFile, "   Top problematical callsites %d:\n", i + 1);
        topDiadCallSiteInfoQueue.getValues()[i]->dump(dumpFile, totalRunningCycles, 4);
        fprintf(dumpFile, "\n\n");
    }
}


inline void *__malloc(size_t size, unsigned long callerAddress) {
//    unsigned long startCycle = Timer::getCurrentCycle();
//    Logger::debug("__malloc size:%lu\n", size);
    if (size <= 0) {
        size = 1;
    }
    static char initBuf[INIT_BUFF_SIZE];
    static int allocated = 0;
    if (!inited) {
        Asserts::assertt(allocated + size < INIT_BUFF_SIZE, (char *) "not enough temp memory");
        void *resultPtr = (void *) &initBuf[allocated];
        allocated += size;
        //Logger::info("malloc address:%p, totcal cycles:%lu\n", resultPtr, Timer::getCurrentCycle() - startCycle);
        return resultPtr;
    }
    void *objectStartAddress = Real::malloc(size);
    Asserts::assertt(objectStartAddress != NULL, (char *) "null point from malloc");
#if 0
    void *callStacks[3];
    backtrace(callStacks, 3);
    if (callerAddress != (unsigned long) callStacks[2]) {
        Logger::info("malloc callsite not same\n");
        Logger::info("malloc callsite: %lu\n", callerAddress);
        Logger::info("malloc call stack1: %lu\n", (unsigned long) callStacks[0]);
        Logger::info("malloc call stack2: %lu\n", (unsigned long) callStacks[1]);
        Logger::info("malloc call stack3: %lu\n", (unsigned long) callStacks[2]);
        backtrace_symbols_fd(callStacks, 3, 2);
        Programs::printAddress2Line((unsigned long) callStacks[0]);
        Programs::printAddress2Line((unsigned long) callStacks[1]);
        Programs::printAddress2Line((unsigned long) callStacks[2]);
    }
#endif
    if (callSiteInfoMap.find((unsigned long) callerAddress, 0) == NULL) {
        DiagnoseCallSiteInfo *diagnoseCallSiteInfo = DiagnoseCallSiteInfo::createNewDiagnoseCallSiteInfo();
        if (!callSiteInfoMap.insertIfAbsent((unsigned long) callerAddress, 0, diagnoseCallSiteInfo)) {
            DiagnoseCallSiteInfo::release(diagnoseCallSiteInfo);
        } else {
            void *callStacks[MAX_BACK_TRACE_NUM];
            int size = backtrace(callStacks, MAX_BACK_TRACE_NUM);
            diagnoseCallSiteInfo->setCallStack((unsigned long *) callStacks, 2, size - 2);
            if ((void *) callerAddress != callStacks[2]) {
                Logger::error("callStackSize != callerAddress\n");
            }
        }
    }
    ObjectInfo *objectInfoPtr = ObjectInfo::createNewObjectInfoo((unsigned long) objectStartAddress, size,
                                                                 callerAddress);
    objectInfoMap.insert((unsigned long) objectStartAddress, 0, objectInfoPtr);
    long firstTouchThreadId = currentThreadIndex;
    if (size > HUGE_OBJ_SIZE) {
        firstTouchThreadId = -1;
    }
    for (unsigned long address = (unsigned long) objectStartAddress;
         (address - (unsigned long) objectStartAddress) < size; address += PAGE_SIZE) {
        if (NULL == pageBasicAccessInfoShadowMap.find(address)) {
            PageBasicAccessInfo basicPageAccessInfo(firstTouchThreadId, ADDRESSES::getPageStartAddress(address));
            pageBasicAccessInfoShadowMap.insert(address, basicPageAccessInfo);
        }
    }
    //Logger::info("malloc size:%lu, address:%p, totcal cycles:%lu\n",size, objectStartAddress, Timer::getCurrentCycle() - startCycle);
    return objectStartAddress;
}

inline void __collectAndClearPageInfo(ObjectInfo *objectInfo, DiagnoseObjInfo *diagnoseObjInfo,
                                      DiagnoseCallSiteInfo *diagnoseCallSiteInfo) {
    unsigned long objStartAddress = objectInfo->getStartAddress();
    unsigned long objSize = objectInfo->getSize();
    unsigned long objEndAddress = objStartAddress + objSize;
    for (unsigned long beginningAddress = objStartAddress;
         beginningAddress < objEndAddress; beginningAddress += PAGE_SIZE) {
        PageBasicAccessInfo *pageBasicAccessInfo = pageBasicAccessInfoShadowMap.find(beginningAddress);
        if (NULL == pageBasicAccessInfo) {
            Logger::error("pageBasicAccessInfo is lost\n");
            continue;
        }
        PageDetailedAccessInfo *pageDetailedAccessInfo = pageBasicAccessInfo->getPageDetailedAccessInfo();
        bool allPageCoveredByObj = pageBasicAccessInfo->isCoveredByObj(objStartAddress, objSize);
//        if (allPageCoveredByObj) {
//            pageBasicAccessInfo->clearAll();
//        } else {
//            pageBasicAccessInfo->clearResidObjInfo(objStartAddress, objSize);
//        }
        if (pageDetailedAccessInfo == NULL) {
            continue;
        }

        unsigned long seriousScore = pageDetailedAccessInfo->getTotalRemoteAccess();

        // insert into global top page queue
        if (topPageQueue.mayCanInsert(seriousScore)) {
            DiagnosePageInfo *diagnosePageInfo = DiagnosePageInfo::createDiagnosePageInfo(objectInfo->copy(),
                                                                                          diagnoseCallSiteInfo,
                                                                                          pageDetailedAccessInfo);
            DiagnosePageInfo *diagnosePageInfoOld = topPageQueue.insert(diagnosePageInfo, true);
            if (NULL != diagnosePageInfoOld) {
                DiagnosePageInfo::release(diagnosePageInfoOld);
            }
        }

        // insert into obj's top page queue
        PageDetailedAccessInfo *pageCanClear = diagnoseObjInfo->insertPageDetailedAccessInfo(pageDetailedAccessInfo,
                                                                                             allPageCoveredByObj);
        if (pageCanClear == NULL) {
            continue;
        }

        if (pageCanClear->isCoveredByObj(objStartAddress, objSize)) {
            pageCanClear->clearAll();
            continue;
        }
// else
        pageCanClear->clearResidObjInfo(objStartAddress, objSize);
        pageCanClear->clearSumValue();
    }
}

inline void __collectAndClearCacheInfo(ObjectInfo *objectInfo,
                                       DiagnoseObjInfo *diagnoseObjInfo,
                                       DiagnoseCallSiteInfo *diagnoseCallSiteInfo) {
    unsigned long objStartAddress = objectInfo->getStartAddress();
    unsigned long objSize = objectInfo->getSize();
    unsigned long objEndAddress = objStartAddress + objSize;

    for (unsigned long cacheLineAddress = objStartAddress;
         cacheLineAddress < objEndAddress; cacheLineAddress += CACHE_LINE_SIZE) {
        CacheLineDetailedInfo *cacheLineDetailedInfo = cacheLineDetailedInfoShadowMap.find(cacheLineAddress);
        // remove the info in cache level, even there maybe are more objs inside it.
        if (NULL == cacheLineDetailedInfo) {
            continue;
        }
        unsigned long seriousScore = cacheLineDetailedInfo->getTotalRemoteAccess();
        // insert into global top cache queue
        if (topCacheLineQueue.mayCanInsert(seriousScore)) {
            DiagnoseCacheLineInfo *diagnoseCacheLineInfo = DiagnoseCacheLineInfo::createDiagnoseCacheLineInfo(
                    objectInfo->copy(), diagnoseCallSiteInfo, cacheLineDetailedInfo);
            DiagnoseCacheLineInfo *oldTopCacheLine = topCacheLineQueue.insert(diagnoseCacheLineInfo, true);
            if (NULL != oldTopCacheLine) {
                DiagnoseCacheLineInfo::release(oldTopCacheLine);
            }
        }

        // insert into obj's top cache queue
        CacheLineDetailedInfo *cacheCanClear = diagnoseObjInfo->insertCacheLineDetailedInfo(cacheLineDetailedInfo);
        if (NULL == cacheCanClear) {
            continue;
        }
        cacheCanClear->clear();
    }
}

inline void collectAndClearObjInfo(ObjectInfo *objectInfo) {
    unsigned long startAddress = objectInfo->getStartAddress();
    unsigned long size = objectInfo->getSize();
    unsigned long mallocCallSite = objectInfo->getMallocCallSite();
    DiagnoseCallSiteInfo *diagnoseCallSiteInfo = callSiteInfoMap.find(mallocCallSite, 0);
    if (NULL == diagnoseCallSiteInfo) {
        Logger::error("diagnoseCallSiteInfo is lost, mallocCallSite:%lu\n", (unsigned long) mallocCallSite);
        return;
    }
    DiagnoseObjInfo diagnoseObjInfo = DiagnoseObjInfo(objectInfo);
    __collectAndClearPageInfo(objectInfo, &diagnoseObjInfo, diagnoseCallSiteInfo);
    __collectAndClearCacheInfo(objectInfo, &diagnoseObjInfo, diagnoseCallSiteInfo);

    diagnoseCallSiteInfo->recordDiagnoseObjInfo(&diagnoseObjInfo);

    if (diagnoseCallSiteInfo->mayCanInsertToTopObjQueue(&diagnoseObjInfo)) {
        DiagnoseObjInfo *newDiagnoseObjInfo = diagnoseObjInfo.deepCopy();
        DiagnoseObjInfo *oldDiagnoseObj = diagnoseCallSiteInfo->insertToTopObjQueue(newDiagnoseObjInfo);
        if (oldDiagnoseObj != NULL) {
            DiagnoseObjInfo::release(oldDiagnoseObj);
        }
    } else {
        ObjectInfo::release(objectInfo);
    }

    diagnoseObjInfo.clearCacheAndPage();

//    Logger::info("allInvalidNumInMainThread:%lu, allInvalidNumInOtherThreads:%lu\n", allInvalidNumInMainThread,
//                 allInvalidNumInOtherThreads);
}

inline void __free(void *ptr) {
//    Logger::debug("__free pointer:%p\n", ptr);
    if (!inited) {
        return;
    }
    ObjectInfo *objectInfo = objectInfoMap.findAndRemove((unsigned long) ptr, 0);
//    ObjectInfo::release(objectInfo);
    if (NULL != objectInfo) {
        collectAndClearObjInfo(objectInfo);
        Real::free(ptr);
    }
}

void operator delete(void *ptr) throw() {
    __free(ptr);
}

void operator delete[](void *ptr) throw() {
    __free(ptr);
}

void *operator new(size_t size) {
    return __malloc(size, Programs::getLastEip(&size, 0x10));
}

void *operator new(size_t size, const std::nothrow_t &) throw() {
    return __malloc(size, Programs::getLastEip(&size, 0x10));
}

void *operator new[](size_t size) {
    return __malloc(size, Programs::getLastEip(&size, 0x10));
}

extern void *malloc(size_t size) {
    return __malloc(size, Programs::getLastEip(&size, 0x10));
}

void *calloc(size_t n, size_t size) {
//    Logger::debug("calloc N:%lu, size:%lu\n", n, size);
    void *ptr = __malloc(n * size, Programs::getLastEip(&n, 0x20));
    if (ptr != NULL) {
        memset(ptr, 0, n * size);
    }
    return ptr;
}

void *realloc(void *ptr, size_t size) {
//    Logger::debug("realloc size:%lu, ptr:%p\n", size, ptr);
    unsigned long callerAddress = Programs::getLastEip(&ptr, 0x38);
    if (ptr == NULL || !inited) {
//        __free(ptr);
        return __malloc(size, callerAddress);
    }
    ObjectInfo *obj = objectInfoMap.find((unsigned long) ptr, 0);
    if (obj == NULL) {
//        Logger::warn("realloc no original obj info,ptr:%p\n", ptr);
//        __free(ptr);
        return __malloc(size, callerAddress);
    }
    unsigned long oldSize = obj->getSize();
    void *newObjPtr = __malloc(size, callerAddress);
    memcpy(newObjPtr, ptr, oldSize < size ? oldSize : size);
    __free(ptr);
    return newObjPtr;
}

void free(void *ptr) __THROW {
    __free(ptr);
}

typedef struct {
    void *startRoutinePtr;
    void *parameterPtr;
    unsigned long threadIndex;
} ThreadStartRoutineParameter;

typedef void *(*threadStartRoutineFunPtr)(void *);

void *initThreadIndexRoutine(void *args) {
    ThreadStartRoutineParameter *arguments = (ThreadStartRoutineParameter *) args;
    currentThreadIndex = arguments->threadIndex;
//        Logger::debug("new thread index:%lu\n", currentThreadIndex);
    memset(threadBasedAccessNumber, 0, sizeof(unsigned long) * MAX_THREAD_NUM);
    threadStartRoutineFunPtr startRoutineFunPtr = (threadStartRoutineFunPtr) arguments->startRoutinePtr;
    void *result = startRoutineFunPtr(arguments->parameterPtr);
    GlobalLockAcquireNumber[currentThreadIndex] = lockAcquireNumber;
    memcpy(GlobalThreadBasedAccessNumber[currentThreadIndex], threadBasedAccessNumber,
           sizeof(unsigned long) * MAX_THREAD_NUM);
    Real::free(args);
    return result;
}

int pthread_create(pthread_t *tid, const pthread_attr_t *attr,
                   void *(*start_routine)(void *), void *arg) __THROW {
//Logger::debug("pthread create\n");
    if (!inited) {
        initializer();

    }
    ThreadStartRoutineParameter *arguments = (ThreadStartRoutineParameter *) Real::malloc(
            sizeof(ThreadStartRoutineParameter));
    unsigned long threadIndex = Automics::automicIncrease(&largestThreadIndex, 1, -1);
    Asserts::assertt(currentThreadIndex < MAX_THREAD_NUM, (char *) "max thread id out of range");

    arguments->startRoutinePtr = (void *) start_routine;
    arguments->parameterPtr = arg;
    arguments->threadIndex = threadIndex;
    return Real::pthread_create(tid, attr, initThreadIndexRoutine, (void *) arguments);
}

inline void recordDetailsForPageSharing(PageBasicAccessInfo *pageBasicAccessInfo, unsigned long addr) {
//    Logger::debug("record page detailed info\n");
    if (NULL == (pageBasicAccessInfo->getPageDetailedAccessInfo())) {
        PageDetailedAccessInfo *pageDetailInfoPtr = PageDetailedAccessInfo::createNewPageDetailedAccessInfo(
                ADDRESSES::getPageStartAddress(addr), pageBasicAccessInfo->getFirstTouchThreadId());
        if (!pageBasicAccessInfo->setIfBasentPageDetailedAccessInfo(pageDetailInfoPtr)) {
            PageDetailedAccessInfo::release(pageDetailInfoPtr);
        }
    }
    (pageBasicAccessInfo->getPageDetailedAccessInfo())->recordAccess(addr, currentThreadIndex,
                                                                     pageBasicAccessInfo->getFirstTouchThreadId());
}

#ifdef SAMPLING

inline void
recordDetailsForCacheSharing(unsigned long addr, unsigned long firstTouchThreadId, eAccessType type, bool sampled) {
#else
    inline void recordDetailsForCacheSharing(unsigned long addr, unsigned long firstTouchThreadId, eAccessType type) {
#endif
//    Logger::debug("record cache detailed info\n");
    CacheLineDetailedInfo *cacheLineInfoPtr = cacheLineDetailedInfoShadowMap.find(addr);
    if (NULL == cacheLineInfoPtr) {
        CacheLineDetailedInfo newCacheLineDetail = CacheLineDetailedInfo(ADDRESSES::getCacheLineStartAddress(addr),
                                                                         firstTouchThreadId);
        cacheLineInfoPtr = cacheLineDetailedInfoShadowMap.insert(addr, newCacheLineDetail);
    }
#ifdef SAMPLING
    cacheLineInfoPtr->recordAccess(currentThreadIndex, firstTouchThreadId, type, addr, sampled);
#else
    cacheLineInfoPtr->recordAccess(currentThreadIndex, firstTouchThreadId, type, addr);
#endif
//    Logger::info("addr:%p,seriousScore:%lu,mainThread:%lu,otherThreads:%lu\n", cacheLineInfoPtr,
//                 cacheLineInfoPtr->seriousScore,
//                 cacheLineInfoPtr->getInvalidationNumberInFirstThread(),
//                 cacheLineInfoPtr->getInvalidationNumberInOtherThreads());
}

/*
* handleAccess functions.
*/
inline void handleAccess(unsigned long addr, size_t size, eAccessType type) {
//    unsigned long startCycle = Timer::getCurrentCycle();
//    Logger::debug("thread index:%lu, handle access addr:%lu, size:%lu, type:%d\n", currentThreadIndex, addr, size,
//                  type);
    if (addr > MAX_HANDLE_ADDRESS) {
        Logger::warn("access addr:%lu is too larg\n", addr);
        return;
    }

    PageBasicAccessInfo *basicPageAccessInfo = pageBasicAccessInfoShadowMap.find(addr);
    if (NULL == basicPageAccessInfo) {
        return;
    }
    bool needPageDetailInfo = basicPageAccessInfo->needPageSharingDetailInfo();
    bool needCahceDetailInfo = basicPageAccessInfo->needCacheLineSharingDetailInfo(addr);
    long firstTouchThreadId = basicPageAccessInfo->getFirstTouchThreadId();
    // set real first touch thread id for huge objects
    if (firstTouchThreadId < 0 && type == E_ACCESS_READ) {
        return;
    }
    if (firstTouchThreadId < 0) {
        basicPageAccessInfo->setFirstTouchThreadIdIfAbsent(currentThreadIndex);
        firstTouchThreadId = basicPageAccessInfo->getFirstTouchThreadId();
//        Logger::warn("firstTouchThread:%lu\n", firstTouchThreadId);
    }

    bool sampled = false;
    if (!needPageDetailInfo) {
        // todo thread local sampling is still too costing
#ifdef SAMPLING
        pageBasicSamplingFrequency++;
        if (pageBasicSamplingFrequency > SAMPLING_FREQUENCY) {
            sampled = true;
            pageBasicSamplingFrequency = 0;
            threadBasedAccessNumber[firstTouchThreadId]++;
            basicPageAccessInfo->recordAccessForPageSharing(currentThreadIndex);
        }
#else
        basicPageAccessInfo->recordAccessForPageSharing(currentThreadIndex);
        threadBasedAccessNumber[firstTouchThreadId]++;
#endif
    }

    if (!needCahceDetailInfo) {
        basicPageAccessInfo->recordAccessForCacheSharing(addr, type);
    }

//    Logger::info("addr:%p,removeAccess:%lu,firstThread:%lu,currentThread:%lu\n", basicPageAccessInfo,
//                 basicPageAccessInfo->getAccessNumberByOtherThreads(), firstTouchThreadId, currentThreadIndex);

    if (needPageDetailInfo) {
#ifdef SAMPLING
        pageDetailSamplingFrequency++;
        if (pageDetailSamplingFrequency > SAMPLING_FREQUENCY) {
            sampled = true;
            pageDetailSamplingFrequency = 0;
            threadBasedAccessNumber[firstTouchThreadId]++;
            recordDetailsForPageSharing(basicPageAccessInfo, addr);
        }
#else
        recordDetailsForPageSharing(basicPageAccessInfo, addr);
        threadBasedAccessNumber[firstTouchThreadId]++;
#endif
    }

    if (needCahceDetailInfo) {
#ifdef SAMPLING
        recordDetailsForCacheSharing(addr, firstTouchThreadId, type, sampled);
#else
        recordDetailsForCacheSharing(addr, firstTouchThreadId, type);
#endif
    }
// Logger::debug("handle access cycles:%lu\n", Timer::getCurrentCycle() - startCycle);
}

/*
* handle lock functions.
*/
inline void recordLockAcquire() {
    lockAcquireNumber++;
}

int pthread_spin_lock(pthread_spinlock_t *lock) throw() {
//    fprintf(stderr, "pthread_spin_lock\n");
    if (!inited) {
        return 0;
    }
    recordLockAcquire();
    return Real::pthread_spin_lock(lock);
}

int pthread_spin_trylock(pthread_spinlock_t *lock) throw() {
//    fprintf(stderr, "pthread_spin_trylock\n");
    if (!inited) {
        return 0;
    }
    recordLockAcquire();
    return Real::pthread_spin_trylock(lock);
}

int pthread_mutex_lock(pthread_mutex_t *mutex) throw() {
//    fprintf(stderr, "pthread_mutex_lock\n");
    if (!inited) {
        return 0;
    }
    recordLockAcquire();
    return Real::pthread_mutex_lock(mutex);
}

int pthread_mutex_trylock(pthread_mutex_t *mutex) throw() {
//    fprintf(stderr, "pthread_mutex_trylock\n");
    if (!inited) {
        return 0;
    }
    recordLockAcquire();
    return Real::pthread_mutex_trylock(mutex);
}

int pthread_barrier_wait(pthread_barrier_t *barrier) throw() {
//    fprintf(stderr, "pthread_barrier_wait\n");
    recordLockAcquire();
    return Real::pthread_barrier_wait(barrier);
}

void store_16bytes(unsigned long addr) { handleAccess(addr, 16, E_ACCESS_WRITE); }

void store_8bytes(unsigned long addr) { handleAccess(addr, 8, E_ACCESS_WRITE); }

void store_4bytes(unsigned long addr) { handleAccess(addr, 4, E_ACCESS_WRITE); }

void store_2bytes(unsigned long addr) { handleAccess(addr, 2, E_ACCESS_WRITE); }

void store_1bytes(unsigned long addr) { handleAccess(addr, 1, E_ACCESS_WRITE); }

void load_16bytes(unsigned long addr) { handleAccess(addr, 16, E_ACCESS_READ); }

void load_8bytes(unsigned long addr) { handleAccess(addr, 8, E_ACCESS_READ); }

void load_4bytes(unsigned long addr) { handleAccess(addr, 4, E_ACCESS_READ); }

void load_2bytes(unsigned long addr) { handleAccess(addr, 2, E_ACCESS_READ); }

void load_1bytes(unsigned long addr) { handleAccess(addr, 1, E_ACCESS_READ); }
