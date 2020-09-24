#ifndef NUMAPERF_DIAGNOSECALLSITEINFO_H
#define NUMAPERF_DIAGNOSECALLSITEINFO_H

#include "../utils/programs.h"
#include "../utils/collection/priorityqueue.h"
#include "diagnoseobjinfo.h"
#include "../xdefines.h"

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

    inline unsigned long getSeriousScore() const {
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
        return topObjInfoQueue.mayCanInsert(diagnoseObjInfo->getSeriousScore());
    }

    inline DiagnoseObjInfo *insertToTopObjQueue(DiagnoseObjInfo *diagnoseObjInfo, bool withLock = true) {
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
            this->callStack[i] = callStack[i + startIndex] - 1;
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

    inline void dump_call_stacks(FILE *file) {
        for (int i = 0; i < MAX_CALL_STACK_NUM; i++) {
            if (this->callStack[i] == 0) {
                break;
            }
            Programs::printAddress2Line(this->callStack[i], file);
        }
    }

    inline void dump(FILE *file, unsigned long totalRunningCycles, int blackSpaceNum) {
        this->dump_call_stacks(file);
        char prefix[blackSpaceNum];
        for (int i = 0; i < blackSpaceNum; i++) {
            prefix[i] = ' ';
        }
        fprintf(file, "%sSeriousScore:             %f\n", prefix,
                2 * (double) (this->getSeriousScore()) / ((double) totalRunningCycles / AVERAGE_CYCLES_PERINSTRUCTION));
        fprintf(file, "%sInvalidNumInMainThread:   %lu\n", prefix, this->getInvalidNumInMainThread());
        fprintf(file, "%sInvalidNumInOtherThreads: %lu\n", prefix, this->getInvalidNumInOtherThread());
        fprintf(file, "%sAccessNumInMainThread:    %lu\n", prefix, this->getAccessNumInMainThread());
        fprintf(file, "%sAccessNumInOtherThreads:  %lu\n", prefix, this->getAccessNumInOtherThread());
        for (int i = 0; i < topObjInfoQueue.getSize(); i++) {
            fprintf(file, "%sTop Object %d:\n", prefix, i);
            topObjInfoQueue.getValues()[i]->dump(file, blackSpaceNum + 2);
        }
    }

};

#endif //NUMAPERF_DIAGNOSECALLSITEINFO_H
