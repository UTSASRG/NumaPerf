#ifndef NUMAPERF_CACHELINEDETAILEDINFO_H
#define NUMAPERF_CACHELINEDETAILEDINFO_H

#include "../xdefines.h"
#include "../utils/addresses.h"
#include "../utils/bitmasks.h"
#include "scores.h"

#define MULTIPLE_THREAD 0xffff

typedef struct ReadWritNum {
    unsigned int readingNum;
    unsigned int writingNum;
} ReadWritNum;

class CacheLineDetailedInfo {
    unsigned long firstTouchThreadId;
    unsigned long startAddress;
    unsigned long seriousScore;
    unsigned long invalidationNumberInFirstThread;
    unsigned long invalidationNumberInOtherThreads;
    unsigned long readNumBeforeLastWrite;
    unsigned long continualReadNumAfterAWrite;
    unsigned int accessThreadsBitMask[MAX_THREAD_NUM / (8 * sizeof(unsigned int))];
    ReadWritNum readWritNum[MAX_THREAD_NUM];
    unsigned short threadIdAndIsMultipleThreadsUnion;
    unsigned short wordThreadIdAndIsMultipleThreadsUnion[WORD_NUMBER_IN_CACHELINE];

private:
    static MemoryPool localMemoryPool;

private:

    inline void resetThreadBitMask() {
        memset(accessThreadsBitMask, 0, MAX_THREAD_NUM / 8);
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

    CacheLineDetailedInfo(unsigned long cacheLineStartAddress, unsigned long firstTouchThreadId) {
//        memset(this, 0, sizeof(CacheLineDetailedInfo));
        this->firstTouchThreadId = firstTouchThreadId;
        this->startAddress = cacheLineStartAddress;
    }

    CacheLineDetailedInfo(const CacheLineDetailedInfo &cacheLineDetailedInfo) {
        this->firstTouchThreadId = cacheLineDetailedInfo.firstTouchThreadId;
        this->startAddress = cacheLineDetailedInfo.startAddress;
//        memcpy(this, &cacheLineDetailedInfo, sizeof(CacheLineDetailedInfo));
    }

    void clear() {
        memset(&(this->seriousScore), 0, sizeof(CacheLineDetailedInfo) - sizeof(unsigned long) - sizeof(unsigned long));
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

    inline unsigned long getTotalRemoteAccess() {
        if (this->seriousScore != 0) {
            return this->seriousScore;
        }
        this->seriousScore = this->invalidationNumberInOtherThreads;
        return this->seriousScore;
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
            readWritNum[threadId].writingNum++;
        }

        if (type == E_ACCESS_READ) {
#ifdef SAMPLING
            if (sampled) {
                continualReadNumAfterAWrite++;
                readWritNum[threadId].readingNum++;
            }
#else
            continualReadNumAfterAWrite++;
            readWritNum[threadId].readingNum++;
#endif
        }

        // for cache false sharing detect
        if (type == E_ACCESS_READ) {
            return;
        }

        if (threadIdAndIsMultipleThreadsUnion == 0) {
            threadIdAndIsMultipleThreadsUnion = threadId;
            return;
        }

        if (threadIdAndIsMultipleThreadsUnion != MULTIPLE_THREAD) {
            if (threadIdAndIsMultipleThreadsUnion != threadId) {
                threadIdAndIsMultipleThreadsUnion = MULTIPLE_THREAD;
            }
            return;
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
        fprintf(file, "%sFirstTouchThreadId:       %lu\n", prefix, this->firstTouchThreadId);
        fprintf(file, "%sDuplicatable(Non-ContinualReadingNumber/ContinualReadingNumber):       %lu/%lu\n", prefix,
                this->readNumBeforeLastWrite, this->continualReadNumAfterAWrite);
        fprintf(file, "%sFalseSharing(sharing in each word):\n", prefix);
        for (int i = 0; i < WORD_NUMBER_IN_CACHELINE; i++) {
            if (wordThreadIdAndIsMultipleThreadsUnion[i] == MULTIPLE_THREAD) {
                fprintf(file, "%s%d-th word:%s,", prefix, i, "true");
            } else {
                fprintf(file, "%s%d-th word:%s,", prefix, i, "false");
            }
        }
        fprintf(file, "\n");

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
        // print concurrent word index
    }
};

#endif //NUMAPERF_CACHELINEDETAILEDINFO_H
