//
// Created by XIN ZHAO on 6/7/20.
//

#ifndef NUMAPERF_MEMORYPOOL_H
#define NUMAPERF_MEMORYPOOL_H


#include <cstdlib>
#include "real.h"
#include "concurrency/spinlock.h"
#include "log/Logger.h"
#include "timer.h"
#include "mm.hh"

class MemoryPool {
private:
    unsigned int sizeOfMemoryBlock;
    unsigned long maxPoolSize;
    void *volatile bumpPointer;
    void *volatile bumpEndPointer;
    void *volatile freeListHead;
private:
    inline void *automicGetFromFreeList() {
        void *result = freeListHead;
        if (NULL == result) {
            return NULL;
        }
        while (!__atomic_compare_exchange_n(&freeListHead, &result, *((void **) result),
                                            false,
                                            __ATOMIC_SEQ_CST,
                                            __ATOMIC_SEQ_CST)) {
            result = freeListHead;
            if (NULL == result) {
                return NULL;
            }
        }
        return (void *) result;
    }

    inline void automicInsertIntoFreeList(void *memoryBlock) {
        void *nextBlock = freeListHead;
        while (!__atomic_compare_exchange_n(&freeListHead, &nextBlock, memoryBlock,
                                            false,
                                            __ATOMIC_SEQ_CST,
                                            __ATOMIC_SEQ_CST)) {
            nextBlock = freeListHead;
        }
        *((void **) memoryBlock) = (void *) nextBlock;
    }

    inline void *automicGetFromBumpPointer() {
        void *result = bumpPointer;
        while (!__atomic_compare_exchange_n(&bumpPointer, &result, (char *) result + sizeOfMemoryBlock,
                                            false,
                                            __ATOMIC_SEQ_CST,
                                            __ATOMIC_SEQ_CST)) {
            result = bumpPointer;
        }
        assert(result < bumpEndPointer);
        return (void *) result;
    }

public:
    MemoryPool(unsigned int sizeOfMemoryBlock, unsigned long maxPoolSize = 1024 * 1024 * 1024) {
        Logger::debug("memory pool init\n");
        this->sizeOfMemoryBlock = sizeOfMemoryBlock;
        this->maxPoolSize = maxPoolSize;
        this->freeListHead = NULL;
        this->bumpPointer = MM::mmapAllocateShared(maxPoolSize);
        this->bumpEndPointer = (char *) this->bumpPointer + maxPoolSize;
//        memset((void *) bumpPointer, 0, initPoolSize);
        Logger::debug("memory pool init capacity bumppointer:%lu, bumpendpointer:%lu\n",
                      bumpPointer, bumpEndPointer);
    }

    void *get() {
        unsigned long start = Timer::getCurrentCycle();
        void *result = NULL;
        if (freeListHead != NULL) {
            result = automicGetFromFreeList();
            memset(result, 0, sizeOfMemoryBlock);
        }
        if (result != NULL) {
            Logger::debug("memory pool get address:%lu, total cycles:%lu\n", result, Timer::getCurrentCycle() - start);
            return result;
        }
        result = automicGetFromBumpPointer();
        Logger::debug("memory pool get address:%lu, total cycles:%lu\n", result, Timer::getCurrentCycle() - start);
        return result;
    }

    void release(void *memoryBlock) {
        automicInsertIntoFreeList(memoryBlock);
    }
};

#endif //NUMAPERF_MEMORYPOOL_H
