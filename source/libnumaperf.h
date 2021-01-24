
#ifndef ACCESSPATERN_LIBNUMAPERF_H
#define ACCESSPATERN_LIBNUMAPERF_H

#include <dlfcn.h>
#include <pthread.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>

#ifdef DEV
#define __THROW
#endif

typedef enum e_access_type {
    E_ACCESS_READ = 0,
    E_ACCESS_WRITE
} eAccessType;

__attribute__ ((destructor)) void finalizer(void);

inline void handleAccess(unsigned long addr, size_t size, eAccessType type);

extern "C" {
extern void *malloc(size_t __size)
__THROW __attribute_malloc__
        __wur;
extern void *calloc(size_t __nmemb, size_t __size)
__THROW __attribute_malloc__
        __wur;
extern void *realloc(void *__ptr, size_t __size)
__THROW __attribute_warn_unused_result__;
extern void free(void *__ptr)
__THROW;
int pthread_create(pthread_t *tid, const pthread_attr_t *attr,
                   void *(*start_routine)(void *), void *arg)
__THROW;

int pthread_barrier_wait(pthread_barrier_t *barrier);
int pthread_mutex_lock(pthread_mutex_t *mutex);
int pthread_mutex_unlock(pthread_mutex_t *mutex);
int pthread_spin_lock(pthread_spinlock_t *lock);
int pthread_spin_unlock(pthread_spinlock_t *lock);
int pthread_cond_wait(pthread_cond_t *cond, pthread_mutex_t *mutex);

// insert into kmp_barrier.cpp (__kmp_join_barrier and __kmp_fork_barrier)
void openmp_fork_after();
void openmp_join_after();

void store_16bytes(unsigned long addr);
void store_8bytes(unsigned long addr);
void store_4bytes(unsigned long addr);
void store_2bytes(unsigned long addr);
void store_1bytes(unsigned long addr);
void load_16bytes(unsigned long addr);
void load_8bytes(unsigned long addr);
void load_4bytes(unsigned long addr);
void load_2bytes(unsigned long addr);
void load_1bytes(unsigned long addr);
}


#endif //ACCESSPATERN_LIBNUMAPERF_H

