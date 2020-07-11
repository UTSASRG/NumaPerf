//
// Created by XIN ZHAO on 6/7/20.
//

#ifndef NUMAPERF_MEMORYPOOL_H
#define NUMAPERF_MEMORYPOOL_H


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
    const bool needThreadSafe;
private:
    inline void *_getFromFreeList() {
        void *result = freeListHead;
        if (NULL == result) {
            return NULL;
        }
        if (!needThreadSafe) {
            freeListHead = *((void **) result);
            return freeListHead;
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

    inline void _insertIntoFreeList(void *memoryBlock) {
        void *nextBlock = freeListHead;
        if (!needThreadSafe) {
            freeListHead = memoryBlock;
            return;
        }
        while (!__atomic_compare_exchange_n(&freeListHead, &nextBlock, memoryBlock,
                                            false,
                                            __ATOMIC_SEQ_CST,
                                            __ATOMIC_SEQ_CST)) {
            nextBlock = freeListHead;
        }
        *((void **) memoryBlock) = (void *) nextBlock;
    }

    inline void *_getFromBumpPointer() {
        void *result = bumpPointer;
        if (!needThreadSafe) {
            bumpPointer = (char *) result + sizeOfMemoryBlock;
            return result;
        }
        while (!__atomic_compare_exchange_n(&bumpPointer, &result, (char *) result + sizeOfMemoryBlock,
                                            false,
                                            __ATOMIC_SEQ_CST,
                                            __ATOMIC_SEQ_CST)) {
            result = bumpPointer;
        }
        assert(bumpPointer < bumpEndPointer);
        return (void *) result;
    }

public:
    MemoryPool(unsigned int sizeOfMemoryBlock, unsigned long maxPoolSize = 1024ul * 1024ul * 1024ul * 1024ul,
               bool needThreadSafe = true) : needThreadSafe(needThreadSafe) {
        Logger::debug("memory pool init\n");
        this->sizeOfMemoryBlock = sizeOfMemoryBlock;
        this->maxPoolSize = maxPoolSize;
        this->freeListHead = NULL;
        this->bumpPointer = MM::mmapAllocateShared(maxPoolSize);
        this->bumpEndPointer = (char *) this->bumpPointer + maxPoolSize;
//        memset((void *) bumpPointer, 0, initPoolSize);
        Logger::debug("memory pool init capacity:%lu, bumppointer:%lu, bumpendpointer:%lu\n", maxPoolSize,
                      bumpPointer, bumpEndPointer);
    }

    void *get() {
        unsigned long start = Timer::getCurrentCycle();
        void *result = NULL;
        if (freeListHead != NULL) {
            result = _getFromFreeList();
        }
        if (result != NULL) {
            memset(result, 0, sizeOfMemoryBlock);
            Logger::debug("memory pool get address:%lu, total cycles:%lu\n", result, Timer::getCurrentCycle() - start);
            return result;
        }
        result = _getFromBumpPointer();
        Logger::debug("memory pool get address:%lu, total cycles:%lu\n", result, Timer::getCurrentCycle() - start);
        return result;
    }

    void release(void *memoryBlock) {
        _insertIntoFreeList(memoryBlock);
    }
};

#endif //NUMAPERF_MEMORYPOOL_H
