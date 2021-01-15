#ifndef NUMAPERF_DIAGNOSEOBJINFO_H
#define NUMAPERF_DIAGNOSEOBJINFO_H

#include "objectInfo.h"
#include "cachelinedetailedinfo.h"
#include "pagedetailAccessInfo.h"
#include "../xdefines.h"
#include "../utils/collection/priorityqueue.h"

class DiagnoseObjInfo {

    ObjectInfo *objectInfo;
    unsigned long allInvalidNumInMainThread;
    unsigned long allInvalidNumInOtherThreads;
    unsigned long allAccessNumInMainThread;
    unsigned long allAccessNumInOtherThread;
    unsigned long readNumBeforeLastWrite;
    unsigned long continualReadNumAfterAWrite;
    unsigned long invalidNumInOtherThreadByTrueCacheSharing;
    unsigned long invalidNumInOtherThreadByFalseCacheSharing;
    PriorityQueue<CacheLineDetailedInfo> topCacheLineDetailQueue;
    PriorityQueue<PageDetailedAccessInfo> topPageDetailedAccessInfoQueue;

private:
    static MemoryPool localMemoryPool;


public:

    DiagnoseObjInfo(ObjectInfo *objectInfo) : topCacheLineDetailQueue(MAX_TOP_CACHELINE_DETAIL_INFO),
                                              topPageDetailedAccessInfoQueue(MAX_TOP_PAGE_DETAIL_INFO) {
        this->objectInfo = objectInfo;
        allInvalidNumInMainThread = 0;
        allInvalidNumInOtherThreads = 0;
        allAccessNumInMainThread = 0;
        allAccessNumInOtherThread = 0;
        readNumBeforeLastWrite = 0;
        continualReadNumAfterAWrite = 0;
        invalidNumInOtherThreadByTrueCacheSharing = 0;
        invalidNumInOtherThreadByFalseCacheSharing = 0;
    }

    inline DiagnoseObjInfo *deepCopy() {
        DiagnoseObjInfo *buff = (DiagnoseObjInfo *) localMemoryPool.get();
        buff->objectInfo = this->objectInfo;
        buff->allInvalidNumInMainThread = this->allInvalidNumInMainThread;
        buff->allInvalidNumInOtherThreads = this->allInvalidNumInOtherThreads;
        buff->allAccessNumInMainThread = this->allAccessNumInMainThread;
        buff->allAccessNumInOtherThread = this->allAccessNumInOtherThread;
        buff->readNumBeforeLastWrite = this->readNumBeforeLastWrite;
        buff->continualReadNumAfterAWrite = this->continualReadNumAfterAWrite;
        buff->invalidNumInOtherThreadByTrueCacheSharing = this->invalidNumInOtherThreadByTrueCacheSharing;
        buff->invalidNumInOtherThreadByFalseCacheSharing = this->invalidNumInOtherThreadByFalseCacheSharing;
        buff->topCacheLineDetailQueue.setEndIndex(this->topCacheLineDetailQueue.getSize());
        buff->topPageDetailedAccessInfoQueue.setEndIndex(this->topPageDetailedAccessInfoQueue.getSize());
        for (int i = 0; i < this->topCacheLineDetailQueue.getSize(); i++) {
            buff->topCacheLineDetailQueue.getValues()[i] = this->topCacheLineDetailQueue.getValues()[i]->copy();
        }

        for (int i = 0; i < this->topPageDetailedAccessInfoQueue.getSize(); i++) {
            buff->topPageDetailedAccessInfoQueue.getValues()[i] = this->topPageDetailedAccessInfoQueue.getValues()[i]->copy();
        }
        return (DiagnoseObjInfo *) buff;
    }

    inline static DiagnoseObjInfo *createNewDiagnoseObjInfo(ObjectInfo *objectInfo) {
        void *buff = localMemoryPool.get();
//        Logger::debug("new DiagnoseObjInfo buff address:%lu \n", buff);
        DiagnoseObjInfo *ret = new(buff) DiagnoseObjInfo(objectInfo);
        return ret;
    }

    inline void clearCacheAndPage() {
        for (int i = 0; i < this->topCacheLineDetailQueue.getSize(); i++) {
            this->topCacheLineDetailQueue.getValues()[i]->clear();
        }

        for (int i = 0; i < this->topPageDetailedAccessInfoQueue.getSize(); i++) {
            unsigned long objAddress = this->objectInfo->getStartAddress();
            unsigned long objSize = this->objectInfo->getSize();
            if (this->topPageDetailedAccessInfoQueue.getValues()[i]->isCoveredByObj(objAddress, objSize)) {
                this->topPageDetailedAccessInfoQueue.getValues()[i]->clearAll();
                continue;
            }
            this->topPageDetailedAccessInfoQueue.getValues()[i]->clearResidObjInfo(objAddress, objSize);
        }
    }

