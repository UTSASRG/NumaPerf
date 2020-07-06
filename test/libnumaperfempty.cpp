#include <stdlib.h>
#include <stdio.h>
#include "libnumaperfempty.h"
#include "../source/utils/concurrency/automics.h"
#include "../source/utils/log/Logger.h"

unsigned long store_num;
unsigned long load_num;

thread_local unsigned long threadStoreNum = 0;
thread_local unsigned long threadLoadNum = 0;

static void initializer(void) {
    Logger::info("Test NumaPerf initializer\n");
    store_num = 0;
    load_num = 0;
}

__attribute__ ((destructor)) void finalizer(void) {
    Logger::info("Test NumaPerf store_num:%lu\n", store_num);
    Logger::info("Test NumaPerf load_num:%lu\n", load_num);
    Logger::info("Test NumaPerf finish\n");
}

static int const do_init = (initializer(), 0);

void handleAccess(unsigned long addr, size_t size, eAccessType type) {
    if (type == E_ACCESS_READ) {
        threadLoadNum++;
        if (threadLoadNum > 100) {
            Automics::automicIncrease(&load_num, threadLoadNum);
        }
        Logger::debug("NumaPerf handleAccess read\n");
        return;
    }
    threadStoreNum++;
    if (threadStoreNum > 100) {
        Automics::automicIncrease(&store_num, threadStoreNum);
    }
    Logger::debug("NumaPerf handleAccess write\n");
}

/*
* handleAccess functions.
*/
void store_16bytes(unsigned long addr) { handleAccess(addr, 16, E_ACCESS_WRITE); }

void store_8bytes(unsigned long addr) { handleAccess(addr, 8, E_ACCESS_WRITE); }

void store_4bytes(unsigned long addr) { handleAccess(addr, 4, E_ACCESS_WRITE); }

void store_2bytes(unsigned long addr) { handleAccess(addr, 2, E_ACCESS_WRITE); }

void store_1bytes(unsigned long addr) { handleAccess(addr, 1, E_ACCESS_WRITE); }

void load_16bytes(unsigned long addr) { handleAccess(addr, 16, E_ACCESS_READ); }

void load_8bytes(unsigned long addr) { handleAccess(addr, 8, E_ACCESS_READ); }

void load_4bytes(unsigned long addr) { handleAccess(addr, 4, E_ACCESS_READ); }

void load_2bytes(unsigned long addr) { handleAccess(addr, 2, E_ACCESS_READ); }

void load_1bytes(unsigned long addr) { handleAccess(addr, 1, E_ACCESS_READ); }
