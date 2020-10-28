#ifndef NUMAPERF_LIBINTERLEAVED_H
#define NUMAPERF_LIBINTERLEAVED_H

#include <sys/mman.h>
#include <numa.h>
#include <numaif.h>

extern "C" {

void *interleavedMalloc(size_t size);

}
#endif //NUMAPERF_LIBINTERLEAVED_H
