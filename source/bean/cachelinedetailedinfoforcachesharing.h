#ifndef NUMAPERF_CACHELINEDETAILEDINFOFORCACHESHARING_H
#define NUMAPERF_CACHELINEDETAILEDINFOFORCACHESHARING_H

#include "../xdefines.h"
#include "../utils/addresses.h"

#define MULTIPLE_THREAD 0xffff

class CacheLineDetailedInfoForCacheSharing {
    unsigned long invalidationNumber;
    unsigned int accessThreadsBitMask[2];
    unsigned short threadIdAndIsMultipleThreadsUnion;
    unsigned short wordThreadIdAndIsMultipleThreadsUnion[WORD_NUMBER_IN_CACHELINE];
private:
    inline void resetThreadBitMask() {
        accessThreadsBitMask[0] = 0;
        accessThreadsBitMask[1] = 0;
    }

    inline bool setThreadBitMask(unsigned long index) {
        if (index <= 8 * sizeof(int)) {
            unsigned int bit = 1 << index;
            bool result = bit && accessThreadsBitMask[0];
            accessThreadsBitMask[0] = accessThreadsBitMask[0] && bit;
            return !result;
        }
        index = index - 8 * sizeof(int);
        unsigned int bit = 1 << index;
        bool result = bit && accessThreadsBitMask[1];
        accessThreadsBitMask[1] = accessThreadsBitMask[1] && bit;
        return !result;
    }

public:
    CacheLineDetailedInfoForCacheSharing() {
        memset(this, 0, sizeof(CacheLineDetailedInfoForCacheSharing));
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

#endif //NUMAPERF_CACHELINEDETAILEDINFOFORCACHESHARING_H
