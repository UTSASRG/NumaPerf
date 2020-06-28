#ifndef NUMAPERF_CACHELINEDETAILEDINFOFORPAGESHARING_H
#define NUMAPERF_CACHELINEDETAILEDINFOFORPAGESHARING_H

class CacheLineDetailedInfoForPageSharing {
    unsigned long accessNumberByFirstTouchThread;
    unsigned long accessNumberByOtherThread;

public:
    CacheLineDetailedInfoForPageSharing() {
        accessNumberByFirstTouchThread = 0;
        accessNumberByOtherThread = 0;
    }

    inline void recordAccess(unsigned long accessThreadId, unsigned long firstTouchThreadId) {
        if (accessThreadId == firstTouchThreadId) {
            accessNumberByFirstTouchThread++;
            return;
        }
        accessNumberByOtherThread++;
    }
};

#endif //NUMAPERF_CACHELINEDETAILEDINFOFORPAGESHARING_H