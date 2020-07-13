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
#include "addresses.h"

#define FETCH_SIZE PAGE_SIZE
#define THREAD_LOCAL_CACHE_NUM MAX_THREAD_NUM+2

class MemoryPool {
    class ThreadLocalCache {
    private:
        void *bumpPointer;
        void *bumpEndPointer;
        void *freeListHead;
        char cecheLinePadding[CACHE_LINE_SIZE - 3 * sizeof(void *)];

        inline void fetchFromCentral(MemoryPool *centralHeap) {
            bumpPointer = centralHeap->automicFetchPage();
            bumpEndPointer = ((char *) bumpPointer) + FETCH_SIZE;
        }

    public:
        inline void *get(MemoryPool *centralHeap, unsigned int size) {
            if (NULL != freeListHead) {
                void *result = freeListHead;
                freeListHead = *((void **) result);
                return result;
            }
            void *result = bumpPointer;
            bumpPointer = ((char *) bumpPointer) + size;
            if (bumpPointer <= bumpEndPointer) {
                return result;
            }
            fetchFromCentral(centralHeap);
            result = bumpPointer;
            bumpPointer = ((char *) bumpPointer) + size;
            return result;
        }

        inline void release(void *memoryBlock) {
            *((void **) memoryBlock) = (void *) freeListHead;
            freeListHead = memoryBlock;
        }
    };

private:
    void *centralBumpPointer;
    void *centralBumpEndPointer;
    unsigned int memoryBlockSize;
    ThreadLocalCache *threadLocalCache[THREAD_LOCAL_CACHE_NUM];
private:

    void *automicFetchPage() {
        void *result = centralBumpPointer;
        while (!__atomic_compare_exchange_n(&centralBumpPointer, &result, (char *) result + FETCH_SIZE,
                                            false,
                                            __ATOMIC_SEQ_CST,
                                            __ATOMIC_SEQ_CST)) {
            result = centralBumpPointer;
        }
        assert(centralBumpPointer < centralBumpEndPointer);
        return (void *) result;
    }
//    inline void *automicGetFromFreeList() {
//        void *result = freeListHead;
//        if (NULL == result) {
//            return NULL;
//        }
//        while (!__atomic_compare_exchange_n(&freeListHead, &result, *((void **) result),
//                                            false,
//                                            __ATOMIC_SEQ_CST,
//                                            __ATOMIC_SEQ_CST)) {
//            result = freeListHead;
//            if (NULL == result) {
//                return NULL;
//            }
//        }
//        return (void *) result;
//    }
//
//    inline void automicInsertIntoFreeList(void *memoryBlock) {
//        void *nextBlock = freeListHead;
//        while (!__atomic_compare_exchange_n(&freeListHead, &nextBlock, memoryBlock,
//                                            false,
//                                            __ATOMIC_SEQ_CST,
//                                            __ATOMIC_SEQ_CST)) {
//            nextBlock = freeListHead;
//        }
//        *((void **) memoryBlock) = (void *) nextBlock;
//    }

//    inline void *automicGetFromBumpPointer() {
//        void *result = centralBumpPointer;
//        while (!__atomic_compare_exchange_n(&centralBumpPointer, &result, (char *) result + sizeOfMemoryBlock,
//                                            false,
//                                            __ATOMIC_SEQ_CST,
//                                            __ATOMIC_SEQ_CST)) {
//            result = centralBumpPointer;
//        }
//        assert(centralBumpPointer < centralBumpEndPointer);
//        return (void *) result;
//    }

public:
    MemoryPool(unsigned int sizeOfMemoryBlock, unsigned long maxPoolSize = 1024ul * 1024ul * 1024ul * 1024ul) {
        Logger::debug("memory pool init\n");
        this->centralBumpPointer = MM::mmapAllocateShared(maxPoolSize);
        this->centralBumpEndPointer = (char *) this->centralBumpPointer + maxPoolSize;
        this->memoryBlockSize = sizeOfMemoryBlock;
        void *threadLocalCacheMem = this->centralBumpPointer;
        this->centralBumpPointer =
                ((char *) this->centralBumpPointer) +
                ADDRESSES::alignUpToPage(THREAD_LOCAL_CACHE_NUM * sizeof(threadLocalCache));
        for (int i = 0; i < THREAD_LOCAL_CACHE_NUM; i++) {
            this->threadLocalCache[i] = ((ThreadLocalCache *) threadLocalCacheMem) + i;
        }
//        memset((void *) bumpPointer, 0, initPoolSize);
        Logger::debug("memory pool init capacity:%lu, bumppointer:%lu, bumpendpointer:%lu\n", maxPoolSize,
                      centralBumpPointer, centralBumpEndPointer);
    }

    inline void *get(unsigned long threadId = -1) {
//        unsigned long start = Timer::getCurrentCycle();
        threadId = threadId + 1;
        void *result = threadLocalCache[threadId]->get(this, memoryBlockSize);
//        Logger::debug("memory pool get address:%lu, total cycles:%lu\n", result, Timer::getCurrentCycle() - start);
        return result;
    }

    inline void release(void *memoryBlock, unsigned long threadId = -1) {
        threadId = threadId + 1;
        threadLocalCache[threadId]->release(memoryBlock);
    }
};

#endif //NUMAPERF_MEMORYPOOL_H
