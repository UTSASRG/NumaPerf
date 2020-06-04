
#include "utils/concurrency/automics.h"
#include "libnumaperf.h"
#include "utils/collection/hashmap.h"
#include "bean/pageaccessinfo.h"
#include "bean/cachelineaccessinfo.h"
#include "utils/concurrency/spinlock.h"
#include "utils/collection/hashfuncs.h"
#include <assert.h>

typedef HashMap<unsigned long, PageAccessInfo *, spinlock, localAllocator> PageAccessPatternMap;

bool inited = false;
PageAccessPatternMap pageAccessPatternMap;
unsigned long largestThreadIndex = 0;
thread_local unsigned long currentThreadIndex = 0;

static void initializer(void) {
    Real::init();
    pageAccessPatternMap.initialize(HashFuncs::hashUnsignedlong, HashFuncs::compareUnsignedLong);
    inited = true;
}

//https://stackoverflow.com/questions/50695530/gcc-attribute-constructor-is-called-before-object-constructor
static int const do_init = (initializer(), 0);

__attribute__ ((destructor)) void finalizer(void) {
    inited = false;
}

#define MALLOC_CALL_SITE_OFFSET 0x18

extern void *malloc(size_t size) {
    fprintf(stderr, "malloc size:%lu\n", size);
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
    unsigned long objectStartPageAddress = (unsigned long) objectStartAddress >> PAGE_SHIFT_BITS << PAGE_SHIFT_BITS;
    for (int i = 0; size - i * PAGE_SIZE > 0; i++) {
        PageAccessInfo *pageAccessInfo = NULL;
        unsigned long currentPageStartAddress = objectStartPageAddress + i * PAGE_SIZE;
        if (NULL == (pageAccessInfo = pageAccessPatternMap.find(currentPageStartAddress, 0))) {
            pageAccessInfo = PageAccessInfo::createNewPageAccessInfo(currentPageStartAddress);
            if (!pageAccessPatternMap.insertIfAbsent(currentPageStartAddress, 0, pageAccessInfo)) {
                pageAccessInfo = pageAccessPatternMap.find(currentPageStartAddress, 0);
            }
        }
        pageAccessInfo->insertObjectAccessInfo(objectStartAddress, size, callerAddress);
    }
    return objectStartAddress;
}

void *calloc(size_t n, size_t size) {
    fprintf(stderr, "calloc size:%lu\n", size);
    return malloc(n * size);
}

void *realloc(void *ptr, size_t size) {
    fprintf(stderr, "realloc size:%lu\n", size);
    free(ptr);
    return malloc(size);
}

void free(void *ptr)

__THROW{
fprintf(stderr,
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
            fprintf(stderr, "tid %lu exceed max thread num %lu\n", currentThreadIndex, (unsigned long) MAX_THREAD_NUM);
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

__THROW{
fprintf(stderr,
"pthread create\n");
void *arguments = malloc(sizeof(void *) * 2);
((void **) arguments)[0] = (void *)
start_routine;
((void **) arguments)[1] =
arg;
return
Real::pthread_create(tid, attr, initThreadIndexRoutine, arguments
);
}

void handleAccess(unsigned long addr, size_t size, eAccessType type) {
    fprintf(stderr, "handle access addr:%lu, size:%lu, type:%d\n", addr, size, type);
    unsigned long pageStartAddress = addr >> PAGE_SHIFT_BITS << PAGE_SHIFT_BITS;
    PageAccessInfo *currentPageAccessInfo = pageAccessPatternMap.find(pageStartAddress, 0);
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
