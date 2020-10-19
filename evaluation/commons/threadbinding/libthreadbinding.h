#ifndef NUMAPERF_LIBTHREADBINDING_H
#define NUMAPERF_LIBTHREADBINDING_H

#ifdef DEV
#define __THROW
#endif

#include <dlfcn.h>
#include <pthread.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>

extern "C" {
int pthread_create(pthread_t *tid, const pthread_attr_t *attr,
                   void *(*start_routine)(void *), void *arg) __THROW;
}


#endif //NUMAPERF_LIBTHREADBINDING_H
