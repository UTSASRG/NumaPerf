#ifndef NUMAPERF_PTMALLOC_H
#define NUMAPERF_PTMALLOC_H

#include <stddef.h>   /* for size_t */

extern void *pt_malloc(size_t);

extern void pt_free(void *);

#endif //NUMAPERF_PTMALLOC_H
