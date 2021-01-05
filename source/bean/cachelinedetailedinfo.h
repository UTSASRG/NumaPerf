#ifndef NUMAPERF_CACHELINEDETAILEDINFO_H
#define NUMAPERF_CACHELINEDETAILEDINFO_H

#include "../xdefines.h"
#include "../utils/addresses.h"
#include "../utils/bitmasks.h"
#include "scores.h"

#define MULTIPLE_THREAD 0xfff

#define THERAD_BIT_MASK_LENGTH (MAX_THREAD_NUM >> 2)   //256
#define THERAD_BIT_MASK ((unsigned long)((1 << (MAX_THREAD_NUM_SHIFT_BITS - 2)) - 1))

class CacheLineDetailedInfo {
    unsigned long startAddress;
    unsigned int invalidationNumberInFirstThread;
    unsigned int invalidationNumberInOtherThreads;
    unsigned int readNumBeforeLastWrite;
    unsigned int continualReadNumAfterAWrite;
    unsigned long accessThreadsBitMask[THERAD_BIT_MASK_LENGTH / (8 * sizeof(unsigned long))];
    short threadIdAndIsMultipleThreadsUnion;
    short wordThreadIdAndIsMultipleThreadsUnion[WORD_NUMBER_IN_CACHELINE];

private:
    static MemoryPool localMemoryPool;

private:

    inline void resetThreadBitMask() {
        memset(accessThreadsBitMask, 0, THERAD_BIT_MASK_LENGTH / 8);
        threadIdAndIsMultipleThreadsUnion = -1;
        for (int i = 0; i < WORD_NUMBER_IN_CACHELINE; i++) {
            wordThreadIdAndIsMultipleThreadsUnion[i] = -1;
        }
    }

