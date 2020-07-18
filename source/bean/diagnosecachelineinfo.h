#ifndef NUMAPERF_DIAGNOSECACHELINEINFO_H
#define NUMAPERF_DIAGNOSECACHELINEINFO_H

class DiagnoseCacheLineInfo {
    unsigned long startAddress;
    unsigned long invalidationNumberInFirstThread;
    unsigned long invalidationNumberInOtherThreads;
    bool containFalseSharing;
};

#endif //NUMAPERF_DIAGNOSECACHELINEINFO_H
