#ifndef NUMAPERF_DIAGNOSECALLSITEINFO_H
#define NUMAPERF_DIAGNOSECALLSITEINFO_H

#include "../utils/programs.h"
#include "../utils/collection/priorityqueue.h"
#include "diagnoseobjinfo.h"

class DiagnoseCallSiteInfo {
    unsigned long callStack[MAX_CALL_STACK_NUM];
    unsigned long allInvalidNumInMainThread;
    unsigned long allInvalidNumInOtherThreads;
    unsigned long allAccessNumInMainThread;
    unsigned long allAccessNumInOtherThread;
    PriorityQueue<DiagnoseObjInfo> topObjInfoQueue;

private:
    static MemoryPool localMemoryPool;

    DiagnoseCallSiteInfo() : topObjInfoQueue(MAX_TOP_OBJ_INFO) {
        for (int i = 0; i < MAX_CALL_STACK_NUM; i++) {
            callStack[i] = MAX_CALL_STACK_NUM;
        }
        allInvalidNumInMainThread = 0;
        allInvalidNumInOtherThreads = 0;
        allAccessNumInMainThread = 0;
        allAccessNumInOtherThread = 0;
    }

public:
    inline static DiagnoseCallSiteInfo *createNewDiagnoseCallSiteInfo() {
        void *buff = localMemoryPool.get();
        Logger::debug("new DiagnoseCallSiteInfo buff address:%lu \n", buff);
        DiagnoseCallSiteInfo *ret = new(buff) DiagnoseCallSiteInfo();
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

    inline void setCallStack(unsigned long *callStack, int startIndex, int length) {
        int num = length > MAX_CALL_STACK_NUM ? MAX_CALL_STACK_NUM : length;
        for (int i = 0; i < num; i++) {
            this->callStack[i] = callStack[i + startIndex];
        }
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
        for (int i = 0; i < MAX_CALL_STACK_NUM; i++) {
            if (this->callStack[i] == 0) {
                break;
            }
            Programs::printAddress2Line(this->callStack[i], file);
        }
        fprintf(file, "  SeriousScore:             %lu\n", this->getSeriousScore());
        fprintf(file, "  InvalidNumInMainThread:   %lu\n", this->getInvalidNumInMainThread());
        fprintf(file, "  InvalidNumInOtherThreads: %lu\n", this->getInvalidNumInOtherThread());
        fprintf(file, "  AccessNumInMainThread:    %lu\n", this->getAccessNumInMainThread());
        fprintf(file, "  AccessNumInOtherThreads:  %lu\n", this->getAccessNumInOtherThread());
        for (int i = 0; i < topObjInfoQueue.getSize(); i++) {
            fprintf(file, "  Top Object %d:\n", i);
            topObjInfoQueue.getValues()[i]->dump(file);
        }
    }

};

#endif //NUMAPERF_DIAGNOSECALLSITEINFO_H
