
#include "utils/concurrency/automics.h"
#include "libnumaperf.h"
#include "utils/collection/hashmap.h"
#include "utils/concurrency/spinlock.h"
#include "utils/collection/hashfuncs.h"
#include <assert.h>
#include "utils/collection/priorityqueue.h"
#include "bean/pagedetailAccessInfo.h"
#include "bean/diagnoseobjinfo.h"
#include "utils/memorypool.h"
#include "bean/pagebasicaccessinfo.h"
#include "bean/cachelinedetailedinfo.h"
#include "bean/diagnosecallsiteinfo.h"
#include "utils/log/Logger.h"
#include "utils/timer.h"
#include <execinfo.h>
#include "bean/objectInfo.h"
#include "utils/collection/addrtopageindexshadowmap.h"
#include "utils/collection/addrtocacheindexshadowmap.h"
#include "utils/programs.h"

typedef HashMap<unsigned long, ObjectInfo *, spinlock, localAllocator> ObjectInfoMap;
typedef HashMap<unsigned long, DiagnoseCallSiteInfo *, spinlock, localAllocator> CallSiteInfoMap;
typedef AddressToPageIndexShadowMap<PageBasicAccessInfo> PageBasicAccessInfoShadowMap;
typedef AddressToCacheIndexShadowMap<CacheLineDetailedInfo *> CacheLineDetailedInfoShadowMap;
bool interceptMalloc = true;
thread_local int pageDetailSamplingFrequency = 0;
thread_local int cacheDetailSamplingFrequency = 0;
bool inited = false;
unsigned long largestThreadIndex = 0;
thread_local unsigned long currentThreadIndex = 0;

ObjectInfoMap objectInfoMap;
CallSiteInfoMap callSiteInfoMap;
PageBasicAccessInfoShadowMap pageBasicAccessInfoShadowMap;
CacheLineDetailedInfoShadowMap cacheLineDetailedInfoShadowMap;
PriorityQueue<DiagnoseObjInfo> objDiagnoseQueue(10);
#define SHADOW_MAP_SIZE (32ul * TB)
#define MAX_ADDRESS_IN_PAGE_BASIC_SHADOW_MAP (SHADOW_MAP_SIZE / (sizeof(PageBasicAccessInfo)+1) * PAGE_SIZE)

static void initializer(void) {
    Logger::info("NumaPerf initializer\n");
    Real::init();
    void *callStacks[1];
    backtrace(callStacks, 1);
    objectInfoMap.initialize(HashFuncs::hashUnsignedlong, HashFuncs::compareUnsignedLong, 8192);
    callSiteInfoMap.initialize(HashFuncs::hashUnsignedlong, HashFuncs::compareUnsignedLong, 8192);
    // could support 32T/sizeOf(BasicPageAccessInfo)*4K > 2000T
    pageBasicAccessInfoShadowMap.initialize(SHADOW_MAP_SIZE, true);
    cacheLineDetailedInfoShadowMap.initialize(SHADOW_MAP_SIZE);
    inited = true;
}

//https://stackoverflow.com/questions/50695530/gcc-attribute-constructor-is-called-before-object-constructor
static int const do_init = (initializer(), 0);
MemoryPool ObjectInfo::localMemoryPool(ADDRESSES::alignUpToCacheLine(sizeof(ObjectInfo)),
                                       TB * 5);
MemoryPool CacheLineDetailedInfo::localMemoryPool(ADDRESSES::alignUpToCacheLine(sizeof(CacheLineDetailedInfo)),
                                                  TB * 5);
MemoryPool PageDetailedAccessInfo::localMemoryPool(ADDRESSES::alignUpToCacheLine(sizeof(PageDetailedAccessInfo)),
                                                   TB * 5);

MemoryPool DiagnoseObjInfo::localMemoryPool(ADDRESSES::alignUpToCacheLine(sizeof(DiagnoseObjInfo)),
                                            TB * 1);

MemoryPool DiagnoseCallSiteInfo::localMemoryPool(ADDRESSES::alignUpToCacheLine(sizeof(DiagnoseCallSiteInfo)),
                                                 TB * 1);

