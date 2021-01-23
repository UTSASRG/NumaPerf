#ifndef NUMAPERF_DIAGNOSEOBJINFO_H
#define NUMAPERF_DIAGNOSEOBJINFO_H

#include "objectInfo.h"
#include "cachelinedetailedinfo.h"
#include "pagedetailAccessInfo.h"
#include "../xdefines.h"
#include "../utils/collection/priorityqueue.h"
#include "diagnosepageinfo.h"

class DiagnoseObjInfo {

private:
    ObjectInfo *objectInfo;
    unsigned long allAccessNumInOtherThread;
    unsigned long allInvalidNumInOtherThreads;
    unsigned long readNumBeforeLastWrite;
//    unsigned long continualReadNumAfterAWrite;
    unsigned long invalidNumInOtherThreadByTrueCacheSharing;
    unsigned long invalidNumInOtherThreadByFalseCacheSharing;
    int sharedPageNum;
    int detailPageSharingInfoNum;
    int *detailPageSharingInfoPtr;
//    PriorityQueue<DiagnosePageInfo> topPageDetailedAccessInfoQueue;

private:
    static MemoryPool localMemoryPool;

public:

    DiagnoseObjInfo(ObjectInfo *objectInfo) {
        memset(this, 0, sizeof(DiagnoseObjInfo));
        this->objectInfo = objectInfo;
    }

    inline DiagnoseObjInfo *deepCopy() {
        DiagnoseObjInfo *buff = (DiagnoseObjInfo *) localMemoryPool.get();
        memcpy(buff, this, sizeof(DiagnoseObjInfo));
        return buff;
    }

    inline static DiagnoseObjInfo *createNewDiagnoseObjInfo(ObjectInfo *objectInfo) {
        void *buff = localMemoryPool.get();
//        Logger::debug("new DiagnoseObjInfo buff address:%lu \n", buff);
        DiagnoseObjInfo *ret = new(buff) DiagnoseObjInfo(objectInfo);
        return ret;
    }

//    inline void clearCacheAndPage() {
//        for (int i = 0; i < this->topCacheLineDetailQueue.getSize(); i++) {
//            this->topCacheLineDetailQueue.getValues()[i]->clear();
//        }
//        for (int i = 0; i < this->topPageDetailedAccessInfoQueue.getSize(); i++) {
//            unsigned long objAddress = this->objectInfo->getStartAddress();
//            unsigned long objSize = this->objectInfo->getSize();
//            this->topPageDetailedAccessInfoQueue.getValues()[i]->clearResidentDetailedInfo(objAddress, objSize);
//        }
//    }

    void createPageSharingDetail() {
        int num = objectInfo->getSize() / PAGE_SIZE + 2;
        this->detailPageSharingInfoPtr = (int *) Real::malloc(num * sizeof(int));
    }

    inline void releaseInternal() {
        if (this->detailPageSharingInfoPtr != NULL) {
            Real::free(this->detailPageSharingInfoPtr);
            this->detailPageSharingInfoNum = 0;
        }
        if (this->objectInfo != NULL) {
            ObjectInfo::release(this->objectInfo);
        }
    }

    inline static void releaseAll(DiagnoseObjInfo *buff) {
//        for (int i = 0; i < buff->topPageDetailedAccessInfoQueue.getSize(); i++) {
//            DiagnosePageInfo::releaseAll(buff->topPageDetailedAccessInfoQueue.getValues()[i]);
//        }
        buff->releaseInternal();
        localMemoryPool.release((void *) buff);
    }

    inline unsigned long getTotalRemoteAccess() const {
        //todo
        return allInvalidNumInOtherThreads + allAccessNumInOtherThread;
    }

#if 0
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
        return cacheLineDetailedInfo;
    }
#endif

//    inline DiagnosePageInfo *insertInfoPageQueue(DiagnosePageInfo *diagnosePageInfo) {
//        return topPageDetailedAccessInfoQueue.insert(diagnosePageInfo);
//    }

    ObjectInfo *getObjectInfo() {
        return objectInfo;
    }

