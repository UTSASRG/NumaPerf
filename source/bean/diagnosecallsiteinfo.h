#ifndef NUMAPERF_DIAGNOSECALLSITEINFO_H
#define NUMAPERF_DIAGNOSECALLSITEINFO_H

#include "../utils/collection/priorityqueue.h"
#include "diagnoseobjinfo.h"

class DiagnoseCallSiteInfo {
    unsigned long callsiteAddress;
    unsigned long allInvalidNumInMainThread;
    unsigned long allInvalidNumInOtherThreads;
    unsigned long allAccessNumInMainThread;
    unsigned long allAccessNumInOtherThread;
    PriorityQueue<DiagnoseObjInfo> topObjInfoQueue;

private:
    static MemoryPool localMemoryPool;

    DiagnoseCallSiteInfo(unsigned long callsiteAddress) : topObjInfoQueue(MAX_TOP_OBJ_INFO) {
        callsiteAddress = callsiteAddress;
        allInvalidNumInMainThread = 0;
        allInvalidNumInOtherThreads = 0;
        allAccessNumInMainThread = 0;
        allAccessNumInOtherThread = 0;
    }

public:
    inline static DiagnoseCallSiteInfo *createNewDiagnoseCallSiteInfo(unsigned long callsiteAddress) {
        void *buff = localMemoryPool.get();
        Logger::debug("new DiagnoseCallSiteInfo buff address:%lu \n", buff);
        DiagnoseCallSiteInfo *ret = new(buff) DiagnoseCallSiteInfo(callsiteAddress);
        return ret;
    }

    inline static void release(DiagnoseCallSiteInfo *buff) {
        for (int i = 0; i < buff->topObjInfoQueue.getSize(); i++) {
            DiagnoseObjInfo::release(buff->topObjInfoQueue.getValues()[i]);
        }
        localMemoryPool.release((void *) buff);
    }

    inline unsigned long getSeriousScore() const {
        //todo
        return Scores::getScoreForCacheInvalid(allInvalidNumInMainThread, allInvalidNumInOtherThreads);
    }

    inline bool insertCacheLineDetailedInfo(DiagnoseObjInfo *diagnoseObjInfo) {
        this->allInvalidNumInMainThread += diagnoseObjInfo->getAllInvalidNumInMainThread();
        this->allInvalidNumInOtherThreads += diagnoseObjInfo->getAllInvalidNumInOtherThreads();
        this->allAccessNumInMainThread += diagnoseObjInfo->getAllAccessNumInMainThread();
        this->allAccessNumInOtherThread += diagnoseObjInfo->getAllAccessNumInOtherThread();
        return topObjInfoQueue.insert(diagnoseObjInfo);
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

#endif //NUMAPERF_DIAGNOSECALLSITEINFO_H
