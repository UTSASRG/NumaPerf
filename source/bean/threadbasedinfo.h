#ifndef NUMAPERF_THREADBASEDINFO_H
#define NUMAPERF_THREADBASEDINFO_H

#include <cstring>

class ThreadBasedInfo {
    void *threadCreateCallSite;
    unsigned long totalRunningTime;
    unsigned long long idleTime; // waiting lock,io(but we do not care io here)
    long nodeMigrationNum;
    unsigned long threadBasedAccessNumber[MAX_THREAD_NUM];

public:
    ThreadBasedInfo() {
        memset(this, 0, sizeof(ThreadBasedInfo));
    }

    static ThreadBasedInfo *createThreadBasedInfo(void *threadCreateCallSite) {
        void *mem = Real::malloc(sizeof(ThreadBasedInfo));
        ThreadBasedInfo *ret = new(mem)ThreadBasedInfo();
        ret->threadCreateCallSite = threadCreateCallSite;
        return ret;
    }

    static void release(ThreadBasedInfo *threadBasedInfo) {
        Real::free(threadBasedInfo);
    }

    void setTotalRunningTime(unsigned long totalRunningTime) {
        ThreadBasedInfo::totalRunningTime = totalRunningTime;
    }

    void nodeMigrate() {
        this->nodeMigrationNum++;
    }

    void idle(unsigned long long newIdleTime) {
        this->idleTime += newIdleTime;
    }
};

#endif //NUMAPERF_THREADBASEDINFO_H