__attribute__ ((destructor)) void finalizer(void) {
    inited = false;
}

#define MALLOC_CALL_SITE_OFFSET 16

inline void *__malloc(size_t size, unsigned long callerAddress) {
//    unsigned long startCycle = Timer::getCurrentCycle();
    Logger::debug("__malloc size:%lu\n", size);
    if (size <= 0) {
        size = 1;
    }
    static char initBuf[INIT_BUFF_SIZE];
    static int allocated = 0;
    if (!inited) {
        assert(allocated + size < INIT_BUFF_SIZE);
        void *resultPtr = (void *) &initBuf[allocated];
        allocated += size;
        //Logger::info("malloc address:%p, totcal cycles:%lu\n", resultPtr, Timer::getCurrentCycle() - startCycle);
        return resultPtr;
    }
    void *objectStartAddress = Real::malloc(size);
    assert(objectStartAddress != NULL);
    if (!interceptMalloc) {
        return objectStartAddress;
    }
//    Logger::info("malloc callsite: %lu\n", callerAddress);
//    void *callStacks[3];
//    backtrace(callStacks, 3);
//    Logger::info("malloc call stack1: %lu\n", (unsigned long) callStacks[0]);
//    Logger::info("malloc call stack2: %lu\n", (unsigned long) callStacks[1]);
//    Logger::info("malloc call stack3: %lu\n", (unsigned long) callStacks[2]);
//    backtrace_symbols_fd(callStacks, 3, 2);
//    Programs::address2Line((unsigned long) callStacks[0]);
//    Programs::address2Line((unsigned long) callStacks[1]);
//    Programs::address2Line((unsigned long) callStacks[2]);


    if (callSiteInfoMap.find((unsigned long) callerAddress, 0) == NULL) {
        DiagnoseCallSiteInfo *diagnoseCallSiteInfo = DiagnoseCallSiteInfo::createNewDiagnoseCallSiteInfo(
                (unsigned long) callerAddress);
        if (!callSiteInfoMap.insertIfAbsent((unsigned long) callerAddress, 0, diagnoseCallSiteInfo)) {
            DiagnoseCallSiteInfo::release(diagnoseCallSiteInfo);
        }
    }
    ObjectInfo *objectInfoPtr = ObjectInfo::createNewObjectInfoo((unsigned long) objectStartAddress, size,
                                                                 callerAddress);
    objectInfoMap.insert((unsigned long) objectStartAddress, 0, objectInfoPtr);

    for (unsigned long address = (unsigned long) objectStartAddress;
         (address - (unsigned long) objectStartAddress) < size; address += PAGE_SIZE) {
        if (NULL == pageBasicAccessInfoShadowMap.find(address)) {
            PageBasicAccessInfo basicPageAccessInfo(currentThreadIndex);
            pageBasicAccessInfoShadowMap.insertIfAbsent(address, basicPageAccessInfo);
        }
    }
    //Logger::info("malloc size:%lu, address:%p, totcal cycles:%lu\n",size, objectStartAddress, Timer::getCurrentCycle() - startCycle);
    return objectStartAddress;
}