    inline void release() {
        for (int i = 0; i < this->topCacheLineDetailQueue.getSize(); i++) {
            CacheLineDetailedInfo::release(this->topCacheLineDetailQueue.getValues()[i]);
        }
        for (int i = 0; i < this->topPageDetailedAccessInfoQueue.getSize(); i++) {
            PageDetailedAccessInfo::release(this->topPageDetailedAccessInfoQueue.getValues()[i]);
        }
        ObjectInfo::release(this->objectInfo);
    }

    inline static void release(DiagnoseObjInfo *buff) {
        buff->release();
        localMemoryPool.release((void *) buff);
    }

    inline unsigned long getTotalRemoteAccess() const {
        //todo
        return allInvalidNumInOtherThreads + allAccessNumInOtherThread;
    }

    inline CacheLineDetailedInfo *insertCacheLineDetailedInfo(CacheLineDetailedInfo *cacheLineDetailedInfo) {
        this->allInvalidNumInMainThread += cacheLineDetailedInfo->getInvalidationNumberInFirstThread();
        this->allInvalidNumInOtherThreads += cacheLineDetailedInfo->getInvalidationNumberInOtherThreads();
        this->readNumBeforeLastWrite += cacheLineDetailedInfo->getReadNumBeforeLastWrite();
        this->continualReadNumAfterAWrite += cacheLineDetailedInfo->getContinualReadNumAfterAWrite();
        unsigned int sharingType = cacheLineDetailedInfo->getSharingType();
        if (sharingType == TRUE_SHARING) {
            this->invalidNumInOtherThreadByTrueCacheSharing += cacheLineDetailedInfo->getInvalidationNumberInOtherThreads();
        } else if (sharingType == FALSE_SHARING) {
            this->invalidNumInOtherThreadByFalseCacheSharing += cacheLineDetailedInfo->getInvalidationNumberInOtherThreads();
        }
        if (topCacheLineDetailQueue.mayCanInsert(cacheLineDetailedInfo->getTotalRemoteAccess())) {
            return topCacheLineDetailQueue.insert(cacheLineDetailedInfo);
//            CacheLineDetailedInfo *oldCacheLineInfo = topCacheLineDetailQueue.insert(
//                    cacheLineDetailedInfo->copy());
//            if (oldCacheLineInfo != NULL) {
//                CacheLineDetailedInfo::release(oldCacheLineInfo);
//            }
        }
        return NULL;
    }

    inline PageDetailedAccessInfo *
    insertPageDetailedAccessInfo(PageDetailedAccessInfo *pageDetailedAccessInfo, bool wholePageCoveredByObj) {
        if (wholePageCoveredByObj) {
            this->allAccessNumInMainThread += pageDetailedAccessInfo->getAccessNumberByFirstTouchThread(
                    0, 0);
            this->allAccessNumInOtherThread += pageDetailedAccessInfo->getAccessNumberByOtherTouchThread(
                    0, 0);
        } else {
            this->allAccessNumInMainThread += pageDetailedAccessInfo->getAccessNumberByFirstTouchThread(
                    objectInfo->getStartAddress(), objectInfo->getSize());
            this->allAccessNumInOtherThread += pageDetailedAccessInfo->getAccessNumberByOtherTouchThread(
                    objectInfo->getStartAddress(), objectInfo->getSize());
        }
        if (topPageDetailedAccessInfoQueue.mayCanInsert(pageDetailedAccessInfo->getTotalRemoteAccess())) {
            return topPageDetailedAccessInfoQueue.insert(pageDetailedAccessInfo);
//            PageDetailedAccessInfo *oldPageInfo = topPageDetailedAccessInfoQueue.insert(pageDetailedAccessInfo->copy());
//            if (NULL != oldPageInfo) {
//                PageDetailedAccessInfo::release(oldPageInfo);
//            }
        }
        return NULL;
    }

    inline bool operator<(const DiagnoseObjInfo &diagnoseObjInfo) {
        return this->getTotalRemoteAccess() < diagnoseObjInfo.getTotalRemoteAccess();
    }

    inline bool operator>(const DiagnoseObjInfo &diagnoseObjInfo) {
        return this->getTotalRemoteAccess() > diagnoseObjInfo.getTotalRemoteAccess();
    }

    inline bool operator<=(const DiagnoseObjInfo &diagnoseObjInfo) {
        return this->getTotalRemoteAccess() <= diagnoseObjInfo.getTotalRemoteAccess();
    }

