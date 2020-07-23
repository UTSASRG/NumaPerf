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

    inline bool insertCacheLineDetailedInfo(CacheLineDetailedInfo *cacheLineDetailedInfo) {
        this->allInvalidNumInMainThread += cacheLineDetailedInfo->getInvalidationNumberInFirstThread();
        this->allInvalidNumInOtherThreads += cacheLineDetailedInfo->getInvalidationNumberInOtherThreads();
        return topCacheLineDetailQueue.insert(cacheLineDetailedInfo);
    }

    inline bool insertPageDetailedAccessInfo(PageDetailedAccessInfo *pageDetailedAccessInfo) {
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

    inline void dump(FILE *file) {
        fprintf(file, "    ObjectStartAddress:       %p,    size:%lu\n",
                (void *) (this->objectInfo->getStartAddress()), this->objectInfo->getSize());
        fprintf(file, "    SeriousScore:             %lu\n", this->getSeriousScore());
        fprintf(file, "    InvalidNumInMainThread:   %lu\n", this->getAllInvalidNumInMainThread());
        fprintf(file, "    InvalidNumInOtherThreads: %lu\n", this->getAllInvalidNumInOtherThreads());
        fprintf(file, "    AccessNumInMainThread:    %lu\n", this->getAllAccessNumInMainThread());
        fprintf(file, "    AccessNumInOtherThreads:  %lu\n", this->getAllAccessNumInOtherThread());
        for (int i = 0; i < topCacheLineDetailQueue.getSize(); i++) {
            fprintf(file, "      Top CacheLines %d:\n", i);
            topCacheLineDetailQueue.getValues()[i]->dump(file);
        }
        for (int i = 0; i < topPageDetailedAccessInfoQueue.getSize(); i++) {
            fprintf(file, "      Top Pages %d:\n", i);
            topPageDetailedAccessInfoQueue.getValues()[i]->dump(file);
        }

    }
};

#endif //NUMAPERF_DIAGNOSEOBJINFO_H
