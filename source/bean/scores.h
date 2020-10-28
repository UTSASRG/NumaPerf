#ifndef NUMAPERF_SCORES_H
#define NUMAPERF_SCORES_H

class Scores {
public:

    inline static double getSeriousScore(unsigned long totalRemoteAccess, unsigned long totalRunningCycles) {
        return (double) totalRemoteAccess / (double) totalRunningCycles;
    }


};

#endif //NUMAPERF_SCORES_H
