#ifndef NUMAPERF_THREADBASEDINFO_H
#define NUMAPERF_THREADBASEDINFO_H

#include <cstring>
#include "callstacks.h"

class ThreadBasedInfo {
    CallStack *threadCreateCallSiteStack;
    void *threadStartFunPtr;
    unsigned long long startTime;
    unsigned int currentNumaNodeIndex;
//    unsigned long long openmpLastJoinStartCycle = 0;
    unsigned long long totalRunningTime;
    unsigned long long idleTime; // waiting lock,io(but we do not care io here)
    long mutexNodeMigrationNum;
    long conditionNodeMigrationNum;
    long barrierNodeMigrationNum;
    long mutexAcquireNum;
    long mutexContentionNum;
    long conditionContentionNum;
    long barrierContentionNum;
    unsigned long threadBasedAccessNumber[MAX_THREAD_NUM];

private:

    ThreadBasedInfo() {
        memset(this, 0, sizeof(ThreadBasedInfo));
    }

public:

    inline static ThreadBasedInfo *createThreadBasedInfo(CallStack *threadCreateCallSite, void *threadStartFunPtr) {
        void *mem = Real::malloc(sizeof(ThreadBasedInfo));
        ThreadBasedInfo *ret = new(mem)ThreadBasedInfo();
        ret->threadCreateCallSiteStack = threadCreateCallSite;
        ret->threadStartFunPtr = threadStartFunPtr;
        return ret;
    }

    inline static void release(ThreadBasedInfo *threadBasedInfo) {
        Real::free(threadBasedInfo);
    }

    inline void start() {
        this->startTime = Timer::getCurrentCycle();
    }

    inline void end() {
        this->totalRunningTime = Timer::getCurrentCycle() - this->startTime;
    }

    unsigned long long getStartTime() {
        return this->startTime;
    }

    inline void threadBasedAccess(unsigned long firstTouchThreadId) {
        threadBasedAccessNumber[firstTouchThreadId]++;
    }

    inline void mutexNodeMigrate() {
        this->mutexNodeMigrationNum++;
    }

    inline void conditionNodeMigrate() {
        this->conditionNodeMigrationNum++;
    }

    inline void barrierNodeMigrate() {
        this->barrierNodeMigrationNum++;
    }

    inline void mutexAcquire() {
        this->mutexAcquireNum++;
    }

    inline void mutexLockContention() {
        this->mutexContentionNum++;
    }

    inline void barrierContention() {
        this->barrierContentionNum++;
    }

    inline void conditionContention() {
        this->conditionContentionNum++;
    }

    inline void idle(unsigned long long newIdleTime) {
        this->idleTime += newIdleTime;
    }

    CallStack *getThreadCreateCallSiteStack() const {
        return threadCreateCallSiteStack;
    }

    void *getThreadStartFunPtr() const {
        return threadStartFunPtr;
    }

    inline long getMutexAcquire() {
        return mutexAcquireNum;
    }

    unsigned int getCurrentNumaNodeIndex() {
        return currentNumaNodeIndex;
    }

    void setCurrentNumaNodeIndex(unsigned int nodeIndex) {
        currentNumaNodeIndex = nodeIndex;
    }

//    unsigned long long getOpenmpLastJoinStartCycle() {
//        return openmpLastJoinStartCycle;
//    }
//
//    void setOpenmpLastJoinStartCycle(unsigned long long openmpLastJoinStartCycle) {
//        this->openmpLastJoinStartCycle = openmpLastJoinStartCycle;
//    }

    inline unsigned long getTotalRunningTime() const {
        return totalRunningTime;
    }

    inline unsigned long long getIdleTime() const {
        return idleTime;
    }

    inline long getNodeMigrationNum() const {
        return mutexNodeMigrationNum + conditionNodeMigrationNum + barrierNodeMigrationNum;
    }

    inline long getMutexNodeMigrationNum() const {
        return mutexNodeMigrationNum;
    }

    inline long getconditionNodeMigrationNum() const {
        return conditionNodeMigrationNum;
    }

    inline long getBarrierNodeMigrationNum() const {
        return barrierNodeMigrationNum;
    }

    inline long getLockContentionNum() const {
        return mutexContentionNum + conditionContentionNum + barrierContentionNum;
    }

    inline long getMutexContentionNum() const {
        return mutexContentionNum;
    }

    inline long getConditionContentionNum() const {
        return conditionContentionNum;
    }

    inline long getBarrierContentionNum() const {
        return barrierContentionNum;
    }

    inline void setThreadBasedAccessNumber(int threadIndex, unsigned long value) {
        threadBasedAccessNumber[threadIndex] = value;
    }

    inline void addThreadBasedAccessNumber(int threadIndex, unsigned long value) {
        threadBasedAccessNumber[threadIndex] += value;
    }

    inline const unsigned long *getThreadBasedAccessNumber() {
        return threadBasedAccessNumber;
    }

    inline float getMigrationScore(unsigned long long totalRunningCycle) {
        return this->getNodeMigrationNum() * getParallelPercent(totalRunningCycle);
    }

    inline float getLockContentionScore(unsigned long long totalRunningCycle, unsigned long long totalRunningMs) {
        return this->getLockContentionNum() * getParallelPercent(totalRunningCycle) / totalRunningMs;
    }

    inline float getParallelPercent(unsigned long long totalRunningCycle) {
        if ((this->totalRunningTime - this->idleTime) > totalRunningCycle) {
            return 1;
        }
        return (float) (this->totalRunningTime - this->idleTime) / (float) totalRunningCycle;
    }

    inline bool isEnd() {
        return this->totalRunningTime != 0;
    }
};

#endif //NUMAPERF_THREADBASEDINFO_H
