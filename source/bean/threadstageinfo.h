#ifndef NUMAPERF_THREADSTAGEINFO_H
#define NUMAPERF_THREADSTAGEINFO_H

#include <utils/real.h>
#include <cstring>
#include "threadbasedinfo.h"

class ThreadStageInfo {
    unsigned long threadCreateCallSite;
    long threadNumber;
    unsigned long long totalAliveTime;
    unsigned long long totalIdleTime;
private:
    ThreadStageInfo() {
    }

public:
    static ThreadStageInfo *createThreadStageInfo(unsigned long threadCreateCallSite) {
        void *mem = Real::malloc(sizeof(ThreadStageInfo));
        memset(mem, 0, sizeof(ThreadStageInfo));
        ThreadStageInfo *ret = (ThreadStageInfo *) mem;
        ret->threadCreateCallSite = threadCreateCallSite;
        return ret;
    }

    void recordThreadBasedInfo(ThreadBasedInfo *threadBasedInfo) {
        this->threadNumber++;
        this->totalAliveTime += threadBasedInfo->getTotalRunningTime();
        this->totalIdleTime += threadBasedInfo->getIdleTime();
    }

    float getUserUsage() {
        return (float) (this->totalAliveTime - this->totalIdleTime) / (float) (this->totalAliveTime);
    }

    unsigned long getThreadCreateCallSite() const {
        return threadCreateCallSite;
    }

    long getThreadNumber() const {
        return threadNumber;
    }

    unsigned long long int getTotalAliveTime() const {
        return totalAliveTime;
    }

    unsigned long long int getTotalIdleTime() const {
        return totalIdleTime;
    }
};

#endif //NUMAPERF_THREADSTAGEINFO_H
