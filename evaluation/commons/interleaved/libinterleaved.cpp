#include <cstdlib>
#include <cstdio>
#include "libinterleaved.h"

unsigned long MASK = (1 << NUMA_NODES) - 1;

inline void *__interleavedMalloc(size_t size) {
    void *ret = (void *) mmap(NULL, size, PROT_READ | PROT_WRITE, MAP_PRIVATE | MAP_ANONYMOUS | MAP_NORESERVE, -1, 0);
    if (mbind(ret, size, MPOL_INTERLEAVE, &MASK, NUMA_NODES + 1, 0) == -1) {
        fprintf(stderr, "mbind error \n");
        exit(-1);
    }
    return ret;
}

void *interleavedMalloc(size_t size) {
    return __interleavedMalloc(size);
}

void *operator new(size_t size) {
    if (size < 100000) {
        return malloc(size);
    }
    fprintf(stderr, "operator new \n");
    return __interleavedMalloc(size);
}