    inline bool operator>=(const DiagnoseObjInfo &diagnoseObjInfo) {
        return this->getTotalRemoteAccess() >= diagnoseObjInfo.getTotalRemoteAccess();
    }

    inline bool operator==(const DiagnoseObjInfo &diagnoseObjInfo) {
        return this->getTotalRemoteAccess() == diagnoseObjInfo.getTotalRemoteAccess();
    }

    inline bool operator>=(unsigned long seriousScore) {
        return this->getTotalRemoteAccess() >= seriousScore;
    }

    inline unsigned long getAllInvalidNumInMainThread() const {
        return allInvalidNumInMainThread;
    }

    inline unsigned long getAllInvalidNumInOtherThreads() const {
        return allInvalidNumInOtherThreads;
    }

    inline unsigned long getAllAccessNumInMainThread() const {
        return allAccessNumInMainThread;
    }

    inline unsigned long getAllAccessNumInOtherThread() const {
        return allAccessNumInOtherThread;
    }

    inline unsigned long getReadNumBeforeLastWrite() const {
        return readNumBeforeLastWrite;
    }

    inline unsigned long getContinualReadNumAfterAWrite() const {
        return continualReadNumAfterAWrite;
    }

    inline unsigned long getInvalidNumInOtherThreadByTrueCacheSharing() const {
        return invalidNumInOtherThreadByTrueCacheSharing;
    }

    inline unsigned long getInvalidNumInOtherThreadByFalseCacheSharing() const {
        return invalidNumInOtherThreadByFalseCacheSharing;
    }

    inline void dump(FILE *file, int blackSpaceNum, unsigned long totalRunningCycles) {
        char prefix[blackSpaceNum + 2];
        for (int i = 0; i < blackSpaceNum; i++) {
            prefix[i] = ' ';
            prefix[i + 1] = '\0';
        }

        this->objectInfo->dump(file, blackSpaceNum);
        fprintf(file, "%sSeriousScore:             %f\n", prefix,
                Scores::getSeriousScore(getTotalRemoteAccess(), totalRunningCycles));
        fprintf(file, "%sInvalidNumInMainThread:   %lu\n", prefix, this->getAllInvalidNumInMainThread());
        fprintf(file, "%sInvalidNumInOtherThreads: %lu\n", prefix, this->getAllInvalidNumInOtherThreads());
        fprintf(file, "%sAccessNumInMainThread:    %lu\n", prefix, this->getAllAccessNumInMainThread());
        fprintf(file, "%sAccessNumInOtherThreads:  %lu\n", prefix, this->getAllAccessNumInOtherThread());

        fprintf(file, "%sinvalidNumInOtherThreadByTrueCacheSharing:  %lu\n", prefix,
                this->invalidNumInOtherThreadByTrueCacheSharing);
        fprintf(file, "%sinvalidNumInOtherThreadByFalseCacheSharing:  %lu\n", prefix,
                this->invalidNumInOtherThreadByFalseCacheSharing);
        fprintf(file, "%sDuplicatable(Non-ContinualReadingNumber/ContinualReadingNumber):       %lu/%lu\n", prefix,
                this->readNumBeforeLastWrite, this->continualReadNumAfterAWrite);

        fprintf(file, "%sinvalidNumInOtherThreadByTrueCacheSharing score:  %f\n", prefix,
                Scores::getSeriousScore(this->invalidNumInOtherThreadByTrueCacheSharing, totalRunningCycles));
        fprintf(file, "%sinvalidNumInOtherThreadByFalseCacheSharing score:  %f\n", prefix,
                Scores::getSeriousScore(this->invalidNumInOtherThreadByFalseCacheSharing, totalRunningCycles));
        fprintf(file, "%sDuplicatable(Non-ContinualReadingNumber/ContinualReadingNumber) score:       %f/%f\n",
                prefix,
                Scores::getSeriousScore(this->readNumBeforeLastWrite, totalRunningCycles),
                Scores::getSeriousScore(this->continualReadNumAfterAWrite, totalRunningCycles));

        for (int i = 0; i < topCacheLineDetailQueue.getSize(); i++) {
            fprintf(file, "%sTop CacheLines %d:\n", prefix, i);
            topCacheLineDetailQueue.getValues()[i]->dump(file, blackSpaceNum + 2, totalRunningCycles);
        }
        for (int i = 0; i < topPageDetailedAccessInfoQueue.getSize(); i++) {
            fprintf(file, "%sTop Pages %d:\n", prefix, i);
            topPageDetailedAccessInfoQueue.getValues()[i]->dump(file, blackSpaceNum + 2, totalRunningCycles);
        }
    }
};

#endif //NUMAPERF_DIAGNOSEOBJINFO_H
