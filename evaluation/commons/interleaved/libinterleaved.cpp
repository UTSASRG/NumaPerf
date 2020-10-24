#include <cstdlib>
#include <cstdio>
#include "libinterleaved.h"

unsigned long MASK = (1 << NUMA_NODES) - 1;

void *operator new(size_t size) {
    fprintf(stderr, "operator new \n");
    void *block = (void *) mmap(NULL, size, PROT_READ | PROT_WRITE, MAP_PRIVATE | MAP_ANONYMOUS | MAP_NORESERVE, -1, 0);
    if (mbind(block, size, MPOL_INTERLEAVE, &MASK, NUMA_NODES + 1, 0) == -1) {
        fprintf(stderr, "mbind error \n");
        exit(-1);
    }
}