//    inline void recordPageInfo(PageDetailedAccessInfo *pageDetailedAccessInfo) {
//        bool wholePageCoveredByObj = pageDetailedAccessInfo->isCoveredByObj(this->objectInfo->getStartAddress(),
//                                                                            this->objectInfo->getSize());
//        if (wholePageCoveredByObj) {
//            this->allAccessNumInOtherThread += pageDetailedAccessInfo->getAccessNumberByOtherTouchThread(0, 0);
//        } else {
//            this->allAccessNumInOtherThread += pageDetailedAccessInfo->getAccessNumberByOtherTouchThread(
//                    objectInfo->getStartAddress(), objectInfo->getSize());
//        }
//    }
//
//    inline void recordCacheInfo(CacheLineDetailedInfo *cacheLineDetailedInfo) {
//        this->allInvalidNumInOtherThreads += cacheLineDetailedInfo->getInvalidationNumberInOtherThreads();
//        this->readNumBeforeLastWrite += cacheLineDetailedInfo->getReadNumBeforeLastWrite();
//        int cacheSharingType = cacheLineDetailedInfo->getSharingType();
//        if (cacheSharingType == TRUE_SHARING) {
//            this->invalidNumInOtherThreadByTrueCacheSharing += cacheLineDetailedInfo->getInvalidationNumberInOtherThreads();
//        } else if (cacheSharingType == FALSE_SHARING) {
//            this->invalidNumInOtherThreadByFalseCacheSharing += cacheLineDetailedInfo->getInvalidationNumberInOtherThreads();
//        }
//    }

    inline void recordDiagnosePageInfo(DiagnosePageInfo *diagnosePageInfo) {
        this->allAccessNumInOtherThread += diagnosePageInfo->getRemoteMemAccessNum();
        this->allInvalidNumInOtherThreads += diagnosePageInfo->getRemoteInvalidationNum();
        this->readNumBeforeLastWrite += diagnosePageInfo->getReadNumBeforeLastWrite();
        this->invalidNumInOtherThreadByTrueCacheSharing += diagnosePageInfo->getInvalidationByTrueSharing();
        this->invalidNumInOtherThreadByFalseCacheSharing += diagnosePageInfo->getInvalidationByFalseSharing();
        if (diagnosePageInfo->getThreadIdAndIsSharedUnion() > MAX_THREAD_NUM) {
            this->sharedPageNum++;
        }
        if (this->detailPageSharingInfoPtr != NULL) {
            this->detailPageSharingInfoPtr[detailPageSharingInfoNum] = diagnosePageInfo->getThreadIdAndIsSharedUnion();
            this->detailPageSharingInfoNum++;
        }
    }

//    inline PageDetailedAccessInfo *
//    insertPageDetailedAccessInfo(PageDetailedAccessInfo *pageDetailedAccessInfo) {
//        bool wholePageCoveredByObj = pageDetailedAccessInfo->isCoveredByObj(this->objectInfo->getStartAddress(),
//                                                                            this->objectInfo->getSize());
//        if (wholePageCoveredByObj) {
//            this->allAccessNumInMainThread += pageDetailedAccessInfo->getAccessNumberByFirstTouchThread(
//                    0, 0);
//            this->allAccessNumInOtherThread += pageDetailedAccessInfo->getAccessNumberByOtherTouchThread(
//                    0, 0);
//        } else {
//            this->allAccessNumInMainThread += pageDetailedAccessInfo->getAccessNumberByFirstTouchThread(
//                    objectInfo->getStartAddress(), objectInfo->getSize());
//            this->allAccessNumInOtherThread += pageDetailedAccessInfo->getAccessNumberByOtherTouchThread(
//                    objectInfo->getStartAddress(), objectInfo->getSize());
//        }
//        if (topPageDetailedAccessInfoQueue.mayCanInsert(pageDetailedAccessInfo->getTotalRemoteAccess())) {
//            return topPageDetailedAccessInfoQueue.insert(pageDetailedAccessInfo);
////            PageDetailedAccessInfo *oldPageInfo = topPageDetailedAccessInfoQueue.insert(pageDetailedAccessInfo->copy());
////            if (NULL != oldPageInfo) {
////                PageDetailedAccessInfo::release(oldPageInfo);
////            }
//        }
//        return pageDetailedAccessInfo;
//    }

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

//    inline bool mayCanInsertToTopPageQueue(DiagnosePageInfo *diagnosePageInfo) {
//        return this->topPageDetailedAccessInfoQueue.mayCanInsert(diagnosePageInfo->getTotalRemoteMainMemoryAccess());
//    }

