//
// Created by XIN ZHAO on 6/7/20.
//

#ifndef NUMAPERF_MEMORYPOOL_H
#define NUMAPERF_MEMORYPOOL_H


#include <cstdlib>
#include "real.h"
#include "concurrency/spinlock.h"

class MemoryPool {
private:
    unsigned int sizeOfMemoryBlock;
    unsigned int initPoolSize;
    void *bumpPointer;
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

    inline void *automicGetFromBumpPointer() {
        void *result = bumpPointer;
        while (!__atomic_compare_exchange_n(&bumpPointer, &result, (char *) result + sizeOfMemoryBlock,
                                            false,
                                            __ATOMIC_SEQ_CST,
                                            __ATOMIC_SEQ_CST)) {
            if (bumpPointer == NULL) {
                // increase capacity.
                this->lock.lock();
                if (bumpPointer == NULL) {
                    bumpPointer = Real::malloc(initPoolSize);
                }
                this->lock.unlock();
            }
            result = bumpPointer;
        }
        return result;
    }

public:
    MemoryPool(unsigned int sizeOfMemoryBlock, unsigned int initPoolSize) {
        Logger::debug("memory pool init\n");
        this->sizeOfMemoryBlock = sizeOfMemoryBlock;
        this->initPoolSize = initPoolSize;
        this->freeListHead = NULL;
        this->bumpPointer = Real::malloc(initPoolSize);
        this->lock.init();
    }

    void *get() {
        void *result = NULL;
        if (freeListHead != NULL) {
            result = automicGetFromFreeList();
        }
        if (result != NULL) {
            return result;
        }
        return automicGetFromBumpPointer();
    }

    void release(void *memoryBlock) {
        automicInsertIntoFreeList(memoryBlock);
    }
};

#endif //NUMAPERF_MEMORYPOOL_H
