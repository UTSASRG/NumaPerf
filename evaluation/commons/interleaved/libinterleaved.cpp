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

inline void *__interleavedMalloc(size_t size) {
    int MASK = ((1 << NUMA_NODES) - 1);
    void *ret = (void *) mmap(NULL, size, PROT_READ | PROT_WRITE, MAP_PRIVATE | MAP_ANONYMOUS | MAP_NORESERVE, -1, 0);
    if (mbind(ret, size, MPOL_INTERLEAVE, &MASK, NUMA_NODES + 1, 0) == -1) {
        fprintf(stderr, "mbind error \n");
        exit(-1);
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
    if (size > 100000) {
        return __interleavedMalloc(size);
    }
    return Real::malloc(size);
}

void *interleavedMalloc(size_t size) {
    return __interleavedMalloc(size);
}

void *malloc(size_t size) {
    fprintf(stderr, "operator malloc \n");
    return __malloc(size);
}

void *operator new(size_t size) {
    fprintf(stderr, "operator new \n");
    return __malloc(size);
}