//    inline bool mayCanInsertToTopPageQueue(unsigned long remoteAccess) {
//        return this->topPageDetailedAccessInfoQueue.mayCanInsert(remoteAccess);
//    }

    inline unsigned long getAllInvalidNumInOtherThreads() const {
        return allInvalidNumInOtherThreads;
    }

    inline unsigned long getAllAccessNumInOtherThread() const {
        return allAccessNumInOtherThread;
    }

    inline unsigned long getReadNumBeforeLastWrite() const {
        return readNumBeforeLastWrite;
    }

    inline unsigned long getInvalidNumInOtherThreadByTrueCacheSharing() const {
        return invalidNumInOtherThreadByTrueCacheSharing;
    }

    inline unsigned long getInvalidNumInOtherThreadByFalseCacheSharing() const {
        return invalidNumInOtherThreadByFalseCacheSharing;
    }

    inline unsigned long getAccessNumWithOutCacheSharing() const {
        return getTotalRemoteAccess() - invalidNumInOtherThreadByTrueCacheSharing -
               invalidNumInOtherThreadByFalseCacheSharing;
    }

    inline unsigned long getDuplicateNum() const {
        if (this->allAccessNumInOtherThread < this->readNumBeforeLastWrite) {
            return 0;
        }
        return this->allAccessNumInOtherThread - this->readNumBeforeLastWrite;
    }

    inline bool isDuplicatable() {
        return getDuplicateNum() >= getTotalRemoteAccess() * DUPLICATE_DOMINATE_PERCENT;
    }

    inline bool isDominateByFalseSharing() {
        return getInvalidNumInOtherThreadByFalseCacheSharing() >=
               FALSE_SHARING_DOMINATE_PERCENT * getTotalRemoteAccess();
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
//        fprintf(file, "%sInvalidNumInMainThread:   %lu\n", prefix, this->getAllInvalidNumInMainThread());
//        fprintf(file, "%sInvalidNumInOtherThreads: %lu\n", prefix, this->getAllInvalidNumInOtherThreads());
//        fprintf(file, "%sAccessNumInMainThread:    %lu\n", prefix, this->getAllAccessNumInMainThread());
//        fprintf(file, "%sAccessNumInOtherThreads:  %lu\n", prefix, this->getAllAccessNumInOtherThread());

//        fprintf(file, "%sinvalidNumInOtherThreadByTrueCacheSharing:  %lu\n", prefix,
//                this->invalidNumInOtherThreadByTrueCacheSharing);
//        fprintf(file, "%sinvalidNumInOtherThreadByFalseCacheSharing:  %lu\n", prefix,
//                this->invalidNumInOtherThreadByFalseCacheSharing);
//        fprintf(file, "%sDuplicatable(Non-ContinualReadingNumber/ContinualReadingNumber):       %lu/%lu\n", prefix,
//                this->readNumBeforeLastWrite, this->continualReadNumAfterAWrite);
        fprintf(file, "%sPage score:               %f\n", prefix,
                Scores::getSeriousScore(getAccessNumWithOutCacheSharing(), totalRunningCycles));
        fprintf(file, "%sinvalidNumInOtherThreadByTrueCacheSharing score:  %f\n", prefix,
                Scores::getSeriousScore(this->invalidNumInOtherThreadByTrueCacheSharing, totalRunningCycles));
        fprintf(file, "%sinvalidNumInOtherThreadByFalseCacheSharing score:  %f\n", prefix,
                Scores::getSeriousScore(this->invalidNumInOtherThreadByFalseCacheSharing, totalRunningCycles));
        fprintf(file, "%sDuplicatable score:       %f\n", prefix,
                Scores::getSeriousScore(getDuplicateNum(), totalRunningCycles));
        fprintf(file, "%sShared page number:       %d\n", prefix, this->sharedPageNum);
        fprintf(file, "%sShared page detailed: ", prefix);
        if (this->detailPageSharingInfoPtr != NULL) {
            for (int i = 0; i < detailPageSharingInfoNum; i++) {
                fprintf(file, "%d, ", this->detailPageSharingInfoPtr[i]);
            }
        }
        fprintf(file, "\n");

//        for (int i = 0; i < topCacheLineDetailQueue.getSize(); i++) {
//            fprintf(file, "%sTop CacheLines %d:\n", prefix, i);
//            topCacheLineDetailQueue.getValues()[i]->dump(file, blackSpaceNum + 2, totalRunningCycles);
//        }
//        for (int i = 0; i < topPageDetailedAccessInfoQueue.getSize(); i++) {
//            fprintf(file, "%sTop Pages %d:\n", prefix, i);
//            topPageDetailedAccessInfoQueue.getValues()[i]->dump(file, blackSpaceNum + 2, totalRunningCycles);
//        }
    }
};

#endif //NUMAPERF_DIAGNOSEOBJINFO_H
