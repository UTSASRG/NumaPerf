
#include "utils/concurrency/automics.h"
#include "libnumaperf.h"
#include "utils/collection/hashmap.h"
#include "bean/pageaccessinfo.h"
#include "bean/cachelineaccessinfo.h"
#include "utils/concurrency/spinlock.h"
#include "utils/collection/hashfuncs.h"
#include <assert.h>
#include "utils/log/Logger.h"
#include "utils/timer.h"

typedef HashMap<unsigned long, PageAccessInfo *, spinlock, localAllocator> PageAccessPatternMap;

bool inited = false;
PageAccessPatternMap pageAccessPatternMap;
unsigned long largestThreadIndex = 0;
thread_local unsigned long currentThreadIndex = 0;
void *map = NULL;
unsigned long mapSize = 0;

static void initializer(void) {
    Logger::debug("global initializer\n");
    Real::init();
    pageAccessPatternMap.initialize(HashFuncs::hashUnsignedlong, HashFuncs::compareUnsignedLong, 8192);
    inited = true;
}

//https://stackoverflow.com/questions/50695530/gcc-attribute-constructor-is-called-before-object-constructor
static int const do_init = (initializer(), 0);
MemoryPool PageAccessInfo::localMemoryPool(sizeof(PageAccessInfo));

__attribute__ ((destructor)) void finalizer(void) {
    inited = false;
}

#define MALLOC_CALL_SITE_OFFSET 0x18

extern void *malloc(size_t size) {
    unsigned long startCycle = Timer::getCurrentCycle();
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
        return resultPtr;
    }
    void *callerAddress = ((&size) + MALLOC_CALL_SITE_OFFSET);
    void *objectStartAddress = Real::malloc(size);
    assert(objectStartAddress != NULL);
    unsigned long objectStartPageIndex = (unsigned long) objectStartAddress >> PAGE_SHIFT_BITS;
    for (int i = 0; (long) (size - i * PAGE_SIZE) > 0; i++) {
        PageAccessInfo *pageAccessInfo = NULL;
        unsigned long currentPageStartIndex = objectStartPageIndex + i;
        if (NULL == (pageAccessInfo = pageAccessPatternMap.find(currentPageStartIndex, 0))) {
            pageAccessInfo = PageAccessInfo::createNewPageAccessInfo(currentPageStartIndex << PAGE_SHIFT_BITS);
            if (pageAccessPatternMap.insertIfAbsent(currentPageStartIndex, 0, pageAccessInfo)) {
//                pageAccessInfo = pageAccessPatternMap.find(currentPageStartAddress, 0);
                PageAccessInfo::release(pageAccessInfo);
            }
        }
//        pageAccessInfo->insertObjectAccessInfo(objectStartAddress, size, callerAddress);
    }
    Logger::debug("malloc totcal cycles:%lu\n", Timer::getCurrentCycle() - startCycle);
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

void free(void *ptr)

__THROW {
Logger::debug(
"free size:%p\n", ptr);
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
                   void *(*start_routine)(void *), void *arg)

__THROW {
Logger::debug(
"pthread create\n");
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

void handleAccess(unsigned long addr, size_t size, eAccessType type) {
    unsigned long startCycle = Timer::getCurrentCycle();
    Logger::debug("thread index:%lu, handle access addr:%lu, size:%lu, type:%d\n", currentThreadIndex, addr, size,
                  type);
    unsigned long pageStartIndex = addr >> PAGE_SHIFT_BITS;
//    unsigned long cacheIndex = addr >> CACHE_LINE_SHIFT_BITS;
//    *(int *) (((char *) map) + (cacheIndex << 2)) = 1;
    PageAccessInfo *currentPageAccessInfo = pageAccessPatternMap.find(pageStartIndex, 0);
    if (currentPageAccessInfo == NULL) {
        return;
    }
    ObjectAccessInfo *objectAccessInfoInCacheLine = currentPageAccessInfo->findObjectInCacheLine(addr);
    if (NULL == objectAccessInfoInCacheLine) {
        return;
    }
//    unsigned long callerAddress = *(unsigned long *) ((unsigned long) (&addr) + ACESS_CALL_SITE_OFFSET);
    if (type == E_ACCESS_READ) {
        Automics::automicIncrease(&(objectAccessInfoInCacheLine->getThreadRead()[currentThreadIndex]), 1);
    }

    if (type == E_ACCESS_WRITE) {
        Automics::automicIncrease(&(objectAccessInfoInCacheLine->getThreadWrite()[currentThreadIndex]), 1);
    }
    Logger::debug("handle access cycles:%lu\n", Timer::getCurrentCycle() - startCycle);
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
