#include <cstdlib>
#include <cstdio>
#include "libinterleaved.h"
#include "real.h"

#define INIT_BUFF_SIZE 1024*1024*1024

static bool inited = false;

static void initializer(void) {
    fprintf(stderr, "interleaved lib init\n");
    Real::init();
    inited = true;
}

//https://stackoverflow.com/questions/50695530/gcc-attribute-constructor-is-called-before-object-constructor
static int const do_init = (initializer(), 0);

__attribute__ ((destructor)) void finalizer(void) {
    fprintf(stderr, "interleaved lib final\n");
    inited = false;
}

inline void *__pageInterleavedMalloc(size_t size) {
    unsigned long MASK = ((1 << NUMA_NODES) - 1);
    void *ret = (void *) mmap(NULL, size, PROT_READ | PROT_WRITE, MAP_PRIVATE | MAP_ANONYMOUS | MAP_NORESERVE, -1, 0);
    if (mbind(ret, size, MPOL_INTERLEAVE, &MASK, NUMA_NODES + 1, 0) == -1) {
        fprintf(stderr, "mbind error \n");
        exit(-1);
    }
    return ret;
}

#define PAGE 4096

inline void *___blockInterleavedMalloc(size_t size) {
    void *ret = (void *) mmap(NULL, size, PROT_READ | PROT_WRITE, MAP_PRIVATE | MAP_ANONYMOUS | MAP_NORESERVE, -1, 0);
    size_t sizePerNode = size / NUMA_NODES;
    size_t pageNum = sizePerNode / PAGE;
    unsigned long addr = (unsigned long) ret;
    for (unsigned long nodeIndex = 0; nodeIndex < NUMA_NODES; nodeIndex++) {
        unsigned long mask = 1ul << nodeIndex;
        if (mbind((void *) addr, pageNum * PAGE, MPOL_BIND, &mask, NUMA_NODES + 1, 0) ==
            -1) {
            fprintf(stderr, "mbind error \n");
            exit(-1);
        }
        addr += pageNum * PAGE;
    }
    return ret;
}

inline void *__blockInterleavedMalloc(size_t size) {
    void *ret = (void *) mmap(NULL, size, PROT_READ | PROT_WRITE, MAP_PRIVATE | MAP_ANONYMOUS | MAP_NORESERVE, -1, 0);
    size_t sizePerNode = size / NUMA_NODES;
    size_t pageNum = sizePerNode / PAGE;
    unsigned long addr = (unsigned long) ret;
    for (unsigned long nodeIndex = 0; nodeIndex < NUMA_NODES; nodeIndex++) {
        unsigned long mask = 1ul << nodeIndex;
        unsigned long currentPageNum = pageNum;
        unsigned long
        if (addr < (unsigned long) ret + nodeIndex * sizePerNode) {
            currentPageNum +=
        }
        if (mbind((char *) ret + nodeIndex * sizePerNode + 1, pageNum * PAGE, MPOL_BIND, &mask, NUMA_NODES + 1, 0) ==
            -1) {
            fprintf(stderr, "mbind error \n");
            exit(-1);
        }
    }
    return ret;
}

inline void *__malloc(size_t size) {
    static char initBuf[INIT_BUFF_SIZE];
    static int allocated = 0;
    if (!inited) {
        void *resultPtr = (void *) &initBuf[allocated];
        allocated += size;
        //Logger::info("malloc address:%p, totcal cycles:%lu\n", resultPtr, Timer::getCurrentCycle() - startCycle);
        return resultPtr;
    }
    return Real::malloc(size);
}

inline void __free(void *ptr) {
//    Logger::debug("__free pointer:%p\n", ptr);
    if (!inited) {
        return;
    }
    Real::free(ptr);
}

void *interleavedMalloc(size_t size) {
    return __pageInterleavedMalloc(size);
}

void free(void *ptr) {
//    fprintf(stderr, "operator malloc \n");
    return __free(ptr);
}

void *malloc(size_t size) {
//    fprintf(stderr, "operator malloc \n");
#if 0
    if (size > 100000) {
        return __interleavedMalloc(size);
    }
#endif
    return __malloc(size);
}

void *operator new(size_t size) {
//    fprintf(stderr, "operator new \n");
    return __malloc(size);
}