inline void collectAndClearObjInfo(ObjectInfo *objectInfo) {
    unsigned long startAddress = objectInfo->getStartAddress();
    unsigned long size = objectInfo->getSize();
    DiagnoseObjInfo *diagnoseObjInfo = DiagnoseObjInfo::createNewDiagnoseObjInfo(objectInfo);
    for (unsigned long address = startAddress; (address - startAddress) < size; address += PAGE_SIZE) {
        PageBasicAccessInfo *pageBasicAccessInfo = pageBasicAccessInfoShadowMap.find(address);
        if (NULL == pageBasicAccessInfo) {
            Logger::warn("pageBasicAccessInfo is lost\n");
            continue;
        }
        for (unsigned long cacheLineAddress = address;
             (cacheLineAddress - startAddress) < size; cacheLineAddress += CACHE_LINE_SIZE) {
            if (!pageBasicAccessInfo->needCacheLineSharingDetailInfo(cacheLineAddress)) {
                continue;
            }
            CacheLineDetailedInfo **cacheLineDetailedInfo = cacheLineDetailedInfoShadowMap.find(cacheLineAddress);
            if (NULL == cacheLineDetailedInfo) {
                continue;
            }
            if (!diagnoseObjInfo->insertCacheLineDetailedInfo(*cacheLineDetailedInfo)) {
                CacheLineDetailedInfo::release(*cacheLineDetailedInfo);
            }
            cacheLineDetailedInfoShadowMap.remove(cacheLineAddress);
        }
        if (pageBasicAccessInfo->needPageSharingDetailInfo()) {

        }
    }
    if (!objDiagnoseQueue.insert(diagnoseObjInfo, true)) {
        DiagnoseObjInfo::release(diagnoseObjInfo);
    }
//    Logger::info("allInvalidNumInMainThread:%lu, allInvalidNumInOtherThreads:%lu\n", allInvalidNumInMainThread,
//                 allInvalidNumInOtherThreads);
}

inline void __free(void *ptr) {
    Logger::debug("__free pointer:%p\n", ptr);
    if (!inited) {
        return;
    }
    ObjectInfo *objectInfo = objectInfoMap.findAndRemove((unsigned long) ptr, 0);
    if (NULL != objectInfo) {
        collectAndClearObjInfo(objectInfo);
    }
    Real::free(ptr);
}


void *operator new(size_t size) {
    unsigned long callerAddress = (((unsigned long) &size) + MALLOC_CALL_SITE_OFFSET);
    return __malloc(size, callerAddress);
}

void *operator new(size_t size, const std::nothrow_t &) throw() {
    unsigned long callerAddress = (((unsigned long) &size) + MALLOC_CALL_SITE_OFFSET);
    return __malloc(size, callerAddress);
}

void operator delete(void *ptr) {
    __free(ptr);
}

void *operator new[](size_t size) {
    unsigned long callerAddress = (((unsigned long) &size) + MALLOC_CALL_SITE_OFFSET);
    return __malloc(size, callerAddress);
}

extern void *malloc(size_t size) {
    unsigned long callerAddress = (((unsigned long) &size) + MALLOC_CALL_SITE_OFFSET);
    return __malloc(size, callerAddress);
}

void *calloc(size_t n, size_t size) {
    Logger::debug("calloc N:%lu, size:%lu\n", n, size);
    unsigned long callerAddress = (((unsigned long) &n) + MALLOC_CALL_SITE_OFFSET);
    void *ptr = __malloc(n * size, callerAddress);
    if (ptr != NULL) {
        memset(ptr, 0, n * size);
    }
    return ptr;
}

void *realloc(void *ptr, size_t size) {
    Logger::debug("realloc size:%lu, ptr:%p\n", size, ptr);
    unsigned long callerAddress = (((unsigned long) &ptr) + MALLOC_CALL_SITE_OFFSET);
    if (ptr == NULL) {
        free(ptr);
        return __malloc(size, callerAddress);
    }
    ObjectInfo *obj = objectInfoMap.find((unsigned long) ptr, 0);
    if (obj == NULL) {
//        Logger::warn("realloc no original obj info,ptr:%p\n", ptr);
        free(ptr);
        return __malloc(size, callerAddress);
    }
    unsigned long oldSize = obj->getSize();
    void *newObjPtr = __malloc(size, callerAddress);
    memcpy(newObjPtr, ptr, oldSize < size ? oldSize : size);
    free(ptr);
    return newObjPtr;
}

void free(void *ptr) {
    __free(ptr);
}

typedef void *(*threadStartRoutineFunPtr)(void *);

