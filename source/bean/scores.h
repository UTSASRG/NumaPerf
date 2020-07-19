#ifndef NUMAPERF_SCORES_H
#define NUMAPERF_SCORES_H

class Scores {
public:
    static unsigned long
    getScoreForCacheInvalid(unsigned long invalidNumInMainThread, unsigned long invalidNumInOtherThreads) {
        return invalidNumInMainThread + 2 * invalidNumInOtherThreads;
    }

    static unsigned long
    getScoreForAccess(unsigned long accessNumInMainThread, unsigned long accessNumInOtherThread) {
        return accessNumInMainThread + 2 * accessNumInOtherThread;
    }


};

#endif //NUMAPERF_SCORES_H
