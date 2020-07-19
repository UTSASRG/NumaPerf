#ifndef NUMAPERF_DIAGNOSEOBJINFO_H
#define NUMAPERF_DIAGNOSEOBJINFO_H

#include "objectInfo.h"
#include "cachelinedetailedinfo.h"
#include "pagedetailAccessInfo.h"
#include "../xdefines.h"

class DiagnoseObjInfo {

    ObjectInfo *objectInfo;
    unsigned long allInvalidNumInMainThread;
    unsigned long allInvalidNumInOtherThreads;
    unsigned long allAccessNumInMainThread;
    unsigned long allAccessNumInOtherThread;
    CacheLineDetailedInfo *cacheLineDetailedInfo[MAX_TOP_CACHELINE_DETAIL_INFO];

private:
    static MemoryPool localMemoryPool;

    DiagnoseObjInfo() {
        memset(this, 0, sizeof(DiagnoseObjInfo));
    }

public:
    static DiagnoseObjInfo *createNewDiagnoseObjInfo() {
        void *buff = localMemoryPool.get();
        Logger::debug("new DiagnoseObjInfo buff address:%lu \n", buff);
        DiagnoseObjInfo *ret = new(buff) DiagnoseObjInfo();
        return ret;
    }

    static void release(DiagnoseObjInfo *buff) {
        for (int i = 0; i < MAX_TOP_CACHELINE_DETAIL_INFO; i++) {
            CacheLineDetailedInfo::release(buff->cacheLineDetailedInfo[i]);
        }
        localMemoryPool.release((void *) buff);
    }

    inline unsigned long getSeriousScore() const {
        return Scores::getScoreForCacheInvalid(allInvalidNumInMainThread, allInvalidNumInOtherThreads);
    }

    inline bool operator<(const DiagnoseObjInfo &diagnoseObjInfo) {
        return this->getSeriousScore() < diagnoseObjInfo.getSeriousScore();
    }

    bool operator>(const DiagnoseObjInfo &diagnoseObjInfo) {
        return this->getSeriousScore() > diagnoseObjInfo.getSeriousScore();
    }

    bool operator>=(const DiagnoseObjInfo &diagnoseObjInfo) {
        return this->getSeriousScore() >= diagnoseObjInfo.getSeriousScore();
    }

    bool operator==(const DiagnoseObjInfo &diagnoseObjInfo) {
        return this->getSeriousScore() == diagnoseObjInfo.getSeriousScore();
    }

    DiagnoseObjInfo *setObjectInfo(ObjectInfo *objectInfo) {
        DiagnoseObjInfo::objectInfo = objectInfo;
        return this;
    }

    DiagnoseObjInfo *setAllInvalidNumInMainThread(unsigned long allInvalidNumInMainThread) {
        DiagnoseObjInfo::allInvalidNumInMainThread = allInvalidNumInMainThread;
        return this;
    }

    DiagnoseObjInfo *setAllInvalidNumInOtherThreads(unsigned long allInvalidNumInOtherThreads) {
        DiagnoseObjInfo::allInvalidNumInOtherThreads = allInvalidNumInOtherThreads;
        return this;
    }

    DiagnoseObjInfo *setAllAccessNumInMainThread(unsigned long allAccessNumInMainThread) {
        DiagnoseObjInfo::allAccessNumInMainThread = allAccessNumInMainThread;
        return this;
    }

    DiagnoseObjInfo *setAllAccessNumInOtherThread(unsigned long allAccessNumInOtherThread) {
        DiagnoseObjInfo::allAccessNumInOtherThread = allAccessNumInOtherThread;
        return this;
    }

    DiagnoseObjInfo *setCacheLineDetailedInfo(CacheLineDetailedInfo **cacheLineDetailedInfo, int size) {
        assert(size <= MAX_TOP_CACHELINE_DETAIL_INFO);
        for (int i = 0; i < size; i++) {
            DiagnoseObjInfo::cacheLineDetailedInfo[i] = cacheLineDetailedInfo[i];
        }
        return this;
    }
};

#endif //NUMAPERF_DIAGNOSEOBJINFO_H
