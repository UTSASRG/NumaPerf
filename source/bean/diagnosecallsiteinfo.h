#ifndef NUMAPERF_DIAGNOSECALLSITEINFO_H
#define NUMAPERF_DIAGNOSECALLSITEINFO_H

#include "../utils/programs.h"
#include "../utils/collection/priorityqueue.h"
#include "diagnoseobjinfo.h"
#include "../xdefines.h"
#include "callstacks.h"

class DiagnoseCallSiteInfo {
    CallStack callStack;
    unsigned long allInvalidNumInMainThread;
    unsigned long allInvalidNumInOtherThreads;
    unsigned long allAccessNumInMainThread;
    unsigned long allAccessNumInOtherThread;
    PriorityQueue<DiagnoseObjInfo> topObjInfoQueue;

private:
    static MemoryPool localMemoryPool;

    DiagnoseCallSiteInfo() : callStack(), topObjInfoQueue(MAX_TOP_OBJ_INFO) {
        allInvalidNumInMainThread = 0;
        allInvalidNumInOtherThreads = 0;
        allAccessNumInMainThread = 0;
        allAccessNumInOtherThread = 0;
    }

public:
    inline static DiagnoseCallSiteInfo *createNewDiagnoseCallSiteInfo() {
        void *buff = localMemoryPool.get();
//        Logger::debug("new DiagnoseCallSiteInfo buff address:%lu \n", buff);
        DiagnoseCallSiteInfo *ret = new(buff) DiagnoseCallSiteInfo();
        return ret;
    }

    inline static void release(DiagnoseCallSiteInfo *buff) {
        for (int i = 0; i < buff->topObjInfoQueue.getSize(); i++) {
            DiagnoseObjInfo::release(buff->topObjInfoQueue.getValues()[i]);
        }
        localMemoryPool.release((void *) buff);
    }

    inline unsigned long getTotalRemoteAccess() const {
        //todo
        return allAccessNumInOtherThread + allInvalidNumInOtherThreads;
    }

    inline void recordDiagnoseObjInfo(DiagnoseObjInfo *diagnoseObjInfo) {
        this->allInvalidNumInMainThread += diagnoseObjInfo->getAllInvalidNumInMainThread();
        this->allInvalidNumInOtherThreads += diagnoseObjInfo->getAllInvalidNumInOtherThreads();
        this->allAccessNumInMainThread += diagnoseObjInfo->getAllAccessNumInMainThread();
        this->allAccessNumInOtherThread += diagnoseObjInfo->getAllAccessNumInOtherThread();
    }

    inline bool mayCanInsertToTopObjQueue(DiagnoseObjInfo *diagnoseObjInfo) {
        return topObjInfoQueue.mayCanInsert(diagnoseObjInfo->getTotalRemoteAccess());
    }

    inline DiagnoseObjInfo *insertToTopObjQueue(DiagnoseObjInfo *diagnoseObjInfo, bool withLock = true) {
        return topObjInfoQueue.insert(diagnoseObjInfo, withLock);
    }

    inline bool operator<(const DiagnoseCallSiteInfo &diagnoseCallSiteInfo) {
        return this->getTotalRemoteAccess() < diagnoseCallSiteInfo.getTotalRemoteAccess();
    }

    inline bool operator>(const DiagnoseCallSiteInfo &diagnoseCallSiteInfo) {
        return this->getTotalRemoteAccess() > diagnoseCallSiteInfo.getTotalRemoteAccess();
    }

    inline bool operator<=(const DiagnoseCallSiteInfo &diagnoseCallSiteInfo) {
        return this->getTotalRemoteAccess() <= diagnoseCallSiteInfo.getTotalRemoteAccess();
    }

    inline bool operator>=(const DiagnoseCallSiteInfo &diagnoseCallSiteInfo) {
        return this->getTotalRemoteAccess() >= diagnoseCallSiteInfo.getTotalRemoteAccess();
    }

    inline bool operator==(const DiagnoseCallSiteInfo &diagnoseCallSiteInfo) {
        return this->getTotalRemoteAccess() == diagnoseCallSiteInfo.getTotalRemoteAccess();
    }

    CallStack *getCallStack() {
        return &(this->callStack);
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

    inline void dump_call_stacks(FILE *file) {
        this->callStack.printFrom(2, file);
    }

    inline double getSeriousScore(unsigned long totalRunningCycles) {
        return Scores::getSeriousScore(getTotalRemoteAccess(), totalRunningCycles);
    }

    inline void dump(FILE *file, unsigned long totalRunningCycles, int blackSpaceNum) {
        this->dump_call_stacks(file);
        char prefix[blackSpaceNum + 2];
        for (int i = 0; i < blackSpaceNum; i++) {
            prefix[i] = ' ';
            prefix[i + 1] = '\0';
        }
        fprintf(file, "%sSeriousScore:             %f\n", prefix, this->getSeriousScore(totalRunningCycles));
        fprintf(file, "%sInvalidNumInMainThread:   %lu\n", prefix, this->getInvalidNumInMainThread());
        fprintf(file, "%sInvalidNumInOtherThreads: %lu\n", prefix, this->getInvalidNumInOtherThread());
        fprintf(file, "%sAccessNumInMainThread:    %lu\n", prefix, this->getAccessNumInMainThread());
        fprintf(file, "%sAccessNumInOtherThreads:  %lu\n", prefix, this->getAccessNumInOtherThread());
        for (int i = 0; i < topObjInfoQueue.getSize(); i++) {
            fprintf(file, "%sTop Object %d:\n", prefix, i);
            topObjInfoQueue.getValues()[i]->dump(file, blackSpaceNum + 2, totalRunningCycles);
        }
    }

};

#endif //NUMAPERF_DIAGNOSECALLSITEINFO_H
