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

    DiagnoseObjInfo(ObjectInfo *objectInfo) : topCacheLineDetailQueue(MAX_TOP_CACHELINE_DETAIL_INFO),
                                              topPageDetailedAccessInfoQueue(MAX_TOP_PAGE_DETAIL_INFO) {
        this->objectInfo = objectInfo;
        allInvalidNumInMainThread = 0;
        allInvalidNumInOtherThreads = 0;
        allAccessNumInMainThread = 0;
        allAccessNumInOtherThread = 0;
    }

public:
    inline static DiagnoseObjInfo *createNewDiagnoseObjInfo(ObjectInfo *objectInfo) {
        void *buff = localMemoryPool.get();
        Logger::debug("new DiagnoseObjInfo buff address:%lu \n", buff);
        DiagnoseObjInfo *ret = new(buff) DiagnoseObjInfo(objectInfo);
        return ret;
    }

    inline static void release(DiagnoseObjInfo *buff) {
        for (int i = 0; i < buff->topCacheLineDetailQueue.getSize(); i++) {
            if (buff->topCacheLineDetailQueue.getValues()[i]->isCoveredByObj(buff->objectInfo->getStartAddress(),
                                                                             buff->objectInfo->getSize())) {
                CacheLineDetailedInfo::release(buff->topCacheLineDetailQueue.getValues()[i]);
            }
        }
        for (int i = 0; i < buff->topPageDetailedAccessInfoQueue.getSize(); i++) {
            PageDetailedAccessInfo::release(buff->topPageDetailedAccessInfoQueue.getValues()[i]);
        }
        localMemoryPool.release((void *) buff);
    }

    inline unsigned long getSeriousScore() const {
        //todo
        return Scores::getScoreForCacheInvalid(allInvalidNumInMainThread, allInvalidNumInOtherThreads);
    }

    inline CacheLineDetailedInfo *insertCacheLineDetailedInfo(CacheLineDetailedInfo *cacheLineDetailedInfo) {
        this->allInvalidNumInMainThread += cacheLineDetailedInfo->getInvalidationNumberInFirstThread();
        this->allInvalidNumInOtherThreads += cacheLineDetailedInfo->getInvalidationNumberInOtherThreads();
        return topCacheLineDetailQueue.insert(cacheLineDetailedInfo);
    }

    inline PageDetailedAccessInfo *insertPageDetailedAccessInfo(PageDetailedAccessInfo *pageDetailedAccessInfo) {
        this->allAccessNumInMainThread += pageDetailedAccessInfo->getAccessNumberByFirstTouchThread(
                objectInfo->getStartAddress(), objectInfo->getSize());
        this->allAccessNumInOtherThread += pageDetailedAccessInfo->getAccessNumberByOtherTouchThread(
                objectInfo->getStartAddress(), objectInfo->getSize());
        return topPageDetailedAccessInfoQueue.insert(pageDetailedAccessInfo);
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

        fprintf(file, "%sObjectStartAddress:       %p,    size:%lu\n", prefix,
                (void *) (this->objectInfo->getStartAddress()), this->objectInfo->getSize());
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
