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

private:
    static MemoryPool localMemoryPool;

    DiagnoseObjInfo() : topCacheLineDetailQueue(MAX_TOP_CACHELINE_DETAIL_INFO) {
        objectInfo = NULL;
        allInvalidNumInMainThread = 0;
        allInvalidNumInOtherThreads = 0;
        allAccessNumInMainThread = 0;
        allAccessNumInOtherThread = 0;
    }

public:
    inline static DiagnoseObjInfo *createNewDiagnoseObjInfo() {
        void *buff = localMemoryPool.get();
        Logger::debug("new DiagnoseObjInfo buff address:%lu \n", buff);
        DiagnoseObjInfo *ret = new(buff) DiagnoseObjInfo();
        return ret;
    }

    inline static void release(DiagnoseObjInfo *buff) {
        for (int i = 0; i < buff->topCacheLineDetailQueue.getSize(); i++) {
            CacheLineDetailedInfo::release(buff->topCacheLineDetailQueue.getValues()[i]);
        }
        localMemoryPool.release((void *) buff);
    }

    inline unsigned long getSeriousScore() const {
        return Scores::getScoreForCacheInvalid(allInvalidNumInMainThread, allInvalidNumInOtherThreads);
    }

    inline bool insertCacheLineDetailedInfo(CacheLineDetailedInfo *cacheLineDetailedInfo) {
        this->allInvalidNumInMainThread += cacheLineDetailedInfo->getInvalidationNumberInFirstThread();
        this->allInvalidNumInOtherThreads += cacheLineDetailedInfo->getInvalidationNumberInOtherThreads();
        return topCacheLineDetailQueue.insert(cacheLineDetailedInfo);
    }

    inline bool operator<(const DiagnoseObjInfo &diagnoseObjInfo) {
        return this->getSeriousScore() < diagnoseObjInfo.getSeriousScore();
    }

    inline bool operator>(const DiagnoseObjInfo &diagnoseObjInfo) {
        return this->getSeriousScore() > diagnoseObjInfo.getSeriousScore();
    }

    inline bool operator>=(const DiagnoseObjInfo &diagnoseObjInfo) {
        return this->getSeriousScore() >= diagnoseObjInfo.getSeriousScore();
    }

    inline bool operator==(const DiagnoseObjInfo &diagnoseObjInfo) {
        return this->getSeriousScore() == diagnoseObjInfo.getSeriousScore();
    }
};

#endif //NUMAPERF_DIAGNOSEOBJINFO_H