    inline bool setThreadBitMask(unsigned long threadIndex) {
        return BitMasks::setBit(accessThreadsBitMask, THERAD_BIT_MASK_LENGTH, threadIndex & THERAD_BIT_MASK);
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

    CacheLineDetailedInfo(unsigned long cacheLineStartAddress, unsigned long firstTouchThreadId) {
//        memset(this, 0, sizeof(CacheLineDetailedInfo));
        this->startAddress = cacheLineStartAddress;
    }

    CacheLineDetailedInfo(const CacheLineDetailedInfo &cacheLineDetailedInfo) {
        this->startAddress = cacheLineDetailedInfo.startAddress;
//        memcpy(this, &cacheLineDetailedInfo, sizeof(CacheLineDetailedInfo));
    }

    void clear() {
        memset(&(this->invalidationNumberInFirstThread), 0, sizeof(CacheLineDetailedInfo) - sizeof(unsigned long));
        threadIdAndIsMultipleThreadsUnion = -1;
        for (int i = 0; i < WORD_NUMBER_IN_CACHELINE; i++) {
            wordThreadIdAndIsMultipleThreadsUnion[i] = -1;
        }
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

    inline unsigned long getReadNumBeforeLastWrite() {
        return readNumBeforeLastWrite;
    }

    inline unsigned long getContinualReadNumAfterAWrite() {
        return continualReadNumAfterAWrite;
    }

    inline unsigned long getTotalRemoteAccess() {
        return this->invalidationNumberInOtherThreads;
    }

    inline bool operator<(CacheLineDetailedInfo &cacheLineDetailedInfo) {
        return this->getTotalRemoteAccess() < cacheLineDetailedInfo.getTotalRemoteAccess();
    }

    inline bool operator>(CacheLineDetailedInfo &cacheLineDetailedInfo) {
        return this->getTotalRemoteAccess() > cacheLineDetailedInfo.getTotalRemoteAccess();
    }

    inline bool operator<=(CacheLineDetailedInfo &cacheLineDetailedInfo) {
        return this->getTotalRemoteAccess() <= cacheLineDetailedInfo.getTotalRemoteAccess();
    }

    inline bool operator>=(CacheLineDetailedInfo &cacheLineDetailedInfo) {
        return this->getTotalRemoteAccess() >= cacheLineDetailedInfo.getTotalRemoteAccess();
    }

    inline bool operator==(CacheLineDetailedInfo &cacheLineDetailedInfo) {
        return this->getTotalRemoteAccess() == cacheLineDetailedInfo.getTotalRemoteAccess();
    }

    inline bool operator>=(unsigned long seriScore) {
        return this->getTotalRemoteAccess() >= seriScore;
    }

    inline void
#ifdef SAMPLING
    recordAccess(unsigned long threadId, unsigned long firstTouchThreadId, eAccessType type, unsigned long addr,
                 bool sampled) {
#else
        recordAccess(unsigned long threadId, unsigned long firstTouchThreadId, eAccessType type, unsigned long addr) {
#endif

        if (firstTouchThreadId == threadId) {
            if (recordNewInvalidation(threadId, type)) {
                invalidationNumberInFirstThread++;
            }
        } else {
            if (recordNewInvalidation(threadId, type)) {
                invalidationNumberInOtherThreads++;
            }
        }

        if (type == E_ACCESS_WRITE) {
            readNumBeforeLastWrite += continualReadNumAfterAWrite;
            continualReadNumAfterAWrite = 0;
//            readWritNum[threadId].writingNum++;
        } else {
#ifdef SAMPLING
            if (sampled) {
                continualReadNumAfterAWrite++;
//                readWritNum[threadId].readingNum++;
            }
#else
            continualReadNumAfterAWrite++;
            readWritNum[threadId].readingNum++;
#endif
            return;        // for cache false sharing detect
        }

        if (threadIdAndIsMultipleThreadsUnion == -1) {
            threadIdAndIsMultipleThreadsUnion = threadId;
            return;
        }

        if (threadIdAndIsMultipleThreadsUnion == threadId) {
            return;
        }

        if (threadIdAndIsMultipleThreadsUnion != MULTIPLE_THREAD) {
            threadIdAndIsMultipleThreadsUnion = MULTIPLE_THREAD;
            return;
        }

        // threadIdAndIsMultipleThreadsUnion==MULTIPLE_THREAD
        unsigned long wordIndex = ADDRESSES::getWordIndexInsideCache(addr);
        if (wordThreadIdAndIsMultipleThreadsUnion[wordIndex] == -1) {
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

    inline void dump(FILE *file, int blackSpaceNum, unsigned long totalRunningCycles) {
        char prefix[blackSpaceNum + 2];
        for (int i = 0; i < blackSpaceNum; i++) {
            prefix[i] = ' ';
            prefix[i + 1] = '\0';
        }
        fprintf(file, "%sCacheLineStartAddress:    %p\n", prefix, (void *) (this->startAddress));
        fprintf(file, "%sSeriousScore:             %f\n", prefix,
                Scores::getSeriousScore(getTotalRemoteAccess(), totalRunningCycles));
        fprintf(file, "%sInvalidNumInMainThread:   %lu\n", prefix, this->getInvalidationNumberInFirstThread());
        fprintf(file, "%sInvalidNumInOtherThreads: %lu\n", prefix, this->getInvalidationNumberInOtherThreads());
        fprintf(file, "%sDuplicatable(Non-ContinualReadingNumber/ContinualReadingNumber):       %d/%d\n", prefix,
                this->readNumBeforeLastWrite, this->continualReadNumAfterAWrite);
        fprintf(file, "%sFalseSharing(sharing in each word):\n", prefix);
        for (int i = 0; i < WORD_NUMBER_IN_CACHELINE; i++) {
            if (wordThreadIdAndIsMultipleThreadsUnion[i] == MULTIPLE_THREAD) {
                fprintf(file, "%s%d-th word:%s,", prefix, i, "true");
            } else {
                fprintf(file, "%s%d-th word:%d,", prefix, i, wordThreadIdAndIsMultipleThreadsUnion[i]);
            }
        }
        fprintf(file, "\n");
#if 0
        for (int i = 0; i < MAX_THREAD_NUM; i++) {
            if (readWritNum[i].writingNum <= 0) {
                continue;
            }
            fprintf(file, "%s    Writing Number In Thread:%d is %u\n", prefix, i, readWritNum[i].writingNum);
        }
        for (int i = 0; i < MAX_THREAD_NUM; i++) {
            if (readWritNum[i].readingNum <= 0) {
                continue;
            }
#ifdef SAMPLING
            fprintf(file, "%s    Reading Number In Thread:%d is %u\n", prefix, i,
                    readWritNum[i].readingNum * SAMPLING_FREQUENCY);
#else
            fprintf(file, "%s    Reading Number In Thread:%d is %u\n", prefix, i, readWritNum[i].readingNum);
#endif
        }
#endif
        // print concurrent word index
    }
};

#endif //NUMAPERF_CACHELINEDETAILEDINFO_H
