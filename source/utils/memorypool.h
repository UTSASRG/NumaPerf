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

class MemoryPool {
private:
    unsigned int sizeOfMemoryBlock;
    unsigned long initPoolSize;
    void *bumpPointer;
    void *bumpEndPointer;
    void *freeListHead;
    spinlock lock;
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
        return result;
    }

    inline void automicInsertIntoFreeList(void *memoryBlock) {
        void *nextBlock = freeListHead;
        while (!__atomic_compare_exchange_n(&freeListHead, &nextBlock, memoryBlock,
                                            false,
                                            __ATOMIC_SEQ_CST,
                                            __ATOMIC_SEQ_CST)) {
            nextBlock = freeListHead;
        }
        *((void **) memoryBlock) = nextBlock;
    }

    inline void increaseCapacity() {
        this->lock.lock();
        if (bumpPointer == bumpEndPointer) {
            bumpPointer = Real::malloc(initPoolSize);
            bumpEndPointer = (char *) bumpPointer + initPoolSize;
            memset(bumpPointer, 0, initPoolSize);
            Logger::debug("memory pool increase capacity bumppointer:%lu, bumpendpointer:%lu\n",
                         bumpPointer, bumpEndPointer);
        }
        this->lock.unlock();
    }

    inline void *automicGetFromBumpPointer() {
        void *result = bumpPointer;
        if (result == bumpEndPointer) {
            increaseCapacity();
            result = bumpPointer;
        }
        while (!__atomic_compare_exchange_n(&bumpPointer, &result, (char *) result + sizeOfMemoryBlock,
                                            false,
                                            __ATOMIC_SEQ_CST,
                                            __ATOMIC_SEQ_CST)) {
            result = bumpPointer;
            if (result == bumpEndPointer) {
                // increase capacity.
                increaseCapacity();
                result = bumpPointer;
            }
        }
        return result;
    }

public:
    MemoryPool(unsigned int sizeOfMemoryBlock, unsigned long initPoolSize) {
        Logger::debug("memory pool init\n");
        this->sizeOfMemoryBlock = sizeOfMemoryBlock;
        this->initPoolSize = initPoolSize;
        this->freeListHead = NULL;
        this->bumpPointer = Real::malloc(initPoolSize);
        this->bumpEndPointer = (char *) this->bumpPointer + initPoolSize;
        memset(bumpPointer, 0, initPoolSize);
        Logger::debug("memory pool increase capacity bumppointer:%lu, bumpendpointer:%lu\n",
                     bumpPointer, bumpEndPointer);
        this->lock.init();
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
