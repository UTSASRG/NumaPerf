
#ifndef ACCESSPATERN_LIBNUMAPERF_H
#define ACCESSPATERN_LIBNUMAPERF_H

#include <dlfcn.h>
#include <pthread.h>
#include <sys/types.h>
#include <unistd.h>


typedef enum e_access_type {
    E_ACCESS_READ = 0,
    E_ACCESS_WRITE
} eAccessType;

extern char *__progname_full;

__attribute__ ((constructor)) void initializer(void);

__attribute__ ((destructor)) void finalizer(void);

void handleAccess(unsigned long addr, size_t size, eAccessType type);

extern "C" {
void *malloc(size_t size);
void *calloc(size_t n, size_t size);
void *realloc(void *ptr, size_t size);
void free(void *ptr);
int pthread_create(pthread_t *tid, const pthread_attr_t *attr,
                   void *(*start_routine)(void *), void *arg);

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
