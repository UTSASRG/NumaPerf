//
// Created by XIN ZHAO on 1/31/21.
//

#include <cstdio>
#include "liblockintercept.h"
#include "real.h"
#include <sys/mman.h>
#include <numaif.h>
#include <numa.h>
#include <sys/syscall.h>
#include <sys/sysinfo.h>
#include <unistd.h>
#include <assert.h>

int pthread_mutex_lock(pthread_mutex_t *mutex) throw() {
    fprintf(stderr, "pthread_mutex_lock\n");
    return Real::pthread_mutex_lock(mutex);
}

int pthread_cond_wait(pthread_cond_t *cond,
                      pthread_mutex_t *mutex) {
    fprintf(stderr, "pthread_mutex_lock\n");
    return Real::pthread_cond_wait(cond, mutex);
}

int pthread_barrier_wait(pthread_barrier_t *barrier) throw() {
    fprintf(stderr, "pthread_barrier_wait\n");
    return Real::pthread_barrier_wait(barrier);
}
