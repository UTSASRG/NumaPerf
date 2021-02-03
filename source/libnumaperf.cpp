
#include "utils/concurrency/automics.h"
#include "libnumaperf.h"
#include "utils/collection/hashmap.h"
#include "utils/concurrency/spinlock.h"
#include "utils/collection/hashfuncs.h"
#include <assert.h>
#include "utils/collection/priorityqueue.h"
#include "bean/pagedetailAccessInfo.h"
#include "bean/diagnosecacheinfo.h"
#include "utils/memorypool.h"
#include "bean/pagebasicaccessinfo.h"
#include "bean/cachelinedetailedinfo.h"
#include "bean/diagnosecallsiteinfo.h"
#include "utils/log/Logger.h"
#include "utils/timer.h"
#include <execinfo.h>
#include "utils/collection/addrtocacheptrindexshadowmap.h"
#include "bean/threadstageinfo.h"
#include "bean/threadbasedinfo.h"
#include "bean/lockinfo.h"
#include "bean/threadstageinfo.h"
#include "bean/diagnosepageinfo.h"
#include "bean/objectInfo.h"
#include "utils/collection/addrtopageindexshadowmap.h"
#include "utils/collection/addrtocacheindexshadowmap.h"
#include "utils/collection/addrtopagesinglefragshadowmap.h"
#include "utils/programs.h"
#include "utils/asserts.h"
#include "utils/sorts.h"
#include "utils/numa/numas.h"

inline void collectAndClearObjInfo(ObjectInfo *objectInfo);

#define BASIC_PAGE_SHADOW_MAP_SIZE (32ul * TB)
#define MAX_HANDLE_ADDRESS BASIC_PAGE_SHADOW_MAP_SIZE / sizeof(PageBasicAccessInfo) * PAGE_SIZE

typedef HashMap<unsigned long, ObjectInfo *, spinlock, localAllocator> ObjectInfoMap;
typedef HashMap<unsigned long, DiagnoseCallSiteInfo *, spinlock, localAllocator> CallSiteInfoMap;
typedef HashMap<unsigned long, LockInfo *, spinlock, localAllocator> LockInfoMap;
typedef AddressToPageIndexSingleFragShadowMap<PageBasicAccessInfo> PageBasicAccessInfoShadowMap;
typedef AddressToCachePtrIndexShadowMap CacheLineDetailedInfoShadowMap;


thread_local int pageBasicSamplingFrequency = 0;

bool inited = false;
unsigned long long applicationStartTime = 0;
unsigned long largestThreadIndex = 0;
thread_local ThreadBasedInfo *threadBasedInfo = NULL;
thread_local unsigned long currentThreadIndex = 0;

long liveThreads = 0;
unsigned long parallelRunningTime = 0;
unsigned long parallelStartTime = 0;


ThreadBasedInfo *GlobalThreadBasedInfo[MAX_THREAD_NUM];
ObjectInfoMap objectInfoMap;
CallSiteInfoMap callSiteInfoMap;
LockInfoMap lockInfoMap;
PageBasicAccessInfoShadowMap pageBasicAccessInfoShadowMap;
CacheLineDetailedInfoShadowMap cacheLineDetailedInfoShadowMap;
//PriorityQueue<DiagnoseCacheLineInfo> topCacheLineQueue(MAX_TOP_GLOBAL_CACHELINE_DETAIL_INFO);
//PriorityQueue<DiagnosePageInfo> topPageQueue(MAX_TOP_GLOBAL_PAGE_DETAIL_INFO);

static void initializer(void) {
    Logger::info("NumaPerf initializer\n");
    Real::init();
    void *callStacks[1];
    backtrace(callStacks, 1);
    objectInfoMap.initialize(HashFuncs::hashUnsignedlong, HashFuncs::compareUnsignedLong, 1048576);
    callSiteInfoMap.initialize(HashFuncs::hashUnsignedlong, HashFuncs::compareUnsignedLong, 1024);
    lockInfoMap.initialize(HashFuncs::hashUnsignedlong, HashFuncs::compareUnsignedLong, 4 * 1024);
    // could support 32T/sizeOf(BasicPageAccessInfo)*4K > 2000T
    pageBasicAccessInfoShadowMap.initialize(BASIC_PAGE_SHADOW_MAP_SIZE, true);
    cacheLineDetailedInfoShadowMap.initialize(32ul * TB);
    threadBasedInfo = ThreadBasedInfo::createThreadBasedInfo(NULL, NULL);
    GlobalThreadBasedInfo[0] = threadBasedInfo;
    applicationStartTime = Timer::getCurrentCycle();
    inited = true;
}

//https://stackoverflow.com/questions/50695530/gcc-attribute-constructor-is-called-before-object-constructor
static int const do_init = (initializer(), 0);
//MemoryPool ObjectInfo::localMemoryPool(ADDRESSES::alignUpToCacheLine(sizeof(ObjectInfo)),
//                                       GB * 4);
MemoryPool CacheLineDetailedInfo::localMemoryPool((char *) "CacheLineDetailedInfo",
                                                  sizeof(CacheLineDetailedInfo),
                                                  GB * 4);
MemoryPool PageDetailedAccessInfo::localMemoryPool((char *) "PageDetailedAccessInfo",
                                                   sizeof(PageDetailedAccessInfo),
                                                   GB * 128);

MemoryPool PageBasicAccessInfo::localMemoryPool((char *) "PageBasicAccessInfo",
                                                sizeof(unsigned short) * CACHE_NUM_IN_PAGE,
                                                GB * 128);

//MemoryPool PageDetailedAccessInfo::localThreadAccessNumberFirstLayerMemoryPool(
//        (char *) "AccessNumberFirstLayerMemPool",
//        (SLOTS_IN_FIRST_LAYER * sizeof(unsigned short *)),
//        GB * 4);
//
//MemoryPool PageDetailedAccessInfo::localThreadAccessNumberSecondLayerMemoryPool(
//        (char *) "AccessNumberSecoLayerMemPool",
//        (SLOTS_IN_SECOND_LAYER * sizeof(unsigned short)),
//        GB * 4);

MemoryPool DiagnoseObjInfo::localMemoryPool((char *) "DiagnoseObjInfo",
                                            (sizeof(DiagnoseObjInfo)),
                                            GB * 1);

MemoryPool DiagnoseCallSiteInfo::localMemoryPool((char *) "DiagnoseCallSiteInfo",
                                                 (sizeof(DiagnoseCallSiteInfo)),
                                                 GB * 1);

MemoryPool DiagnoseCacheLineInfo::localMemoryPool((char *) "DiagnoseCacheLineInfo",
                                                  (sizeof(DiagnoseCacheLineInfo)),
                                                  GB * 1);

MemoryPool DiagnosePageInfo::localMemoryPool((char *) "DiagnosePageInfo",
                                             (sizeof(DiagnosePageInfo)),
                                             GB * 1);

