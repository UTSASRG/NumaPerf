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
#include "asserts.h"
#include "addresses.h"

#define NAME_LENGTH 30

class MemoryPool {
private:
    char name[NAME_LENGTH];
    unsigned int sizeOfMemoryBlock;
    unsigned long maxPoolSize;
    void *volatile bumpPointer;
    void *volatile bumpEndPointer;
    void *volatile freeListHead;
    spinlock lock;
private:
    inline void *automicGetFromFreeList() {
        lock.lock();
        void *volatile result = freeListHead;
        if (NULL == result) {
            lock.unlock();
            return NULL;
        }
        while (!__atomic_compare_exchange_n(&freeListHead, (void **) &result, *(void **) result,
                                            false,
                                            __ATOMIC_SEQ_CST,
                                            __ATOMIC_SEQ_CST)) {
            result = freeListHead;
            if (NULL == result) {
                lock.unlock();
                return NULL;
            }
        }
        lock.unlock();
        return (void *) result;
    }

    inline void automicInsertIntoFreeList(void *memoryBlock) {
        void *volatile nextBlock = freeListHead;
        *((void *volatile *) memoryBlock) = (void *) nextBlock;
        while (!__atomic_compare_exchange_n(&freeListHead, (void **) &nextBlock, memoryBlock,
                                            false,
                                            __ATOMIC_SEQ_CST,
                                            __ATOMIC_SEQ_CST)) {
            nextBlock = freeListHead;
            *((void *volatile *) memoryBlock) = (void *) nextBlock;
        }
    }

    inline void *automicGetFromBumpPointer() {
        void *volatile result = bumpPointer;
        while (!__atomic_compare_exchange_n(&bumpPointer, (void **) &result, (char *) result + sizeOfMemoryBlock,
                                            false,
                                            __ATOMIC_SEQ_CST,
                                            __ATOMIC_SEQ_CST)) {
            result = bumpPointer;
        }
        Asserts::assertt(bumpPointer < bumpEndPointer, 2, (char *) "memorypool out of memory:", this->name);
        return (void *) result;
    }

public:
    MemoryPool(char *name, unsigned int sizeOfMemoryBlock,
               unsigned long maxPoolSize = 1024ul * 1024ul * 1024ul * 1024ul) {
//        Logger::debug("memory pool init\n");
        lock.init();
        if (strlen(name) >= NAME_LENGTH) {
            Asserts::assertt(false, 2, (char *) "memoryPool name is too long:", name);
        }
        memcpy(this->name, name, strlen(name) + 1);
        this->sizeOfMemoryBlock = ADDRESSES::alignUpToCacheLine(sizeOfMemoryBlock + sizeof(void *));
        this->maxPoolSize = maxPoolSize;
        this->freeListHead = NULL;
        this->bumpPointer = MM::mmapAllocatePrivate(maxPoolSize, NULL, false, -1, true);
        this->bumpEndPointer = (char *) this->bumpPointer + maxPoolSize;
//        memset((void *) bumpPointer, 0, initPoolSize);
//        Logger::debug("memory pool init capacity:%lu, bumppointer:%lu, bumpendpointer:%lu\n", maxPoolSize,
//                      bumpPointer, bumpEndPointer);
    }

    unsigned int getMemBlockSize() {
        return this->sizeOfMemoryBlock - sizeof(void*);
    }

    void *get() {
//        unsigned long start = Timer::getCurrentCycle();
        void *result = NULL;
        if (freeListHead != NULL) {
            result = automicGetFromFreeList();
        }
        if (result != NULL) {
            memset(result, 0, sizeOfMemoryBlock);
//            Logger::debug("memory pool get address:%lu, total cycles:%lu\n", result, Timer::getCurrentCycle() - start);
            return (void *) ((unsigned long) result + sizeof(void *));
        }
        result = automicGetFromBumpPointer();
//        Logger::debug("memory pool get address:%lu, total cycles:%lu\n", result, Timer::getCurrentCycle() - start);
        return (void *) ((unsigned long) result + sizeof(void *));
    }

    void release(void *memoryBlock) {
        if (NULL == memoryBlock) {
            return;
        }
        memoryBlock = (void *) ((unsigned long) memoryBlock - sizeof(void *));
        automicInsertIntoFreeList(memoryBlock);
    }
};

#endif //NUMAPERF_MEMORYPOOL_H
