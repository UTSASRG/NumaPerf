#ifndef NUMAPERF_THREADBASEDINFO_H
#define NUMAPERF_THREADBASEDINFO_H

#include <cstring>

class ThreadBasedInfo {
    void *threadCreateCallSite;
    unsigned long totalRunningTime;
    unsigned long long idleTime; // waiting lock,io(but we do not care io here)
    long nodeMigrationNum;
    unsigned long threadBasedAccessNumber[MAX_THREAD_NUM];

private:

    ThreadBasedInfo() {
        memset(this, 0, sizeof(ThreadBasedInfo));
    }

public:

    inline static ThreadBasedInfo *createThreadBasedInfo(void *threadCreateCallSite) {
        void *mem = Real::malloc(sizeof(ThreadBasedInfo));
        ThreadBasedInfo *ret = new(mem)ThreadBasedInfo();
        ret->threadCreateCallSite = threadCreateCallSite;
        return ret;
    }

    inline static void release(ThreadBasedInfo *threadBasedInfo) {
        Real::free(threadBasedInfo);
    }

    inline void threadBasedAccess(unsigned long firstTouchThreadId) {
        threadBasedAccessNumber[firstTouchThreadId]++;
    }

    inline void setTotalRunningTime(unsigned long totalRunningTime) {
        ThreadBasedInfo::totalRunningTime = totalRunningTime;
    }

    inline void nodeMigrate() {
        this->nodeMigrationNum++;
    }

    inline void idle(unsigned long long newIdleTime) {
        this->idleTime += newIdleTime;
    }

    inline void *getThreadCreateCallSite() const {
        return threadCreateCallSite;
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

    inline const unsigned long *getThreadBasedAccessNumber() const {
        return threadBasedAccessNumber;
    }
};

#endif //NUMAPERF_THREADBASEDINFO_H