inline void preAccessThreadBasedAccessNumber() {
    for (unsigned long i = 0; i <= largestThreadIndex; i++) {
        for (unsigned long j = 0; j <= largestThreadIndex; j++) {
            if (i == j) {
//                GlobalThreadBasedAccessNumber[i][j] = 0;
                continue;
            }
            if (i > j) {
                GlobalThreadBasedInfo[i]->setThreadBasedAccessNumber(j,
                                                                     GlobalThreadBasedInfo[j]->getThreadBasedAccessNumber()[i]);
                continue;
            }
            GlobalThreadBasedInfo[i]->addThreadBasedAccessNumber(j,
                                                                 GlobalThreadBasedInfo[j]->getThreadBasedAccessNumber()[i]);
        }
    }
}

#define IGNORE_EXTRAM_CASE 20
#define SMALL_THREAD_ACCESS_THRESHOLD 20

inline void getThreadBasedAverageAccessNumber(unsigned long *threadBasedAverageAccessNumber) {
    for (unsigned long i = 0; i <= largestThreadIndex; i++) {
        threadBasedAverageAccessNumber[i] = 0;
        int num = 0;
        for (unsigned long j = 0; j <= largestThreadIndex; j++) {
//            printf("thread-%lu,to thread:%lu, access number:%lu\n", i, j,
//                   GlobalThreadBasedInfo[i]->getThreadBasedAccessNumber()[j]);
            // thread 0 usually has massive mem access, so make it as balanced one by default.
            if (i == j || j == 0) {
                continue;
            }
            //bypass small number , treat it as zero
            if (GlobalThreadBasedInfo[i]->getThreadBasedAccessNumber()[j] < SMALL_THREAD_ACCESS_THRESHOLD) {
                continue;
            }
            num++;
            threadBasedAverageAccessNumber[i] += GlobalThreadBasedInfo[i]->getThreadBasedAccessNumber()[j];
        }
        threadBasedAverageAccessNumber[i] = num == 0 ? num : threadBasedAverageAccessNumber[i] / num;
    }
}

inline void getThreadBasedAccessNumberDeviation(unsigned long *threadBasedAverageAccessNumber,
                                                unsigned long *threadBasedAccessNumberDeviation) {
    for (unsigned long i = 0; i <= largestThreadIndex; i++) {
        threadBasedAccessNumberDeviation[i] = 0;
        int num = 0;
        for (unsigned long j = 0; j <= largestThreadIndex; j++) {
            if (i == j || j == 0) {
                continue;
            }
            //bypass small number , treat it as zero
            if (GlobalThreadBasedInfo[i]->getThreadBasedAccessNumber()[j] < SMALL_THREAD_ACCESS_THRESHOLD) {
                continue;
            }
            num++;
            threadBasedAccessNumberDeviation[i] += abs((long long)
                                                               (GlobalThreadBasedInfo[i]->getThreadBasedAccessNumber()[j] -
                                                                threadBasedAverageAccessNumber[i]));
        }
        threadBasedAccessNumberDeviation[i] = num == 0 ? num : threadBasedAccessNumberDeviation[i] / num;
    }
}

inline void getLocalBalancedThread(unsigned long *threadBasedAverageAccessNumber,
                                   bool *localBalancedThread) {
    for (unsigned long i = 0; i <= largestThreadIndex; i++) {
        if (GlobalThreadBasedInfo[i]->getThreadBasedAccessNumber()[i] - threadBasedAverageAccessNumber[i] >
            threadBasedAverageAccessNumber[i]) {
            localBalancedThread[i] = false;
            continue;
        }
        localBalancedThread[i] = true;
    }
}

#define BALANCE_DEVIATION_THRESHOLD 1
#define MIN_AVERAGE_THRESHOLD_THRESHOLD 1000

inline int getGlobalBalancedThread(unsigned long *threadBasedAverageAccessNumber,
                                   unsigned long *threadBasedAccessNumberDeviation,
                                   bool *balancedThread, unsigned long totalRunningCycles) {
    int balancedThreadNum = 1;
    balancedThread[0] = true;
    // thread 0 usually has massive mem access, so make it as balanced one by default.
    for (unsigned long i = 1; i <= largestThreadIndex; i++) {
//        printf("thread:%lu, deviation:%lu, score:%f, average:%lu, score:%f, parallelPercent:%f\n", i, threadBasedAccessNumberDeviation[i],Scores::getSeriousScore(threadBasedAccessNumberDeviation[i], totalRunningCycles),threadBasedAverageAccessNumber[i],Scores::getSeriousScore(threadBasedAverageAccessNumber[i], totalRunningCycles),GlobalThreadBasedInfo[i]->getParallelPercent(totalRunningCycles));
        // small average means very few latency.
//        if (threadBasedAverageAccessNumber[i] < MIN_AVERAGE_THRESHOLD_THRESHOLD) {
//            balancedThread[i] = true;
//            continue;
//        }
        if (BALANCE_DEVIATION_THRESHOLD <
            Scores::getSeriousScore(threadBasedAccessNumberDeviation[i], totalRunningCycles)) {
            balancedThread[i] = false;
            continue;
        }
        int bigAccessThreadNum = 0;
        for (unsigned long j = 0; j <= largestThreadIndex; j++) {
            // todo maybe remove balanced one
            if (GlobalThreadBasedInfo[i]->getThreadBasedAccessNumber()[j] > SMALL_THREAD_ACCESS_THRESHOLD) {
                bigAccessThreadNum++;
            }
        }
        // thread i is sparse, so it is imbalance even with small deviation
        if (bigAccessThreadNum < 2 * largestThreadIndex / NUMA_NODES &&
            bigAccessThreadNum > largestThreadIndex / NUMA_NODES / 3) {
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
        int num = 0;
        for (unsigned long j = 0; j <= largestThreadIndex; j++) {
            if (balancedThread[j] || i == j) {
                continue;
            }
            //bypass small number , treat it as zero
            if (GlobalThreadBasedInfo[i]->getThreadBasedAccessNumber()[j] < SMALL_THREAD_ACCESS_THRESHOLD) {
                continue;
            }
            num++;
            threadBasedAverageAccessNumber[i] += GlobalThreadBasedInfo[i]->getThreadBasedAccessNumber()[j];
        }
        threadBasedAverageAccessNumber[i] =
                num == 0 ? num : threadBasedAverageAccessNumber[i] / num;
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
        int num = 0;
        for (unsigned long j = 0; j <= largestThreadIndex; j++) {
            if (balancedThread[j] || i == j) {
                continue;
            }
            //bypass small number , treat it as zero
            if (GlobalThreadBasedInfo[i]->getThreadBasedAccessNumber()[j] < SMALL_THREAD_ACCESS_THRESHOLD) {
                continue;
            }
            num++;
            threadBasedAccessNumberDeviation[i] += abs((long long)
                                                               (GlobalThreadBasedInfo[i]->getThreadBasedAccessNumber()[j] -
                                                                threadBasedAverageAccessNumber[i]));
        }
        threadBasedAccessNumberDeviation[i] =
                num == 0 ? num : threadBasedAccessNumberDeviation[i] / num;
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
                GlobalThreadBasedInfo[i]->setThreadBasedAccessNumber(j, 0);
            }
        }
        Sorts::getOrder(GlobalThreadBasedInfo[i]->getThreadBasedAccessNumber(), &(ordersOfThread[i * MAX_THREAD_NUM]),
                        largestThreadIndex + 1);
        Sorts::sortToIndex(GlobalThreadBasedInfo[i]->getThreadBasedAccessNumber(), &(indexByOrder[i * MAX_THREAD_NUM]),
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
                                bool *globalBalancedThread, unsigned long totalRunningCycles) {
    preAccessThreadBasedAccessNumber();
    getThreadBasedAverageAccessNumber(threadBasedAverageAccessNumber);
//    getLocalBalancedThread(threadBasedAverageAccessNumber, localBalancedThread);
    getThreadBasedAccessNumberDeviation(threadBasedAverageAccessNumber, threadBasedAccessNumberDeviation);
    int balancedThreadNum = getGlobalBalancedThread(threadBasedAverageAccessNumber, threadBasedAccessNumberDeviation,
                                                    globalBalancedThread, totalRunningCycles);
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
                                                globalBalancedThread, totalRunningCycles);
    return balancedThreadNum;
}

