#ifndef NUMAPERF_NUMAS_H
#define NUMAPERF_NUMAS_H

#include <sys/sysinfo.h>

class Numas {

private:
    static int TOTAL_PROCESSOR;
    static int PROCESSORS_PER_NODE;

public:
    static inline int getTotalProcessorNum() {
        return TOTAL_PROCESSOR;
    }

    static inline int getNodeOfCpu(int cpuNum) {
#ifdef CPU_CLOSE
        return cpuNum / PROCESSORS_PER_NODE;
#endif

#ifdef CPU_INTERLEAVED
        return cpuNum % NUMA_NODES;
#endif
    }
};

int  Numas::TOTAL_PROCESSOR = get_nprocs();
int  Numas::PROCESSORS_PER_NODE = TOTAL_PROCESSOR / NUMA_NODES;

#endif //NUMAPERF_NUMAS_H
