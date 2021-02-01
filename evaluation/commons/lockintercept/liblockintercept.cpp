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

static bool init = false;

static void initializer(void) {
    fprintf(stderr, "lock intercept lib init\n");
    Real::init();
    init = true;
}

//https://stackoverflow.com/questions/50695530/gcc-attribute-constructor-is-called-before-object-constructor
static int const do_init = (initializer(), 0);

int pthread_mutex_lock(pthread_mutex_t *mutex) throw() {
    if (!init) {
        return 0;
    }
    fprintf(stderr, "pthread_mutex_lock\n");
    return Real::pthread_mutex_lock(mutex);
}

int pthread_cond_wait(pthread_cond_t *cond,
                      pthread_mutex_t *mutex) {
    if (!init) {
        return 0;
    }
    fprintf(stderr, "pthread_mutex_lock\n");
    return Real::pthread_cond_wait(cond, mutex);
}

int pthread_barrier_wait(pthread_barrier_t *barrier) throw() {
    if (!init) {
        return 0;
    }
    fprintf(stderr, "pthread_barrier_wait\n");
    return Real::pthread_barrier_wait(barrier);
}
