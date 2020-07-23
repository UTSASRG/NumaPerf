#ifndef NUMAPERF_DIAGNOSECALLSITEINFO_H
#define NUMAPERF_DIAGNOSECALLSITEINFO_H

#include <utils/programs.h>
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
        this->callsiteAddress = callsiteAddress;
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

    inline bool insertDiagnoseObjInfo(DiagnoseObjInfo *diagnoseObjInfo, bool withLock = false) {
        this->allInvalidNumInMainThread += diagnoseObjInfo->getAllInvalidNumInMainThread();
        this->allInvalidNumInOtherThreads += diagnoseObjInfo->getAllInvalidNumInOtherThreads();
        this->allAccessNumInMainThread += diagnoseObjInfo->getAllAccessNumInMainThread();
        this->allAccessNumInOtherThread += diagnoseObjInfo->getAllAccessNumInOtherThread();
        return topObjInfoQueue.insert(diagnoseObjInfo, withLock);
    }

    inline bool operator<(const DiagnoseCallSiteInfo &diagnoseCallSiteInfo) {
        return this->getSeriousScore() < diagnoseCallSiteInfo.getSeriousScore();
    }

    inline bool operator>(const DiagnoseCallSiteInfo &diagnoseCallSiteInfo) {
        return this->getSeriousScore() > diagnoseCallSiteInfo.getSeriousScore();
    }

    inline bool operator<=(const DiagnoseCallSiteInfo &diagnoseCallSiteInfo) {
        return this->getSeriousScore() <= diagnoseCallSiteInfo.getSeriousScore();
    }

    inline bool operator>=(const DiagnoseCallSiteInfo &diagnoseCallSiteInfo) {
        return this->getSeriousScore() >= diagnoseCallSiteInfo.getSeriousScore();
    }

    inline bool operator==(const DiagnoseCallSiteInfo &diagnoseCallSiteInfo) {
        return this->getSeriousScore() == diagnoseCallSiteInfo.getSeriousScore();
    }

    inline unsigned long getCallSiteAddress() {
        return callsiteAddress;
    }

    inline unsigned long getInvalidNumInMainThread() {
        return allInvalidNumInMainThread;
    }

    inline unsigned long getInvalidNumInOtherThread() {
        return allInvalidNumInOtherThreads;
    }

    inline unsigned long getAccessNumInMainThread() {
        return allAccessNumInMainThread;
    }

    inline unsigned long getAccessNumInOtherThread() {
        return allAccessNumInOtherThread;
    }

    inline void dump(FILE *file) {
        Programs::printAddress2Line(this->getCallSiteAddress(), file);
        fprintf(file, "        SeriousScore:   %lu\n", this->getSeriousScore());
        fprintf(file, "        InvalidNumInMainThread:   %lu\n", this->getInvalidNumInMainThread());
        fprintf(file, "        InvalidNumInOtherThreads: %lu\n", this->getInvalidNumInOtherThread());
        fprintf(file, "        AccessNumInMainThread:    %lu\n", this->getAccessNumInMainThread());
        fprintf(file, "        AccessNumInOtherThreads:  %lu\n", this->getAccessNumInOtherThread());
        for (int i = 0; i < topObjInfoQueue.getSize(); i++) {

        }
    }

};

#endif //NUMAPERF_DIAGNOSECALLSITEINFO_H
