#ifndef NUMAPERF_THREADSTAGEINFO_H
#define NUMAPERF_THREADSTAGEINFO_H

#include "../utils/real.h"
#include <cstring>
#include "threadbasedinfo.h"

class ThreadStageInfo {
    CallStack *threadCreateCallSite;
    long threadNumber;
    unsigned long long totalMemoryOverheads;
    unsigned long long totalAliveTime;
    unsigned long long totalIdleTime;
private:
    ThreadStageInfo() {
    }

public:
    static ThreadStageInfo *createThreadStageInfo(CallStack *threadCreateCallSite) {
        void *mem = Real::malloc(sizeof(ThreadStageInfo));
        memset(mem, 0, sizeof(ThreadStageInfo));
        ThreadStageInfo *ret = (ThreadStageInfo *) mem;
        ret->threadCreateCallSite = threadCreateCallSite;
        return ret;
    }

    void
    recordThreadBasedInfo(ThreadBasedInfo *threadBasedInfo, unsigned long currentThreadIndex,
                          unsigned long maxThreadIndex) {
        this->threadNumber++;
        this->totalAliveTime += threadBasedInfo->getTotalRunningTime();
        this->totalIdleTime += threadBasedInfo->getIdleTime();
        for (unsigned long index = 0; index <= maxThreadIndex; index++) {
            if (currentThreadIndex == index) {
                this->totalMemoryOverheads += threadBasedInfo->getThreadBasedAccessNumber()[index];
                continue;
            }
            this->totalMemoryOverheads += 2 * (threadBasedInfo->getThreadBasedAccessNumber()[index]);
        }
    }

    float getUserUsage() {
        return (float) (this->totalAliveTime - this->totalIdleTime) / (float) (this->totalAliveTime);
    }

    long getRecommendThreadNum() {
        if (this->threadNumber == 1) {
            return 1;
        }
        if (this->getUserUsage() > THREAD_FULL_USAGE) {
            return this->threadNumber;
        }
        long ret = this->getUserUsage() * this->threadNumber;
        if (ret < threadNumber) {
            ret++;
        }
        return ret;
    }

    CallStack *getThreadCreateCallSite() const {
        return threadCreateCallSite;
    }

    long getThreadNumber() const {
        return threadNumber;
    }

    unsigned long long int getTotalAliveTime() const {
        return totalAliveTime;
    }

    unsigned long long getTotalMemoryOverheads() const {
        return totalMemoryOverheads;
    }

    unsigned long long int getTotalIdleTime() const {
        return totalIdleTime;
    }
};

#endif //NUMAPERF_THREADSTAGEINFO_H
