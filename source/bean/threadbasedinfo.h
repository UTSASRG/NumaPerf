#ifndef NUMAPERF_THREADBASEDINFO_H
#define NUMAPERF_THREADBASEDINFO_H

#include <cstring>
#include "callstacks.h"

class ThreadBasedInfo {
    CallStack *threadCreateCallSiteStack;
    void *threadStartFunPtr;
    unsigned long long startTime;
    unsigned long long totalRunningTime;
    unsigned long long idleTime; // waiting lock,io(but we do not care io here)
    long nodeMigrationNum;
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

    inline void threadBasedAccess(unsigned long firstTouchThreadId) {
        threadBasedAccessNumber[firstTouchThreadId]++;
    }

    inline void nodeMigrate() {
        this->nodeMigrationNum++;
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

    inline unsigned long getTotalRunningTime() const {
        return totalRunningTime;
    }

    inline unsigned long long int getIdleTime() const {
        return idleTime;
    }

    inline long getNodeMigrationNum() const {
        return nodeMigrationNum;
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

    inline float getMigrationScore(unsigned long totalRunningCycle) {
        return this->nodeMigrationNum * getParallelPercent(totalRunningCycle);
    }

    inline float getParallelPercent(unsigned long totalRunningCycle) {
        return (float) (this->totalRunningTime - this->idleTime) / (float) totalRunningCycle;
    }
};

#endif //NUMAPERF_THREADBASEDINFO_H
