#ifndef NUMAPERF_SCORES_H
#define NUMAPERF_SCORES_H

#include "../xdefines.h"

class Scores {
public:

    inline static double getSeriousScore(unsigned long totalRemoteAccess, unsigned long totalRunningCycles) {
        return (double) totalRemoteAccess / (double) totalRunningCycles * CYCLES_PER_MS;
    }


};

#endif //NUMAPERF_SCORES_H
