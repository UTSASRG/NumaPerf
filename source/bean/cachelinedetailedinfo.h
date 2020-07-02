#ifndef NUMAPERF_CACHELINEDETAILEDINFO_H
#define NUMAPERF_CACHELINEDETAILEDINFO_H

#include "../xdefines.h"
#include "../utils/addresses.h"
#include "../utils/bitmasks.h"

#define MULTIPLE_THREAD 0xffff

class CacheLineDetailedInfo {
    unsigned long invalidationNumber;
    unsigned int accessThreadsBitMask[2];
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
        BitMasks::setBit(accessThreadsBitMask, 2 * sizeof(unsigned int), threadIndex);
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

    inline void recordAccess(unsigned long threadId, eAccessType type, unsigned long addr) {
        if (type == E_ACCESS_WRITE) {
            resetThreadBitMask();
            setThreadBitMask(threadId);
            invalidationNumber++;
        } else {
            if (setThreadBitMask(threadId)) {
                invalidationNumber++;
            }
        }

        if (threadIdAndIsMultipleThreadsUnion == 0) {
            threadIdAndIsMultipleThreadsUnion = threadId;
            return;
        }

        if (threadIdAndIsMultipleThreadsUnion != MULTIPLE_THREAD) {
            if (threadIdAndIsMultipleThreadsUnion != threadId) {
                threadIdAndIsMultipleThreadsUnion = MULTIPLE_THREAD;
            }
            return;;
        }

        // threadIdAndIsMultipleThreadsUnion==MULTIPLE_THREAD
        unsigned long wordIndex = ADDRESSES::getWordIndexInsideCache(addr);
        if (wordThreadIdAndIsMultipleThreadsUnion[wordIndex] == 0) {
            wordThreadIdAndIsMultipleThreadsUnion[wordIndex] = threadId;
            return;
        }
        if (wordThreadIdAndIsMultipleThreadsUnion[wordIndex] == MULTIPLE_THREAD) {
            return;
        }
        if (wordThreadIdAndIsMultipleThreadsUnion[wordIndex] != threadId) {
            wordThreadIdAndIsMultipleThreadsUnion[wordIndex] = MULTIPLE_THREAD;
            return;
        }
    }
};

#endif //NUMAPERF_CACHELINEDETAILEDINFO_H