void *initThreadIndexRoutine(void *args) {

    if (currentThreadIndex == 0) {
        currentThreadIndex = Automics::automicIncrease(&largestThreadIndex, 1, -1);
        Logger::debug("new thread index:%lu\n", currentThreadIndex);
        assert(currentThreadIndex < MAX_THREAD_NUM);
    }

    threadStartRoutineFunPtr startRoutineFunPtr = (threadStartRoutineFunPtr) ((void **) args)[0];
    void *result = startRoutineFunPtr(((void **) args)[1]);
    Real::free(args);
    return result;
}

int pthread_create(pthread_t *tid, const pthread_attr_t *attr,
                   void *(*start_routine)(void *), void *arg) {
    Logger::debug("pthread create\n");
    if (!inited) {
        initializer();
    }
    void *arguments = Real::malloc(sizeof(void *) * 2);
    ((void **) arguments)[0] = (void *) start_routine;
    ((void **) arguments)[1] = arg;
    return Real::pthread_create(tid, attr, initThreadIndexRoutine, arguments);
}

inline void recordDetailsForPageSharing(PageBasicAccessInfo *pageBasicAccessInfo, unsigned long addr) {
    Logger::debug("record page detailed info\n");
    pageDetailSamplingFrequency++;
    if (pageDetailSamplingFrequency <= SAMPLING_FREQUENCY) {
        return;
    }
    pageDetailSamplingFrequency = 0;
    if (NULL == (pageBasicAccessInfo->getPageDetailedAccessInfo())) {
        PageDetailedAccessInfo *pageDetailInfoPtr = PageDetailedAccessInfo::createNewPageDetailedAccessInfo();
        if (!pageBasicAccessInfo->setIfBasentPageDetailedAccessInfo(pageDetailInfoPtr)) {
            PageDetailedAccessInfo::release(pageDetailInfoPtr);
        }
    }
    (pageBasicAccessInfo->getPageDetailedAccessInfo())->recordAccess(addr, currentThreadIndex,
                                                                     pageBasicAccessInfo->getFirstTouchThreadId());
}

inline void recordDetailsForCacheSharing(unsigned long addr, unsigned long firstTouchThreadId, eAccessType type) {
    Logger::debug("record cache detailed info\n");
    cacheDetailSamplingFrequency++;
    if (cacheDetailSamplingFrequency <= SAMPLING_FREQUENCY) {
        return;
    }
    cacheDetailSamplingFrequency = 0;
    CacheLineDetailedInfo **cacheLineInfoPtr = cacheLineDetailedInfoShadowMap.find(
            addr);
    if (NULL == cacheLineInfoPtr) {
        CacheLineDetailedInfo *cacheInfo = CacheLineDetailedInfo::createNewCacheLineDetailedInfoForCacheSharing();
        if (!cacheLineDetailedInfoShadowMap.insertIfAbsent(addr, cacheInfo)) {
            CacheLineDetailedInfo::release(cacheInfo);
        }
        cacheLineInfoPtr = cacheLineDetailedInfoShadowMap.find(addr);

    }
    (*cacheLineInfoPtr)->recordAccess(currentThreadIndex, firstTouchThreadId, type, addr);
}

inline void handleAccess(unsigned long addr, size_t size, eAccessType type) {
//    unsigned long startCycle = Timer::getCurrentCycle();
//    Logger::debug("thread index:%lu, handle access addr:%lu, size:%lu, type:%d\n", currentThreadIndex, addr, size,
//                  type);
    if (addr > MAX_ADDRESS_IN_PAGE_BASIC_SHADOW_MAP) {
        Logger::warn("the access address is bigger than basic page shadow map, address:%p\n", addr);
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
        basicPageAccessInfo->recordAccessForPageSharing(currentThreadIndex);
    }

    if (!needCahceDetailInfo) {
        basicPageAccessInfo->recordAccessForCacheSharing(addr, type);
    }

    if (needPageDetailInfo) {
        recordDetailsForPageSharing(basicPageAccessInfo, addr);
    }

    if (needCahceDetailInfo) {
        recordDetailsForCacheSharing(addr, firstTouchThreadId, type);
    }
    // Logger::debug("handle access cycles:%lu\n", Timer::getCurrentCycle() - startCycle);
}

/*
* handleAccess functions.
*/
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
