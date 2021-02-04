#ifndef NUMAPERF_DIAGNOSECALLSITEINFO_H
#define NUMAPERF_DIAGNOSECALLSITEINFO_H

#include "../utils/programs.h"
#include "../utils/collection/priorityqueue.h"
#include "../xdefines.h"
#include "callstacks.h"
#include "diagnoseobjinfo.h"

class DiagnoseCallSiteInfo {
    CallStack callStack;
    unsigned long objNum;
    unsigned long allAccessNumInOtherThread;
    unsigned long allInvalidNumInOtherThreads;
    unsigned long readNumBeforeLastWrite;
    unsigned long invalidNumInOtherThreadByTrueCacheSharing;
    unsigned long invalidNumInOtherThreadByFalseCacheSharing;
    PriorityQueue<DiagnoseObjInfo> topObjInfoQueue;

private:
    static MemoryPool localMemoryPool;

    DiagnoseCallSiteInfo() : callStack(), topObjInfoQueue(MAX_TOP_OBJ_INFO) {
        objNum = 0;
        allInvalidNumInOtherThreads = 0;
        allAccessNumInOtherThread = 0;
        readNumBeforeLastWrite = 0;
        invalidNumInOtherThreadByTrueCacheSharing = 0;
        invalidNumInOtherThreadByFalseCacheSharing = 0;
    }

public:
    inline static DiagnoseCallSiteInfo *createNewDiagnoseCallSiteInfo() {
        void *buff = localMemoryPool.get();
//        Logger::debug("new DiagnoseCallSiteInfo buff address:%lu \n", buff);
        DiagnoseCallSiteInfo *ret = new(buff) DiagnoseCallSiteInfo();
        return ret;
    }

    inline static void release(DiagnoseCallSiteInfo *buff) {
        localMemoryPool.release((void *) buff);
    }

    inline unsigned long getTotalRemoteAccess() const {
        //todo
        return allAccessNumInOtherThread + allInvalidNumInOtherThreads;
    }

    inline unsigned long getInvalidNumInOtherThreadByFalseCacheSharing() const {
        return invalidNumInOtherThreadByFalseCacheSharing;
    }

    inline unsigned long getRemoteAccessWithoutSharing() const {
        return getTotalRemoteAccess() - invalidNumInOtherThreadByTrueCacheSharing -
               invalidNumInOtherThreadByFalseCacheSharing;
    }

    inline unsigned long getDuplicateNumber() const {
        if (this->allAccessNumInOtherThread < this->readNumBeforeLastWrite) {
            return 0;
        }
        return this->allAccessNumInOtherThread - this->readNumBeforeLastWrite;

    }

    inline void recordDiagnoseObjInfo(DiagnoseObjInfo *diagnoseObjInfo) {
        this->objNum++;
        // if a obj is newly allocated in a same callsite, we belive it also equals a writing operation
        this->readNumBeforeLastWrite = this->allAccessNumInOtherThread + diagnoseObjInfo->getReadNumBeforeLastWrite();
        this->allAccessNumInOtherThread += diagnoseObjInfo->getAllAccessNumInOtherThread();
        this->allInvalidNumInOtherThreads += diagnoseObjInfo->getAllInvalidNumInOtherThreads();
        this->invalidNumInOtherThreadByTrueCacheSharing += diagnoseObjInfo->getInvalidNumInOtherThreadByTrueCacheSharing();
        this->invalidNumInOtherThreadByFalseCacheSharing += diagnoseObjInfo->getInvalidNumInOtherThreadByFalseCacheSharing();
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

    inline unsigned long getInvalidNumInOtherThread() {
        return allInvalidNumInOtherThreads;
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

    inline double getPageSeriousScore(unsigned long totalRunningCycles) {
        return Scores::getSeriousScore(getRemoteAccessWithoutSharing(), totalRunningCycles);
    }

    inline double getTrueSharingSeriousScore(unsigned long totalRunningCycles) {
        return Scores::getSeriousScore(invalidNumInOtherThreadByTrueCacheSharing, totalRunningCycles) / CORE_NUMBER;
    }

    inline double getFalseSharingSeriousScore(unsigned long totalRunningCycles) {
        return Scores::getSeriousScore(invalidNumInOtherThreadByFalseCacheSharing, totalRunningCycles) / CORE_NUMBER;
    }

    inline double getDuplicateSeriousScore(unsigned long totalRunningCycles) {
        return Scores::getSeriousScore(getDuplicateNumber(), totalRunningCycles);
    }

    inline bool isDominateByFalseSharing() {
        return getInvalidNumInOtherThreadByFalseCacheSharing() >=
               FALSE_SHARING_DOMINATE_PERCENT * getTotalRemoteAccess();
    }

    inline void dump(FILE *file, unsigned long totalRunningCycles, int blackSpaceNum) {
        this->dump_call_stacks(file);
        char prefix[blackSpaceNum + 2];
        for (int i = 0; i < blackSpaceNum; i++) {
            prefix[i] = ' ';
            prefix[i + 1] = '\0';
        }
        fprintf(file, "%sSeriousScore:             %f\n", prefix, this->getSeriousScore(totalRunningCycles));
//        fprintf(file, "%sInvalidNumInMainThread:   %lu\n", prefix, this->getInvalidNumInMainThread());
//        fprintf(file, "%sInvalidNumInOtherThreads: %lu\n", prefix, this->getInvalidNumInOtherThread());
//        fprintf(file, "%sAccessNumInMainThread:    %lu\n", prefix, this->getAccessNumInMainThread());
//        fprintf(file, "%sAccessNumInOtherThreads:  %lu\n", prefix, this->getAccessNumInOtherThread());

//        fprintf(file, "%sinvalidNumInOtherThreadByTrueCacheSharing:  %lu\n", prefix,
//                this->invalidNumInOtherThreadByTrueCacheSharing);
//        fprintf(file, "%sinvalidNumInOtherThreadByFalseCacheSharing:  %lu\n", prefix,
//                this->invalidNumInOtherThreadByFalseCacheSharing);
//        fprintf(file, "%sDuplicatable(Non-ContinualReadingNumber/ContinualReadingNumber):       %lu/%lu\n", prefix,
//                this->readNumBeforeLastWrite, this->continualReadNumAfterAWrite);

//        fprintf(file, "%sAccessNumInOtherThreads score:  %f\n", prefix,
//                Scores::getSeriousScore(this->getAccessNumInOtherThread(), totalRunningCycles));
        fprintf(file, "%sPage score:               %f\n", prefix, this->getPageSeriousScore(totalRunningCycles));
        fprintf(file, "%sinvalidNumInOtherThreadByTrueCacheSharing score:  %f\n", prefix,
                getTrueSharingSeriousScore(totalRunningCycles));
        fprintf(file, "%sinvalidNumInOtherThreadByFalseCacheSharing score:  %f\n", prefix,
                this->getFalseSharingSeriousScore(totalRunningCycles));
        fprintf(file, "%sDuplicatable score:       %f\n", prefix,
                this->getDuplicateSeriousScore(totalRunningCycles));
        fprintf(file, "%sObjectNumber:             %lu\n", prefix, this->objNum);
        for (int i = 0; i < topObjInfoQueue.getSize(); i++) {
            fprintf(file, "%sTop Object %d:\n", prefix, i);
            topObjInfoQueue.getValues()[i]->dump(file, blackSpaceNum + 2, totalRunningCycles);
        }
    }

};

#endif //NUMAPERF_DIAGNOSECALLSITEINFO_H
