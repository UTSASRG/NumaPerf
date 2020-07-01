
#include "utils/concurrency/automics.h"
#include "libnumaperf.h"
#include "utils/collection/hashmap.h"
#include "utils/concurrency/spinlock.h"
#include "utils/collection/hashfuncs.h"
#include <assert.h>
#include "bean/pagedetailAccessInfo.h"
#include "utils/memorypool.h"
#include "bean/pagebasicaccessinfo.h"
#include "bean/cachelinedetailedinfo.h"
#include "utils/log/Logger.h"
#include "utils/timer.h"
#include "bean/objectInfo.h"
#include "utils/collection/shadowhashmap.h"

typedef HashMap<unsigned long, ObjectInfo *, spinlock, localAllocator> ObjectInfoMap;
typedef ShadowHashMap<unsigned long, PageBasicAccessInfo> PageBasicAccessInfoShadowMap;
typedef ShadowHashMap<unsigned long, PageDetailedAccessInfo *> PageDetailedAccessInfoShadowMap;
typedef ShadowHashMap<unsigned long, CacheLineDetailedInfo *> CacheLineDetailedInfoShadowMap;

thread_local int pageDetailSamplingFrequency = 0;
thread_local int cacheDetailSamplingFrequency = 0;
bool inited = false;
unsigned long largestThreadIndex = 0;
thread_local unsigned long currentThreadIndex = 0;

ObjectInfoMap objectInfoMap;
PageBasicAccessInfoShadowMap pageBasicAccessInfoShadowMap;
PageDetailedAccessInfoShadowMap pageDetailedAccessInfoShadowMap;
CacheLineDetailedInfoShadowMap cacheLineDetailedInfoShadowMap;

static void initializer(void) {
    Logger::info("global initializer\n");
    Real::init();
    objectInfoMap.initialize(HashFuncs::hashUnsignedlong, HashFuncs::compareUnsignedLong, 8192);
    // could support 32T/sizeOf(BasicPageAccessInfo)*4K > 2000T
    pageBasicAccessInfoShadowMap.initialize(32ul * TB, HashFuncs::hashAddrToPageIndex);
    pageDetailedAccessInfoShadowMap.initialize(32ul * TB, HashFuncs::hashAddrToCacheIndex);
    cacheLineDetailedInfoShadowMap.initialize(32ul * TB, HashFuncs::hashAddrToCacheIndex);
    inited = true;
}

//https://stackoverflow.com/questions/50695530/gcc-attribute-constructor-is-called-before-object-constructor
static int const do_init = (initializer(), 0);
MemoryPool ObjectInfo::localMemoryPool(sizeof(ObjectInfo), 1024ul * 1024ul * 20);
MemoryPool CacheLineDetailedInfo::localMemoryPool(sizeof(CacheLineDetailedInfo),
                                                                 1024ul * 1024ul * 20);
MemoryPool PageDetailedAccessInfo::localMemoryPool(sizeof(PageDetailedAccessInfo),
                                                   1024ul * 1024ul * 20);

__attribute__ ((destructor)) void finalizer(void) {
    inited = false;
}

#define MALLOC_CALL_SITE_OFFSET 0x18

extern void *malloc(size_t size) {
//    unsigned long startCycle = Timer::getCurrentCycle();
    Logger::debug("malloc size:%lu\n", size);
    if (size <= 0) {
        return NULL;
    }
    static char initBuf[INIT_BUFF_SIZE];
    static int allocated = 0;
    if (!inited) {
        assert(allocated + size < INIT_BUFF_SIZE);
        void *resultPtr = (void *) &initBuf[allocated];
        allocated += size;
//    	Logger::debug("malloc address:%p, totcal cycles:%lu\n", resultPtr, Timer::getCurrentCycle() - startCycle);
        return resultPtr;
    }
    void *callerAddress = ((&size) + MALLOC_CALL_SITE_OFFSET);
    void *objectStartAddress = Real::malloc(size);
    assert(objectStartAddress != NULL);
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
//    Logger::debug("malloc address:%p, totcal cycles:%lu\n", objectStartAddress, Timer::getCurrentCycle() - startCycle);
    return objectStartAddress;
}

void *calloc(size_t n, size_t size) {
    Logger::debug("calloc size:%lu\n", size);
    return malloc(n * size);
}

void *realloc(void *ptr, size_t size) {
    Logger::debug("realloc size:%lu\n", size);
    free(ptr);
    return malloc(size);
}

void free(void *ptr) {
    Logger::debug("free pointer:%p\n", ptr);
    if (!inited) {
        return;
    }
    Real::free(ptr);
}

typedef void *(*threadStartRoutineFunPtr)(void *);

void *initThreadIndexRoutine(void *args) {

    if (currentThreadIndex == 0) {
        currentThreadIndex = Automics::automicIncrease(&largestThreadIndex, 1, -1);
        if (currentThreadIndex > MAX_THREAD_NUM) {
            Logger::debug("tid %lu exceed max thread num %lu\n", currentThreadIndex, (unsigned long) MAX_THREAD_NUM);
            exit(9);
        }
    }

    threadStartRoutineFunPtr startRoutineFunPtr = (threadStartRoutineFunPtr) ((void **) args)[0];
    void *result = startRoutineFunPtr(((void **) args)[1]);
    free(args);
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

inline void recordDetailsForPageSharing(unsigned long addr, unsigned long firstTouchThreadId) {
//    Logger::info("record page detailed info\n");
    pageDetailSamplingFrequency++;
    if (pageDetailSamplingFrequency <= 100) {
        return;
    }
    pageDetailSamplingFrequency = 0;
    PageDetailedAccessInfo **pageDetailInfoPtr = pageDetailedAccessInfoShadowMap.find(addr);
    if (NULL == pageDetailInfoPtr) {
        PageDetailedAccessInfo *pageDetailedAccessInfo = PageDetailedAccessInfo::createNewPageDetailedAccessInfo();
        if (!pageDetailedAccessInfoShadowMap.insertIfAbsent(addr, pageDetailedAccessInfo)) {
            PageDetailedAccessInfo::release(pageDetailedAccessInfo);
        }
        pageDetailInfoPtr = pageDetailedAccessInfoShadowMap.find(addr);
    }
    (*pageDetailInfoPtr)->recordAccess(addr, currentThreadIndex, firstTouchThreadId);
}

inline void recordDetailsForCacheSharing(unsigned long addr, eAccessType type) {
    //    Logger::info("record cache detailed info\n");
    cacheDetailSamplingFrequency++;
    if (cacheDetailSamplingFrequency <= 100) {
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
    (*cacheLineInfoPtr)->recordAccess(currentThreadIndex, type, addr);
}

inline void handleAccess(unsigned long addr, size_t size, eAccessType type) {
//    unsigned long startCycle = Timer::getCurrentCycle();
//    Logger::debug("thread index:%lu, handle access addr:%lu, size:%lu, type:%d\n", currentThreadIndex, addr, size,
//                  type);
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
        recordDetailsForPageSharing(addr, firstTouchThreadId);
    }

    if (needCahceDetailInfo) {
        recordDetailsForCacheSharing(addr, type);
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
