
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

inline void collectAndClearObjInfo(ObjectInfo *objectInfo);

#define SAMPLING

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
    cacheLineDetailedInfoShadowMap.initialize(1ul * TB, true);
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
//        fprintf(stderr, "%lu ,", iterator.getData()->getSeriousScore());
//        fprintf(stderr, "callSiteInfoMap callSite:%lu\n", iterator.getData()->getCallSiteAddress());
        if (iterator.getData()->getSeriousScore() == 0) {
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
    fprintf(dumpFile, "    Part One: Top %d problematical pages.\n", MAX_TOP_GLOBAL_PAGE_DETAIL_INFO);
    fprintf(dumpFile, "    Part Two: Top %d problematical cachelines.\n", MAX_TOP_CACHELINE_DETAIL_INFO);
    fprintf(dumpFile, "    Part Three: Top %d problematical callsites.\n\n\n", MAX_TOP_CALL_SITE_INFO);

    fprintf(dumpFile, "Part One: Thread base lock require number:\n");
    for (unsigned long i = 1; i <= largestThreadIndex; i++) {
        if (GlobalLockAcquireNumber[i] > 0) {
            fprintf(dumpFile, "  Thread-:%lu, acquires lock number: %lu:\n", i, GlobalLockAcquireNumber[i]);
        }
    }

    fprintf(dumpFile, "Part One: Top %d problematical pages:\n", MAX_TOP_GLOBAL_PAGE_DETAIL_INFO);
    for (int i = 0; i < topPageQueue.getSize(); i++) {
        fprintf(dumpFile, "  Top problematical pages %d:\n", i + 1);
        topPageQueue.getValues()[i]->dump(dumpFile, 4);
        fprintf(dumpFile, "\n\n");
    }

    fprintf(dumpFile, "Part Two: Top %d problematical cachelines:\n", MAX_TOP_CACHELINE_DETAIL_INFO);
    for (int i = 0; i < topCacheLineQueue.getSize(); i++) {
        fprintf(dumpFile, "  Top problematical cachelines %d:\n", i + 1);
        topCacheLineQueue.getValues()[i]->dump(dumpFile, 4);
        fprintf(dumpFile, "\n\n");
    }

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

    for (unsigned long address = (unsigned long) objectStartAddress;
         (address - (unsigned long) objectStartAddress) < size; address += PAGE_SIZE) {
        if (NULL == pageBasicAccessInfoShadowMap.find(address)) {
            PageBasicAccessInfo basicPageAccessInfo(currentThreadIndex, ADDRESSES::getPageStartAddress(address));
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

        unsigned long seriousScore = pageDetailedAccessInfo->getSeriousScore();

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
        unsigned long seriousScore = cacheLineDetailedInfo->getSeriousScore();
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

void free(void *ptr)

__THROW {
__free(ptr);
}

typedef void *(*threadStartRoutineFunPtr)(void *);

void *initThreadIndexRoutine(void *args) {

    if (currentThreadIndex == 0) {
        currentThreadIndex = Automics::automicIncrease(&largestThreadIndex, 1, -1);
//        Logger::debug("new thread index:%lu\n", currentThreadIndex);
        Asserts::assertt(currentThreadIndex < MAX_THREAD_NUM, (char *) "max thread id out of range");
    }

    threadStartRoutineFunPtr startRoutineFunPtr = (threadStartRoutineFunPtr) ((void **) args)[0];
    void *result = startRoutineFunPtr(((void **) args)[1]);
    GlobalLockAcquireNumber[currentThreadIndex] = lockAcquireNumber;
    Real::free(args);
    return result;
}

int pthread_create(pthread_t *tid, const pthread_attr_t *attr,
                   void *(*start_routine)(void *), void *arg)

__THROW {
//Logger::debug("pthread create\n");
if (!inited) {
initializer();

}
void *arguments = Real::malloc(sizeof(void *) * 2);
((void **) arguments)[0] = (void *)
start_routine;
((void **) arguments)[1] =
arg;
return
Real::pthread_create(tid, attr, initThreadIndexRoutine, arguments
);
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

inline void recordDetailsForCacheSharing(unsigned long addr, unsigned long firstTouchThreadId, eAccessType type) {
//    Logger::debug("record cache detailed info\n");
    CacheLineDetailedInfo *cacheLineInfoPtr = cacheLineDetailedInfoShadowMap.find(addr);
    if (NULL == cacheLineInfoPtr) {
        CacheLineDetailedInfo newCacheLineDetail = CacheLineDetailedInfo(ADDRESSES::getCacheLineStartAddress(addr),
                                                                         firstTouchThreadId);
        cacheLineInfoPtr = cacheLineDetailedInfoShadowMap.insert(addr, newCacheLineDetail);
    }
    cacheLineInfoPtr->recordAccess(currentThreadIndex, firstTouchThreadId, type, addr);
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
    unsigned long firstTouchThreadId = basicPageAccessInfo->getFirstTouchThreadId();

    if (!needPageDetailInfo) {
        // todo thread local sampling is still too costing
#ifdef SAMPLING
        pageBasicSamplingFrequency++;
        if (pageBasicSamplingFrequency > SAMPLING_FREQUENCY) {
            pageBasicSamplingFrequency = 0;
            basicPageAccessInfo->recordAccessForPageSharing(currentThreadIndex);
        }
#else
        basicPageAccessInfo->recordAccessForPageSharing(currentThreadIndex);
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
            pageDetailSamplingFrequency = 0;
            recordDetailsForPageSharing(basicPageAccessInfo, addr);
        }
#else
        recordDetailsForPageSharing(basicPageAccessInfo, addr);
#endif
    }

    if (needCahceDetailInfo) {
        recordDetailsForCacheSharing(addr, firstTouchThreadId, type);
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
    recordLockAcquire();
    return Real::pthread_spin_lock(lock);
}

int pthread_spin_trylock(pthread_spinlock_t *lock) throw() {
//    fprintf(stderr, "pthread_spin_trylock\n");
    recordLockAcquire();
    return Real::pthread_spin_trylock(lock);
}

int pthread_mutex_lock(pthread_mutex_t *mutex) throw() {
//    fprintf(stderr, "pthread_mutex_lock\n");
    recordLockAcquire();
    return Real::pthread_mutex_lock(mutex);
}

int pthread_mutex_trylock(pthread_mutex_t *mutex) throw() {
//    fprintf(stderr, "pthread_mutex_trylock\n");
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
