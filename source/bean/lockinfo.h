#ifndef NUMAPERF_LOCKINFO_H
#define NUMAPERF_LOCKINFO_H

class LockInfo {
    unsigned long threadsAcquire; // how many threads waiting this lock and including the thread holding this lock

public:
    LockInfo() {
        memset(this, 0, sizeof(LockInfo));
    }

    inline static LockInfo *createLockInfo() {
        void *mem = Real::malloc(sizeof(LockInfo));
        LockInfo *ret = new(mem)LockInfo();
        return ret;
    }

    inline static void release(LockInfo *lockInfo) {
        Real::free(lockInfo);
    }

    inline void acquireLock() {
        Automics::automicIncrease<unsigned long>(&threadsAcquire, 1, -1);
    }

    inline void releaseLock() {
        Automics::automicIncrease<unsigned long>(&threadsAcquire, -1, -1);
    }

    inline bool hasContention() {
        return threadsAcquire > 1;
    }

    inline unsigned long getThreadsAcquire() const {
        return threadsAcquire;
    }

};

#endif //NUMAPERF_LOCKINFO_H
