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
    }

    inline DiagnoseObjInfo *deepCopy() {
        DiagnoseObjInfo *buff = (DiagnoseObjInfo *) localMemoryPool.get();
        buff->objectInfo = this->objectInfo;
        buff->allInvalidNumInMainThread = this->allInvalidNumInMainThread;
        buff->allInvalidNumInOtherThreads = this->allInvalidNumInOtherThreads;
        buff->allAccessNumInMainThread = this->allAccessNumInMainThread;
        buff->allAccessNumInOtherThread = this->allAccessNumInOtherThread;
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

    inline unsigned long getSeriousScore() const {
        //todo
        return Scores::getScoreForCacheInvalid(allInvalidNumInMainThread, allInvalidNumInOtherThreads) +
               allAccessNumInOtherThread;
    }

    inline CacheLineDetailedInfo *insertCacheLineDetailedInfo(CacheLineDetailedInfo *cacheLineDetailedInfo) {
        this->allInvalidNumInMainThread += cacheLineDetailedInfo->getInvalidationNumberInFirstThread();
        this->allInvalidNumInOtherThreads += cacheLineDetailedInfo->getInvalidationNumberInOtherThreads();
        if (topCacheLineDetailQueue.mayCanInsert(cacheLineDetailedInfo->getSeriousScore())) {
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
        if (topPageDetailedAccessInfoQueue.mayCanInsert(pageDetailedAccessInfo->getSeriousScore())) {
            return topPageDetailedAccessInfoQueue.insert(pageDetailedAccessInfo);
//            PageDetailedAccessInfo *oldPageInfo = topPageDetailedAccessInfoQueue.insert(pageDetailedAccessInfo->copy());
//            if (NULL != oldPageInfo) {
//                PageDetailedAccessInfo::release(oldPageInfo);
//            }
        }
        return NULL;
    }

    inline bool operator<(const DiagnoseObjInfo &diagnoseObjInfo) {
        return this->getSeriousScore() < diagnoseObjInfo.getSeriousScore();
    }

    inline bool operator>(const DiagnoseObjInfo &diagnoseObjInfo) {
        return this->getSeriousScore() > diagnoseObjInfo.getSeriousScore();
    }

    inline bool operator<=(const DiagnoseObjInfo &diagnoseObjInfo) {
        return this->getSeriousScore() <= diagnoseObjInfo.getSeriousScore();
    }

    inline bool operator>=(const DiagnoseObjInfo &diagnoseObjInfo) {
        return this->getSeriousScore() >= diagnoseObjInfo.getSeriousScore();
    }

    inline bool operator==(const DiagnoseObjInfo &diagnoseObjInfo) {
        return this->getSeriousScore() == diagnoseObjInfo.getSeriousScore();
    }

    inline bool operator>=(unsigned long seriousScore) {
        return this->getSeriousScore() >= seriousScore;
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

    inline void dump(FILE *file, int blackSpaceNum) {
        char prefix[blackSpaceNum];
        for (int i = 0; i < blackSpaceNum; i++) {
            prefix[i] = ' ';
        }

        this->objectInfo->dump(file, blackSpaceNum);
        fprintf(file, "%sSeriousScore:             %lu\n", prefix, this->getSeriousScore());
        fprintf(file, "%sInvalidNumInMainThread:   %lu\n", prefix, this->getAllInvalidNumInMainThread());
        fprintf(file, "%sInvalidNumInOtherThreads: %lu\n", prefix, this->getAllInvalidNumInOtherThreads());
        fprintf(file, "%sAccessNumInMainThread:    %lu\n", prefix, this->getAllAccessNumInMainThread());
        fprintf(file, "%sAccessNumInOtherThreads:  %lu\n", prefix, this->getAllAccessNumInOtherThread());
        for (int i = 0; i < topCacheLineDetailQueue.getSize(); i++) {
            fprintf(file, "%sTop CacheLines %d:\n", prefix, i);
            topCacheLineDetailQueue.getValues()[i]->dump(file, blackSpaceNum + 2);
        }
        for (int i = 0; i < topPageDetailedAccessInfoQueue.getSize(); i++) {
            fprintf(file, "%sTop Pages %d:\n", prefix, i);
            topPageDetailedAccessInfoQueue.getValues()[i]->dump(file, blackSpaceNum + 2);
        }

    }
};

#endif //NUMAPERF_DIAGNOSEOBJINFO_H
