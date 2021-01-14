
#ifndef ACCESSPATERN_LIBNUMAPERF_H
#define ACCESSPATERN_LIBNUMAPERF_H

#include <dlfcn.h>
#include <pthread.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>


typedef enum e_access_type {
    E_ACCESS_READ = 0,
    E_ACCESS_WRITE
} eAccessType;

__attribute__ ((destructor)) void finalizer(void);


void handleAccess(unsigned long addr, size_t size, eAccessType type);

extern "C" {
void store_16bytes(unsigned long addr, unsigned long isGlobal);
void store_8bytes(unsigned long addr, unsigned long isGlobal);
void store_4bytes(unsigned long addr, unsigned long isGlobal);
void store_2bytes(unsigned long addr, unsigned long isGlobal);
void store_1bytes(unsigned long addr, unsigned long isGlobal);
void load_16bytes(unsigned long addr, unsigned long isGlobal);
void load_8bytes(unsigned long addr, unsigned long isGlobal);
void load_4bytes(unsigned long addr, unsigned long isGlobal);
void load_2bytes(unsigned long addr, unsigned long isGlobal);
void load_1bytes(unsigned long addr, unsigned long isGlobal);
}


#endif //ACCESSPATERN_LIBNUMAPERF_H

