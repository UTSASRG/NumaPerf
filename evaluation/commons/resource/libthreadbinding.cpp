#include <cstdio>
#include "libthreadbinding.h"
#include "real.h"


static void initializer(void) {
    fprintf(stderr, "thread binding lib init\n");
    Real::init();
}

//https://stackoverflow.com/questions/50695530/gcc-attribute-constructor-is-called-before-object-constructor
static int const do_init = (initializer(), 0);

int pthread_create(pthread_t *tid, const pthread_attr_t *attr,
                   void *(*start_routine)(void *), void *arg) __THROW {
    fprintf(stderr, "pthread_create\n");
    return Real::pthread_create(tid, attr, start_routine, arg);
}