float __getParallelPercent(unsigned long totalRunningCycles) {
    if (totalRunningCycles < parallelRunningTime) {
        return 1;
    }
    // some application children threads exit after main thread like lulesh amg..
    if (liveThreads > MIN_PARALLEL_THREAD_NUM) {
        parallelRunningTime += Timer::getCurrentCycle() - parallelStartTime;
    }
//    if (liveThreads > MIN_PARALLEL_THREAD_NUM && parallelRunningTime == 0) {
//        return 1;
//    }
    return (float) parallelRunningTime / (float) totalRunningCycles;
}

__attribute__ ((destructor)) void finalizer(void) {
    unsigned long long totalRunningCycles = Timer::getCurrentCycle() - applicationStartTime;
    Logger::info("NumaPerf finalizer, totalRunningCycles:%lu\n", totalRunningCycles);
    inited = false;
    FILE *dumpFile = fopen("NumaPerf.dump", "w");
    if (!dumpFile) {
        Logger::error("can not reate dump file:NumaPerf.dump\n");
        exit(9);
    }
    for (unsigned long i = 1; i <= largestThreadIndex; i++) {
        if (!GlobalThreadBasedInfo[i]->isEnd()) {
            GlobalThreadBasedInfo[i]->end();
        }
//        fprintf(stderr, "thread-%lu, parallel rate:%f\n", i,
//                GlobalThreadBasedInfo[i]->getParallelPercent(totalRunningCycles));
    }

    float parallelPercent = __getParallelPercent(totalRunningCycles);
    fprintf(dumpFile, "Parallel Running Percent:%f\n", parallelPercent);
    if (parallelPercent < MIN_PARALLEL_PERCENT) {
        fprintf(dumpFile, "Parallel Running Percent too small\n");
        return;
    }
    // collect and clear some objects that are not explicitly freed.
    for (auto iterator = objectInfoMap.begin(); iterator != objectInfoMap.end(); iterator++) {
        collectAndClearObjInfo(iterator.getData());
    }

    PriorityQueue<DiagnoseCallSiteInfo> topDiadCallSiteInfoQueue(MAX_TOP_CALL_SITE_INFO);
    for (auto iterator = callSiteInfoMap.begin(); iterator != callSiteInfoMap.end(); iterator++) {
//        fprintf(stderr, "%lu ,", iterator.getData()->getTotalRemoteAccess());
//        fprintf(stderr, "callSiteInfoMap callSite:%lu\n", iterator.getData()->getCallSiteAddress());
//        if (iterator.getData()->getSeriousScore(totalRunningCycles) <= SERIOUS_SCORE_THRESHOLD) {
//            continue;
//        }
//        topDiadCallSiteInfoQueue.insert(iterator.getData());
#if 1
        if (iterator.getData()->getPageSeriousScore(totalRunningCycles) > PAGE_SERIOUS_SCORE_THRESHOLD) {
            topDiadCallSiteInfoQueue.insert(iterator.getData());
            continue;
        }
        if (iterator.getData()->getTrueSharingSeriousScore(totalRunningCycles) > TRUE_SHARING_SERIOUS_SCORE_THRESHOLD) {
            topDiadCallSiteInfoQueue.insert(iterator.getData());
            continue;
        }
        if (iterator.getData()->getFalseSharingSeriousScore(totalRunningCycles) >
            FALSE_SHARING_SERIOUS_SCORE_THRESHOLD) {
            topDiadCallSiteInfoQueue.insert(iterator.getData());
            continue;
        }
        if (iterator.getData()->getDuplicateSeriousScore(totalRunningCycles) > DUPLICATE_SERIOUS_SCORE_THRESHOLD) {
            topDiadCallSiteInfoQueue.insert(iterator.getData());
            continue;
        }
#endif
    }

    fprintf(dumpFile, "Table of Contents\n");
    fprintf(dumpFile, "    Part One: Thread number recommendation for each stage.\n");
    fprintf(dumpFile, "    Part Two: Thread based node migration times.\n");
    fprintf(dumpFile, "    Part Three: Thread based imbalance detection & threads binding recommendation.\n");
    fprintf(dumpFile, "    Part Four: Top %d problematical callsites.\n\n\n", MAX_TOP_CALL_SITE_INFO);


    fprintf(dumpFile, "Part One: Thread number recommendation for each stage.\n");
    typedef HashMap<unsigned long, ThreadStageInfo *, spinlock, localAllocator> ThreadStageInfoMap;
    ThreadStageInfoMap threadStageInfoMap;
    threadStageInfoMap.initialize(HashFuncs::hashUnsignedlong, HashFuncs::compareUnsignedLong, 30);
    int callsiteNum = 0;
    for (unsigned long i = 1; i <= largestThreadIndex; i++) {

        if (GlobalThreadBasedInfo[i]->getTotalRunningTime() == 0) {
            GlobalThreadBasedInfo[i]->end();
        }
        unsigned long callSiteKey = (unsigned long) (GlobalThreadBasedInfo[i]->getThreadStartFunPtr());
        ThreadStageInfo *threadStageInfo = threadStageInfoMap.find(callSiteKey, 0);
        if (NULL == threadStageInfo) {
            callsiteNum++;
            threadStageInfo = ThreadStageInfo::createThreadStageInfo(
                    GlobalThreadBasedInfo[i]->getThreadCreateCallSiteStack());
            threadStageInfoMap.insert(callSiteKey, 0, threadStageInfo);
        }
        threadStageInfo->recordThreadBasedInfo(GlobalThreadBasedInfo[i], i, largestThreadIndex);
    }
    if (callsiteNum > 1) {
        int stage = 1;
        for (auto iterator = threadStageInfoMap.begin(); iterator != threadStageInfoMap.end(); iterator++) {
            ThreadStageInfo *data = iterator.getData();
            if (data->getThreadNumber() == 1) {
                continue;
            }
            fprintf(dumpFile, "Thread Stage-%d: \n", stage);
            data->getThreadCreateCallSite()->printFrom(1, dumpFile);
            fprintf(dumpFile, "Current Thread Number:%lu, MemoryLatency:%llu, local:%llu, remote:%llu\n",
                    data->getThreadNumber(),
                    data->getTotalMemoryOverheads(),
                    data->getTotalLocalAccess(),
                    data->getTotalRemoteAccess());
//            fprintf(dumpFile, "Thread Number:%lu, User Usage:%f, Recommendation:%lu", data->getThreadNumber(),
//                    data->getUserUsage(), data->getRecommendThreadNum());
//            if (data->getUserUsage() > THREAD_FULL_USAGE) {
//                fprintf(dumpFile, "++");
//            }
            fprintf(dumpFile, "\n");
            stage++;
        }
    }

    fprintf(dumpFile, "\n");

    long totalContentionNum = 0;
    long totalMutexContentionNum = 0;
    long totalConditionContentionNum = 0;
    long totalBarrierContentionNum = 0;

    long totalMigrationNum = 0;
    long totalMutexContentionMigrationNum = 0;
    long totalConditionContentionMigrationNum = 0;
    long totalBarrierContentionMigrationNum = 0;

    float totalMigrationScore = 0;
    for (unsigned long i = 1; i <= largestThreadIndex; i++) {
        totalContentionNum += GlobalThreadBasedInfo[i]->getLockContentionNum();
        totalMutexContentionNum += GlobalThreadBasedInfo[i]->getMutexContentionNum();
        totalConditionContentionNum += GlobalThreadBasedInfo[i]->getConditionContentionNum();
        totalBarrierContentionNum += GlobalThreadBasedInfo[i]->getBarrierContentionNum();
        totalMigrationScore += GlobalThreadBasedInfo[i]->getLockContentionScore(totalRunningCycles);

        totalMigrationNum += GlobalThreadBasedInfo[i]->getNodeMigrationNum();
        totalMutexContentionMigrationNum += GlobalThreadBasedInfo[i]->getMutexNodeMigrationNum();
        totalConditionContentionMigrationNum += GlobalThreadBasedInfo[i]->getconditionNodeMigrationNum();
        totalBarrierContentionMigrationNum += GlobalThreadBasedInfo[i]->getBarrierNodeMigrationNum();
    }
    fprintf(dumpFile,
            "Part Two: Thread based node migration times:%lu, serious score:%f\n", totalContentionNum,
            totalMigrationScore);
    fprintf(dumpFile,
            "totalContentionNum:%lu, totalMutexContentionNum:%lu, totalConditionContentionNum:%lu, totalBarrierContentionNum:%lu\n",
            totalContentionNum, totalMutexContentionNum, totalConditionContentionNum, totalBarrierContentionNum);
    fprintf(dumpFile,
            "totalMigrationNum:%lu, totalMutexContentionMigrationNum:%lu, totalConditionContentionMigrationNum:%lu, totalBarrierContentionMigrationNum:%lu\n",
            totalMigrationNum, totalMutexContentionMigrationNum, totalConditionContentionMigrationNum, totalBarrierContentionMigrationNum);
    if (totalMigrationScore < THREAD_MIGRATION_SERIOUS_SCORE_THRESHOLD) {
        fprintf(dumpFile, "  low migration scores, does not need to do thread binding\n");
    }

    for (unsigned long i = 1; i <= largestThreadIndex; i++) {
        if (GlobalThreadBasedInfo[i]->getLockContentionNum() > 0) {
            fprintf(dumpFile, "  Thread-:%lu, migrate to another noodes times: %lu\n", i,
                    GlobalThreadBasedInfo[i]->getLockContentionNum());
        }
    }
    fprintf(dumpFile, "\n\n");

    fprintf(dumpFile,
            "Part Three: Thread based imbalance detection & threads binding recommendation:\n\n");
    unsigned long threadBasedAverageAccessNumber[MAX_THREAD_NUM];
    unsigned long threadBasedAccessNumberDeviation[MAX_THREAD_NUM];
    bool globalBalancedThread[MAX_THREAD_NUM];
    bool localBalancedThread[MAX_THREAD_NUM];
    int balancedThreadNum = threadBasedImbalancedDetect(threadBasedAverageAccessNumber,
                                                        threadBasedAccessNumberDeviation, localBalancedThread,
                                                        globalBalancedThread, totalRunningCycles);
#if 0
    for (unsigned long i = 0; i <= largestThreadIndex; i++) {
        fprintf(dumpFile,
                "threadBasedAverageAccessNumber-%lu:%lu, score:%f\nthreadBasedAccessNumberDeviation-%lu:%lu, score:%f\n\n",
                i, threadBasedAverageAccessNumber[i],
                Scores::getSeriousScore(threadBasedAverageAccessNumber[i], totalRunningCycles), i,
                threadBasedAccessNumberDeviation[i],
                Scores::getSeriousScore(threadBasedAccessNumberDeviation[i], totalRunningCycles));
    }
#endif
//    fprintf(dumpFile,
//            "2.1 Local ImBalanced Threads:\n");
//    for (
//            unsigned long i = 0;
//            i <=
//            largestThreadIndex;
//            i++) {
//        if (!localBalancedThread[i]) {
//            fprintf(dumpFile,
//                    "%ld,", i);
//        }
//    }
//    fprintf(dumpFile,
//            "\n\n");

    fprintf(dumpFile,
            "2.1 Global Balanced Threads:\n");
    for (
            unsigned long i = 0;
            i <=
            largestThreadIndex;
            i++) {
        if (globalBalancedThread[i]) {
            fprintf(dumpFile,
                    "%ld,", i);
        }
    }
    fprintf(dumpFile,
            "\n\n");

    fprintf(dumpFile,
            "2.2 Global ImBalanced Threads:\n");
    for (
            unsigned long i = 0;
            i <=
            largestThreadIndex;
            i++) {
        if (!globalBalancedThread[i]) {
            fprintf(dumpFile,
                    "%ld,", i);
        }
    }
    fprintf(dumpFile, "\n\n");
    fprintf(dumpFile,
            "2.3 Threads binding recomendations:\n");
// get threads binding recommendations
    ThreadCluster *threadClusters = (ThreadCluster *) Real::malloc(sizeof(ThreadCluster) * MAX_THREAD_NUM);
    memset(threadClusters,
           0, sizeof(long) * MAX_THREAD_NUM * MAX_THREAD_NUM);
    getTightThreadClusters(threadBasedAverageAccessNumber, globalBalancedThread, balancedThreadNum, threadClusters
    );
    int cluster = 0;
    for (
            unsigned long i = 0;
            i <=
            largestThreadIndex;
            i++) {
        if (threadClusters[i].num == 0) {
            continue;
        }
        cluster++;
        fprintf(dumpFile,
                "Thread cluster-%d (%d):", cluster, threadClusters[i].num);
        for (
                unsigned long j = 0;
                j < threadClusters[i].
                        num;
                j++) {
            fprintf(dumpFile,
                    "%ld,", threadClusters[i].threadId[j]);
        }
        fprintf(dumpFile,
                "\n");
    }
    fprintf(dumpFile,
            "\n\n");
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
    fprintf(dumpFile,
            "Part Four: Top %d problematical callsites:\n", MAX_TOP_CALL_SITE_INFO);
    for (
            int i = 0;
            i < topDiadCallSiteInfoQueue.

                    getSize();

            i++) {
        fprintf(dumpFile,
                "   Top problematical callsites %d:\n", i + 1);
        topDiadCallSiteInfoQueue.getValues()[i]->
                dump(dumpFile, totalRunningCycles,
                     4);
        fprintf(dumpFile,
                "\n\n");
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
        Asserts::assertt(allocated + size < INIT_BUFF_SIZE, 1, (char *) "not enough temp memory");
        void *resultPtr = (void *) &initBuf[allocated];
        allocated += size;
        //Logger::info("malloc address:%p, totcal cycles:%lu\n", resultPtr, Timer::getCurrentCycle() - startCycle);
        return resultPtr;
    }
    void *objectStartAddress = Real::malloc(size);
    Asserts::assertt(objectStartAddress != NULL, 1, (char *) "null point from malloc");
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
#define USING_BACKTRACE 0
#if USING_BACKTRACE
    CallStack localCallStack = CallStack();
    localCallStack.fillCallStack();
    callerAddress = localCallStack.getKey();
#endif
    if (callSiteInfoMap.find((unsigned long) callerAddress, 0) == NULL) {
        DiagnoseCallSiteInfo *diagnoseCallSiteInfo = DiagnoseCallSiteInfo::createNewDiagnoseCallSiteInfo();
        if (!callSiteInfoMap.insertIfAbsent((unsigned long) callerAddress, 0, diagnoseCallSiteInfo)) {
            DiagnoseCallSiteInfo::release(diagnoseCallSiteInfo);
        } else {
            CallStack *callStack = diagnoseCallSiteInfo->getCallStack();
            callStack->fillCallStack();
#if !USING_BACKTRACE
            if ((void *) callerAddress != callStack->getCallStack()[2]) {
                Logger::error("callStackSize != callerAddress\n");
            }
#endif
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

#if 0
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
//        if (allPageCoveredByObj) {
//            pageBasicAccessInfo->clearAll();
//        } else {
//            pageBasicAccessInfo->clearResidObjInfo(objStartAddress, objSize);
//        }
        if (pageDetailedAccessInfo == NULL) {
            continue;
        }
        bool allPageCoveredByObj = pageDetailedAccessInfo->isCoveredByObj(objStartAddress, objSize);

        unsigned long seriousScore = pageDetailedAccessInfo->getTotalRemoteAccess();

        // insert into global top page queue
//        if (topPageQueue.mayCanInsert(seriousScore)) {
//            DiagnosePageInfo *diagnosePageInfo = DiagnosePageInfo::createDiagnosePageInfo(objectInfo->copy(),
//                                                                                          diagnoseCallSiteInfo,
//                                                                                          pageDetailedAccessInfo);
//            DiagnosePageInfo *diagnosePageInfoOld = topPageQueue.insert(diagnosePageInfo, true);
//            if (NULL != diagnosePageInfoOld) {
//                DiagnosePageInfo::release(diagnosePageInfoOld);
//            }
//        }

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
        CacheLineDetailedInfo *cacheLineDetailedInfo = (CacheLineDetailedInfo *) cacheLineDetailedInfoShadowMap.find(
                cacheLineAddress);
        // remove the info in cache level, even there maybe are more objs inside it.
        if (NULL == cacheLineDetailedInfo) {
            continue;
        }
        unsigned long seriousScore = cacheLineDetailedInfo->getTotalRemoteAccess();
        // insert into global top cache queue
//        if (topCacheLineQueue.mayCanInsert(seriousScore)) {
//            DiagnoseCacheLineInfo *diagnoseCacheLineInfo = DiagnoseCacheLineInfo::createDiagnoseCacheLineInfo(
//                    objectInfo->copy(), diagnoseCallSiteInfo, cacheLineDetailedInfo);
//            DiagnoseCacheLineInfo *oldTopCacheLine = topCacheLineQueue.insert(diagnoseCacheLineInfo, true);
//            if (NULL != oldTopCacheLine) {
//                DiagnoseCacheLineInfo::release(oldTopCacheLine);
//            }
//        }

        // insert into obj's top cache queue
        CacheLineDetailedInfo *cacheCanClear = diagnoseObjInfo->insertCacheLineDetailedInfo(cacheLineDetailedInfo);
        if (NULL == cacheCanClear) {
            continue;
        }
        cacheCanClear->clear();
    }
}
#endif

inline void __recordAndClearInfo(ObjectInfo *objectInfo, DiagnoseObjInfo *localDiagnoseObjInfo) {
    unsigned long objStartAddress = objectInfo->getStartAddress();
    unsigned long objSize = objectInfo->getSize();
    unsigned long objEndAddress = objStartAddress + objSize;
    // record each page sharing info if obj size is large enough
    if (objSize > (NUMA_NODES * PAGE_SIZE << 1)) {
        localDiagnoseObjInfo->createPageSharingDetail();
    }
    for (unsigned long beginningAddress = objStartAddress;      // for page
         beginningAddress < objEndAddress; beginningAddress += PAGE_SIZE) {
        PageBasicAccessInfo *pageBasicAccessInfo = pageBasicAccessInfoShadowMap.find(beginningAddress);
        if (NULL == pageBasicAccessInfo) {
            Logger::error("pageBasicAccessInfo is lost\n");
            continue;
        }
        DiagnosePageInfo localDiagnosePageInfo(ADDRESSES::getPageStartAddress(beginningAddress));
        PageDetailedAccessInfo *pageDetailedAccessInfo = pageBasicAccessInfo->getPageDetailedAccessInfo();
        if (pageDetailedAccessInfo != NULL) {
            localDiagnosePageInfo.recordPageInfo(pageDetailedAccessInfo, objStartAddress,
                                                 objEndAddress);
            if (pageDetailedAccessInfo->isCoveredByObj(objStartAddress, objSize)) {
                pageDetailedAccessInfo->clearAll();
            } else {
                pageDetailedAccessInfo->clearResidObjInfo(objStartAddress, objSize);
            }
        }
        for (unsigned long cacheLineAddress = beginningAddress;  // for cache
             cacheLineAddress < objEndAddress &&
             cacheLineAddress < beginningAddress + PAGE_SIZE; cacheLineAddress += CACHE_LINE_SIZE) {
            CacheLineDetailedInfo *cacheLineDetailedInfo = (CacheLineDetailedInfo *) cacheLineDetailedInfoShadowMap.find(
                    cacheLineAddress);
            // remove the info in cache level, even there maybe are more objs inside it.
            if (NULL == cacheLineDetailedInfo) {
                continue;
            }
            localDiagnosePageInfo.recordCacheInfo(cacheLineDetailedInfo);
            // remove the info in cache level, even there maybe are more objs inside it.
            cacheLineDetailedInfo->clear();
        }
        if (localDiagnosePageInfo.isDominatedByCacheSharing()) {
            continue;
        }
        localDiagnoseObjInfo->recordDiagnosePageInfo(&localDiagnosePageInfo);
    }
}

#if 0
inline void __clearCachePageInfo(ObjectInfo *objectInfo) {
    unsigned long objStartAddress = objectInfo->getStartAddress();
    unsigned long objSize = objectInfo->getSize();
    unsigned long objEndAddress = objStartAddress + objSize;
    for (unsigned long beginningAddress = objStartAddress;      // for page
         beginningAddress < objEndAddress; beginningAddress += PAGE_SIZE) {
        PageBasicAccessInfo *pageBasicAccessInfo = pageBasicAccessInfoShadowMap.find(beginningAddress);
        if (NULL == pageBasicAccessInfo) {
            Logger::error("pageBasicAccessInfo is lost\n");
            continue;
        }
        PageDetailedAccessInfo *pageDetailedAccessInfo = pageBasicAccessInfo->getPageDetailedAccessInfo();
        if (pageDetailedAccessInfo != NULL) {
            if (pageDetailedAccessInfo->isCoveredByObj(objStartAddress, objSize)) {
                pageDetailedAccessInfo->clearAll();
            } else {
                pageDetailedAccessInfo->clearResidObjInfo(objStartAddress, objSize);
                pageDetailedAccessInfo->clearSumValue();
            }
        }
        for (unsigned long cacheLineAddress = beginningAddress;  // for cache
             cacheLineAddress < objEndAddress &&
             cacheLineAddress < beginningAddress + PAGE_SIZE; cacheLineAddress += CACHE_LINE_SIZE) {
            CacheLineDetailedInfo *cacheLineDetailedInfo = (CacheLineDetailedInfo *) cacheLineDetailedInfoShadowMap.find(
                    cacheLineAddress);
            // remove the info in cache level, even there maybe are more objs inside it.
            if (NULL == cacheLineDetailedInfo) {
                continue;
            }
            cacheLineDetailedInfo->clear();
        }
    }
}

#define MIN_REMOTE_ACCESS_PER_PAGE 100

inline void __collectDetailInfo(ObjectInfo *objectInfo, DiagnoseObjInfo *diagnoseObjInfo) {
    unsigned long objStartAddress = objectInfo->getStartAddress();
    unsigned long objSize = objectInfo->getSize();
    unsigned long objEndAddress = objStartAddress + objSize;
    for (unsigned long beginningAddress = objStartAddress;      // for page
         beginningAddress < objEndAddress; beginningAddress += PAGE_SIZE) {
        PageBasicAccessInfo *pageBasicAccessInfo = pageBasicAccessInfoShadowMap.find(beginningAddress);
        if (NULL == pageBasicAccessInfo) {
            Logger::error("pageBasicAccessInfo is lost\n");
            continue;
        }
        PageDetailedAccessInfo *pageDetailedAccessInfo = pageBasicAccessInfo->getPageDetailedAccessInfo();
        DiagnosePageInfo localDiagnosePageInfo(ADDRESSES::getPageStartAddress(beginningAddress));
        if (pageDetailedAccessInfo != NULL) {
            localDiagnosePageInfo.recordPageInfo(pageDetailedAccessInfo, objStartAddress,
                                                 objEndAddress);
        }
        for (unsigned long cacheLineAddress = beginningAddress;  // for cache
             cacheLineAddress < objEndAddress &&
             cacheLineAddress < beginningAddress + PAGE_SIZE; cacheLineAddress += CACHE_LINE_SIZE) {
            CacheLineDetailedInfo *cacheLineDetailedInfo = (CacheLineDetailedInfo *) cacheLineDetailedInfoShadowMap.find(
                    cacheLineAddress);
            // remove the info in cache level, even there maybe are more objs inside it.
            if (NULL == cacheLineDetailedInfo) {
                continue;
            }
            localDiagnosePageInfo.recordCacheInfo(cacheLineDetailedInfo);
        }

        if (localDiagnosePageInfo.getTotalRemoteMainMemoryAccess() > MIN_REMOTE_ACCESS_PER_PAGE &&
            diagnoseObjInfo->mayCanInsertToTopPageQueue(&localDiagnosePageInfo)) {
            DiagnosePageInfo *diagnosePageInfo = localDiagnosePageInfo.deepCopy();
            DiagnosePageInfo *oldPage = diagnoseObjInfo->insertInfoPageQueue(diagnosePageInfo);
            if (NULL != oldPage) {
                DiagnosePageInfo::releaseAll(oldPage);
            }
        }
    }
}
#endif

inline bool canSmallObjBeFixedByUser(DiagnoseObjInfo *diagnoseObjInfo, DiagnoseCallSiteInfo *diagnoseCallSiteInfo) {
    unsigned long objSize = diagnoseObjInfo->getObjectInfo()->getSize();
    if (objSize > PAGE_SIZE) {  // skip big objects
        return true;
    }
    if (diagnoseObjInfo->isDominateByFalseSharing() &&
        (diagnoseCallSiteInfo->getInvalidNumInOtherThreadByFalseCacheSharing() +
         diagnoseObjInfo->getInvalidNumInOtherThreadByFalseCacheSharing()) >= FALSE_SHARING_DOMINATE_PERCENT *
                                                                              (diagnoseObjInfo->getTotalRemoteAccess() +
                                                                               diagnoseCallSiteInfo->getTotalRemoteAccess())) {
        return true;
    }
    if (diagnoseObjInfo->isDuplicatable()) {
        unsigned long newAllAccessNum =
                diagnoseCallSiteInfo->getAccessNumInOtherThread() + diagnoseObjInfo->getAllAccessNumInOtherThread();
        unsigned long newDuplicateNumber = diagnoseObjInfo->getDuplicateNum();
        if (newAllAccessNum < newDuplicateNumber) {
            return false;
        }
        if (newDuplicateNumber > DUPLICATE_DOMINATE_PERCENT * newAllAccessNum) {
            return true;
        }
    }
    return false;
}

#define MIN_REMOTE_ACCESS_PER_OBJ 100

inline void collectAndClearObjInfo(ObjectInfo *objectInfo) {
//    unsigned long startAddress = objectInfo->getStartAddress();
//    unsigned long size = objectInfo->getSize();
    unsigned long mallocCallSite = objectInfo->getMallocCallSite();
    DiagnoseCallSiteInfo *diagnoseCallSiteInfo = callSiteInfoMap.find(mallocCallSite, 0);
    if (NULL == diagnoseCallSiteInfo) {
        Logger::error("diagnoseCallSiteInfo is lost, mallocCallSite:%lu\n", (unsigned long) mallocCallSite);
        return;
    }
    DiagnoseObjInfo diagnoseObjInfo = DiagnoseObjInfo(objectInfo);
    __recordAndClearInfo(objectInfo, &diagnoseObjInfo);
    if (diagnoseObjInfo.getTotalRemoteAccess() < MIN_REMOTE_ACCESS_PER_OBJ || !canSmallObjBeFixedByUser(
            &diagnoseObjInfo, diagnoseCallSiteInfo)) {
        diagnoseObjInfo.releaseInternal();
        return;
    }

    diagnoseCallSiteInfo->recordDiagnoseObjInfo(&diagnoseObjInfo);
    if (diagnoseCallSiteInfo->mayCanInsertToTopObjQueue(&diagnoseObjInfo)) {
        DiagnoseObjInfo *newDiagnoseObjInfo = diagnoseObjInfo.deepCopy();
        DiagnoseObjInfo *oldDiagnoseObj = diagnoseCallSiteInfo->insertToTopObjQueue(newDiagnoseObjInfo);
        if (oldDiagnoseObj != NULL) {
            DiagnoseObjInfo::releaseAll(oldDiagnoseObj);
        }
    } else {
        diagnoseObjInfo.releaseInternal();
    }
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
    CallStack *callSite;
    unsigned long threadIndex;
} ThreadStartRoutineParameter;

typedef void *(*threadStartRoutineFunPtr)(void *);

void *initThreadIndexRoutine(void *args) {
    ThreadStartRoutineParameter *arguments = (ThreadStartRoutineParameter *) args;
    currentThreadIndex = arguments->threadIndex;
    threadBasedInfo = ThreadBasedInfo::createThreadBasedInfo(arguments->callSite, arguments->startRoutinePtr);
    threadBasedInfo->setCurrentNumaNodeIndex(Numas::getNodeOfCurrentThread());
    GlobalThreadBasedInfo[currentThreadIndex] = threadBasedInfo;
//        Logger::debug("new thread index:%lu\n", currentThreadIndex);
    threadStartRoutineFunPtr startRoutineFunPtr = (threadStartRoutineFunPtr) arguments->startRoutinePtr;
    threadBasedInfo->start();
    long currentAliveThreadNum = Automics::automicIncrease<long>(&liveThreads, 1, -1);
//    printf("currentAliveThreadNum:%lu\n", currentAliveThreadNum);
    if (currentAliveThreadNum == MIN_PARALLEL_THREAD_NUM) {
        parallelStartTime = Timer::getCurrentCycle();
    }
    void *result = startRoutineFunPtr(arguments->parameterPtr);
    currentAliveThreadNum = Automics::automicIncrease<long>(&liveThreads, -1, -1);
//    printf("currentAliveThreadNum:%lu\n", currentAliveThreadNum);
    if (currentAliveThreadNum == MIN_PARALLEL_THREAD_NUM) {
        parallelRunningTime += (Timer::getCurrentCycle() - parallelStartTime);
        parallelStartTime = 0;
    }
    threadBasedInfo->end();
//    memcpy(GlobalThreadBasedAccessNumber[currentThreadIndex], threadBasedInfo->getThreadBasedAccessNumber(),
//           sizeof(unsigned long) * MAX_THREAD_NUM);
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
    unsigned long threadIndex = Automics::automicIncrease<unsigned long>(&largestThreadIndex, 1, -1);
    Asserts::assertt(threadIndex < MAX_THREAD_NUM, 1, (char *) "max thread id out of range");
    arguments->startRoutinePtr = (void *) start_routine;
    arguments->parameterPtr = arg;
//    arguments->callSite = (void *) Programs::getLastEip(&tid, 0x40);
    arguments->callSite = CallStack::createCallStack();
    arguments->threadIndex = threadIndex;
    //fprintf(stderr, "callSite:%p\n",arguments->callSite);
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
    CacheLineDetailedInfo *cacheLineInfoPtr = (CacheLineDetailedInfo *) cacheLineDetailedInfoShadowMap.find(addr);
    if (NULL == cacheLineInfoPtr) {
        cacheLineInfoPtr = CacheLineDetailedInfo::createNewCacheLineDetailedInfo(
                ADDRESSES::getCacheLineStartAddress(addr));
        bool ret = cacheLineDetailedInfoShadowMap.insertIfAbsent(addr, cacheLineInfoPtr);
        if (!ret) {
            CacheLineDetailedInfo::release(cacheLineInfoPtr);
            cacheLineInfoPtr = (CacheLineDetailedInfo *) cacheLineDetailedInfoShadowMap.find(addr);
        }
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
//     set real first touch thread id for huge objects
    if (firstTouchThreadId < 0 && type == E_ACCESS_READ) {
        return;
    }
    if (firstTouchThreadId < 0) {
        basicPageAccessInfo->setFirstTouchThreadIdIfAbsent(currentThreadIndex);
        firstTouchThreadId = basicPageAccessInfo->getFirstTouchThreadId();
//        Logger::warn("firstTouchThread:%lu\n", firstTouchThreadId);
    }
#ifdef SAMPLING
    // todo thread local sampling is still too costing
    // but did not find a better way. generating a random number is slower than this
    bool sampled = false;
    pageBasicSamplingFrequency++;
    if (pageBasicSamplingFrequency > SAMPLING_FREQUENCY) {
        sampled = true;
        pageBasicSamplingFrequency = 0;
    }
#endif

    if (!needPageDetailInfo) {
#ifdef SAMPLING
        if (sampled) {
            threadBasedInfo->threadBasedAccess(firstTouchThreadId);
            basicPageAccessInfo->recordAccessForPageSharing(currentThreadIndex);
        }
#else
        basicPageAccessInfo->recordAccessForPageSharing(currentThreadIndex);
        threadBasedInfo->threadBasedAccess(firstTouchThreadId);
#endif
    }

    if (!needCahceDetailInfo) {
        basicPageAccessInfo->recordAccessForCacheSharing(addr, type);
    }

//    Logger::info("addr:%p,removeAccess:%lu,firstThread:%lu,currentThread:%lu\n", basicPageAccessInfo,
//                 basicPageAccessInfo->getAccessNumberByOtherThreads(), firstTouchThreadId, currentThreadIndex);

    if (needPageDetailInfo) {
#ifdef SAMPLING
        if (sampled) {
            threadBasedInfo->threadBasedAccess(firstTouchThreadId);
            recordDetailsForPageSharing(basicPageAccessInfo, addr);
        }
#else
        recordDetailsForPageSharing(basicPageAccessInfo, addr);
        threadBasedInfo->threadBasedAccess(firstTouchThreadId);
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

#define UNLOCK_HANDLE(unlockFuncPtr, lock)\
    LockInfo *lockInfo = lockInfoMap.find((unsigned long) lock, 0);\
    if (lockInfo == NULL) {\
        fprintf(stderr, "lockinfo missed\n");\
        return unlockFuncPtr(lock);\
    }\
    lockInfo->releaseLock();\
    return unlockFuncPtr(lock);

#define LOCK_HANDLE(lockFuncPtr, lock, releaseLockAfterAcquire)\
    LockInfo *lockInfo = lockInfoMap.find((unsigned long) lock, 0);\
    if (lockInfo == NULL) {\
        lockInfo = LockInfo::createLockInfo();\
        if (!lockInfoMap.insertIfAbsent((unsigned long) lock, 0, lockInfo)) {\
            LockInfo::release(lockInfo);\
            lockInfo = lockInfoMap.find((unsigned long) lock, 0);\
        }\
    }\
    lockInfo->acquireLock();\
    if (!lockInfo->hasContention()) {\
        int ret = lockFuncPtr(lock);\
        if (releaseLockAfterAcquire) {\
            lockInfo->releaseLock();\
        }\
        return ret;\
    }\
    unsigned long long start = Timer::getCurrentCycle();\
    int nodeBefore = Numas::getNodeOfCurrentThread();\
    int ret = lockFuncPtr(lock);\
    if (releaseLockAfterAcquire) {\
        fprintf(stderr, "contention_pthread_barrier_wait\n");\
        threadBasedInfo->barrierContention();\
        lockInfo->releaseLock();\
        int nodeAfter = Numas::getNodeOfCurrentThread();\
        if (nodeBefore != nodeAfter){\
            fprintf(stderr, "contention_pthread_barrier_wait_migrate\n");\
            threadBasedInfo->barrierNodeMigrate();\
        }\
    } else {\
        fprintf(stderr, "contention_pthread_mutex_lock\n");\
        threadBasedInfo->mutexLockContention();\
    }\
    threadBasedInfo->idle(Timer::getCurrentCycle() - start);\
    return ret;

#if 0
int nodeBefore = threadBasedInfo->getCurrentNumaNodeIndex();\
unsigned long long start = Timer::getCurrentCycle();\
int ret = lockFuncPtr(lock);\
if (releaseLockAfterAcquire) {\
    lockInfo->releaseLock();\
}\
threadBasedInfo->idle(Timer::getCurrentCycle() - start);\
int nodeAfter = Numas::getNodeOfCurrentThread();\
if (nodeBefore != nodeAfter) {\
    threadBasedInfo->nodeMigrate();\
    threadBasedInfo->setCurrentNumaNodeIndex(nodeAfter);\
}\
return ret;
#endif

//        fprintf(stderr, "thread-%lu, node migrate\n", currentThreadIndex);


#define WAIT_HANDLE(waiTFuncPtr, cond, lock)\
    int nodeBefore = threadBasedInfo->getCurrentNumaNodeIndex();\
    unsigned long long start = Timer::getCurrentCycle();\
    threadBasedInfo->conditionContention();\
    fprintf(stderr, "contention_pthread_cond_wait\n");\
    int ret = waiTFuncPtr(cond, lock);\
    threadBasedInfo->idle(Timer::getCurrentCycle() - start);\
    if (nodeBefore != threadBasedInfo->getCurrentNumaNodeIndex()){\
        fprintf(stderr, "contention_pthread_cond_wait_migrate\n");\
        threadBasedInfo->conditionNodeMigrate();\
    }\
    return ret;

#if 0
int nodeAfter = Numas::getNodeOfCurrentThread();\
if (nodeBefore != nodeAfter) {\
    threadBasedInfo->nodeMigrate();\
    threadBasedInfo->setCurrentNumaNodeIndex(nodeAfter);\
}\
return ret;
#endif


#if 0
int pthread_spin_lock(pthread_spinlock_t *lock) throw() {
//    fprintf(stderr, "pthread_spin_lock\n");
    if (!inited) {
        return 0;
    }
    LOCK_HANDLE(Real::pthread_spin_lock, lock, false);
}

int pthread_spin_unlock(pthread_spinlock_t *lock) throw() {
    if (!inited) {
        return 0;
    }
    UNLOCK_HANDLE(Real::pthread_spin_unlock, lock);
}
#endif

int pthread_mutex_lock(pthread_mutex_t *mutex) throw() {
    if (!inited) {
        return 0;
    }
    int ret;
    unsigned long long start;
    int nodeBefore;
    fprintf(stderr, "pthread_mutex_lock\n");
    int contention = mutex->__data.__lock;
    if (contention) {
        start = Timer::getCurrentCycle();
        nodeBefore = Numas::getNodeOfCurrentThread();
    }

    ret = Real::pthread_mutex_lock(mutex);

    if (contention) {
        fprintf(stderr, "contention_pthread_mutex_lock\n");
        threadBasedInfo->mutexLockContention();
        threadBasedInfo->idle(Timer::getCurrentCycle() - start);
        if (Numas::getNodeOfCurrentThread() != nodeBefore) {
            fprintf(stderr, "contention_pthread_mutex_lock_migrate\n");
            threadBasedInfo->mutexNodeMigrate();
        }
    }

    return
            ret;
//    LOCK_HANDLE(Real::pthread_mutex_lock, mutex, false);
}

int pthread_mutex_unlock(pthread_mutex_t *mutex) throw() {
    if (!inited) {
        return 0;
    }
//    fprintf(stderr, "unllock:%p\n",mutex);
//    UNLOCK_HANDLE(Real::pthread_mutex_unlock, mutex);
}

int pthread_cond_wait(pthread_cond_t *cond,
                      pthread_mutex_t *mutex) {
    fprintf(stderr, "pthread_cond_wait\n");
    WAIT_HANDLE(Real::pthread_cond_wait, cond, mutex);
}

int pthread_barrier_wait(pthread_barrier_t *barrier) throw() {
    fprintf(stderr, "pthread_barrier_wait\n");
    LOCK_HANDLE(Real::pthread_barrier_wait, barrier, true);
}


void openmp_fork_after() {

#if 0
    int newNodeIndex = Numas::getNodeOfCurrentThread();
    if (threadBasedInfo->getCurrentNumaNodeIndex() != newNodeIndex) {
        threadBasedInfo->nodeMigrate();
        threadBasedInfo->setCurrentNumaNodeIndex(newNodeIndex);
    }
#endif
    threadBasedInfo->barrierContention();
//    if (threadBasedInfo->getOpenmpLastJoinStartCycle() == 0) {
//        threadBasedInfo->idle(Timer::getCurrentCycle() - threadBasedInfo->getStartTime());
//        return;
//    }
//    threadBasedInfo->idle(Timer::getCurrentCycle() - threadBasedInfo->getOpenmpLastJoinStartCycle());
//    printf("thread:%lu, openmp_fork_after, time:%llu\n", currentThreadIndex, Timer::getCurrentCycle());
}

void openmp_join_after() {
//    printf("thread:%lu, openmp_join_after, time:%llu\n", currentThreadIndex, Timer::getCurrentCycle());
//    threadBasedInfo->setOpenmpLastJoinStartCycle(Timer::getCurrentCycle());
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
