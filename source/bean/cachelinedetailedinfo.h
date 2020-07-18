#ifndef NUMAPERF_CACHELINEDETAILEDINFO_H
#define NUMAPERF_CACHELINEDETAILEDINFO_H

#include "../xdefines.h"
#include "../utils/addresses.h"
#include "../utils/bitmasks.h"

#define MULTIPLE_THREAD 0xffff

class CacheLineDetailedInfo {
    unsigned long invalidationNumberInFirstTouchThread;
    unsigned long invalidationNumberInOtherThreads;
    unsigned long accessNumberByFirstTouchThread;
    unsigned long accessNumberByOtherThread;
    unsigned int accessThreadsBitMask[MAX_THREAD_NUM / (8 * sizeof(unsigned int))];
    unsigned short threadIdAndIsMultipleThreadsUnion;
    unsigned short wordThreadIdAndIsMultipleThreadsUnion[WORD_NUMBER_IN_CACHELINE];

private:
    static MemoryPool localMemoryPool;

private:

    CacheLineDetailedInfo() {
        memset(this, 0, sizeof(CacheLineDetailedInfo));
    }

    inline void resetThreadBitMask() {
        accessThreadsBitMask[0] = 0;
        accessThreadsBitMask[1] = 0;
    }

    inline bool setThreadBitMask(unsigned long threadIndex) {
        return BitMasks::setBit(accessThreadsBitMask, MAX_THREAD_NUM, threadIndex);
    }

public:


    static CacheLineDetailedInfo *createNewCacheLineDetailedInfoForCacheSharing() {
        void *buff = localMemoryPool.get();
        Logger::debug("new CacheLineDetailedInfoForCacheSharing buff address:%lu \n", buff);
        CacheLineDetailedInfo *ret = new(buff) CacheLineDetailedInfo();
        return ret;
    }

    static void release(CacheLineDetailedInfo *buff) {
        localMemoryPool.release((void *) buff);
    }


    inline bool recordNewInvalidate(unsigned long threadId, eAccessType type) {
        if (type == E_ACCESS_WRITE) {
            resetThreadBitMask();
            setThreadBitMask(threadId);
            return true;
        } else {
            if (setThreadBitMask(threadId)) {
                return true;
            }
        }
        return false;
    }

    /**
     *
     * @param threadId
     * @param type
     * @param addr
     */
    inline void
    recordAccess(unsigned long threadId, unsigned long firstTouchThreadId, eAccessType type, unsigned long addr) {
        if (firstTouchThreadId == threadId) {
            accessNumberByFirstTouchThread++;
            if (recordNewInvalidate(threadId, type)) {
                invalidationNumberInFirstTouchThread++;
            }
        } else {
            if (recordNewInvalidate(threadId, type)) {
                invalidationNumberInOtherThreads++;
            }
            accessNumberByOtherThread++;
        }


        if (threadIdAndIsMultipleThreadsUnion == 0) {
            threadIdAndIsMultipleThreadsUnion = threadId;
            return;
        }

        if (threadIdAndIsMultipleThreadsUnion != MULTIPLE_THREAD && threadIdAndIsMultipleThreadsUnion != threadId) {
            threadIdAndIsMultipleThreadsUnion = MULTIPLE_THREAD;
            return;;
        }

        // threadIdAndIsMultipleThreadsUnion==MULTIPLE_THREAD
        unsigned long wordIndex = ADDRESSES::getWordIndexInsideCache(addr);
        if (wordThreadIdAndIsMultipleThreadsUnion[wordIndex] == MULTIPLE_THREAD) {
            return;
        }
        if (wordThreadIdAndIsMultipleThreadsUnion[wordIndex] == 0) {
            wordThreadIdAndIsMultipleThreadsUnion[wordIndex] = threadId;
            return;
        }
        if (wordThreadIdAndIsMultipleThreadsUnion[wordIndex] != threadId) {
            wordThreadIdAndIsMultipleThreadsUnion[wordIndex] = MULTIPLE_THREAD;
            return;
        }
    }
};

#endif //NUMAPERF_CACHELINEDETAILEDINFO_H
