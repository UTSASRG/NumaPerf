#ifndef NUMAPERF_CACHELINEDETAILEDINFO_H
#define NUMAPERF_CACHELINEDETAILEDINFO_H

#include "../xdefines.h"
#include "../utils/addresses.h"
#include "../utils/bitmasks.h"
#include "scores.h"

#define MULTIPLE_THREAD 0xffff

class CacheLineDetailedInfo {
    unsigned long startAddress;
    unsigned long seriousScore;
    unsigned long invalidationNumberInFirstThread;
    unsigned long invalidationNumberInOtherThreads;
    unsigned int accessThreadsBitMask[MAX_THREAD_NUM / (8 * sizeof(unsigned int))];
    unsigned short threadIdAndIsMultipleThreadsUnion;
    unsigned short wordThreadIdAndIsMultipleThreadsUnion[WORD_NUMBER_IN_CACHELINE];

private:
    static MemoryPool localMemoryPool;

private:

    inline void resetThreadBitMask() {
        accessThreadsBitMask[0] = 0;
        accessThreadsBitMask[1] = 0;
    }

    inline bool setThreadBitMask(unsigned long threadIndex) {
        return BitMasks::setBit(accessThreadsBitMask, MAX_THREAD_NUM, threadIndex);
    }

    inline bool recordNewInvalidation(unsigned long threadId, eAccessType type) {
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

public:

    CacheLineDetailedInfo() {
    }

    CacheLineDetailedInfo(unsigned long cacheLineStartAddress) {
//        memset(this, 0, sizeof(CacheLineDetailedInfo));
        this->startAddress = cacheLineStartAddress;
    }

    CacheLineDetailedInfo(const CacheLineDetailedInfo &cacheLineDetailedInfo) {
        this->startAddress = cacheLineDetailedInfo.startAddress;
//        memcpy(this, &cacheLineDetailedInfo, sizeof(CacheLineDetailedInfo));
    }

//    inline static CacheLineDetailedInfo *
//    createNewCacheLineDetailedInfoForCacheSharing(unsigned long cacheLineStartAddress) {
//        void *buff = localMemoryPool.get();
////        Logger::debug("new CacheLineDetailedInfoForCacheSharing buff address:%lu \n", buff);
//        CacheLineDetailedInfo *ret = new(buff) CacheLineDetailedInfo(cacheLineStartAddress);
//        return ret;
//    }

    inline static void release(CacheLineDetailedInfo *buff) {
        localMemoryPool.release((void *) buff);
    }

    CacheLineDetailedInfo *copy() {
        void *buff = localMemoryPool.get();
        memcpy(buff, this, sizeof(CacheLineDetailedInfo));
        return (CacheLineDetailedInfo *) buff;
    }

    inline bool isCoveredByObj(unsigned long objStartAddress, unsigned long objSize) {
        if (objStartAddress > this->startAddress) {
            return false;
        }
        if ((objStartAddress + objSize) < (this->startAddress + CACHE_LINE_SIZE)) {
            return false;
        }
        return true;
    }

    inline unsigned long getInvalidationNumberInFirstThread() {
        return invalidationNumberInFirstThread;
    }

    inline unsigned long getInvalidationNumberInOtherThreads() {
        return invalidationNumberInOtherThreads;
    }

    inline unsigned long getSeriousScore() {
        if (this->seriousScore != 0) {
            return this->seriousScore;
        }
        this->seriousScore = Scores::getScoreForCacheInvalid(this->invalidationNumberInFirstThread,
                                                             this->invalidationNumberInOtherThreads);
        return this->seriousScore;
    }

    inline bool operator<(CacheLineDetailedInfo &cacheLineDetailedInfo) {
        return this->getSeriousScore() < cacheLineDetailedInfo.getSeriousScore();
    }

    inline bool operator>(CacheLineDetailedInfo &cacheLineDetailedInfo) {
        return this->getSeriousScore() > cacheLineDetailedInfo.getSeriousScore();
    }

    inline bool operator<=(CacheLineDetailedInfo &cacheLineDetailedInfo) {
        return this->getSeriousScore() <= cacheLineDetailedInfo.getSeriousScore();
    }

    inline bool operator>=(CacheLineDetailedInfo &cacheLineDetailedInfo) {
        return this->getSeriousScore() >= cacheLineDetailedInfo.getSeriousScore();
    }

    inline bool operator==(CacheLineDetailedInfo &cacheLineDetailedInfo) {
        return this->getSeriousScore() == cacheLineDetailedInfo.getSeriousScore();
    }

    inline bool operator>=(unsigned long seriScore) {
        return this->getSeriousScore() >= seriScore;
    }

    inline void
    recordAccess(unsigned long threadId, unsigned long firstTouchThreadId, eAccessType type, unsigned long addr) {
        if (firstTouchThreadId == threadId) {
            if (recordNewInvalidation(threadId, type)) {
                invalidationNumberInFirstThread++;
            }
        } else {
            if (recordNewInvalidation(threadId, type)) {
                invalidationNumberInOtherThreads++;
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

    inline void dump(FILE *file, int blackSpaceNum) {
        char prefix[blackSpaceNum];
        for (int i = 0; i < blackSpaceNum; i++) {
            prefix[i] = ' ';
        }
        fprintf(file, "%sCacheLineStartAddress:    %p\n", prefix, (void *) (this->startAddress));
        fprintf(file, "%sSeriousScore:             %lu\n", prefix, this->getSeriousScore());
        fprintf(file, "%sInvalidNumInMainThread:   %lu\n", prefix, this->getInvalidationNumberInFirstThread());
        fprintf(file, "%sInvalidNumInOtherThreads: %lu\n", prefix, this->getInvalidationNumberInOtherThreads());
        // print concurrent word index
    }
};

#endif //NUMAPERF_CACHELINEDETAILEDINFO_H
