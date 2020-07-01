#ifndef NUMAPERF_CACHELINEDETAILEDINFOFORPAGESHARING_H
#define NUMAPERF_CACHELINEDETAILEDINFOFORPAGESHARING_H

class CacheLineDetailedInfoForPageSharing {
    unsigned long accessNumberByFirstTouchThread;
    unsigned long accessNumberByOtherThread;

private:
    static MemoryPool localMemoryPool;

    CacheLineDetailedInfoForPageSharing() {
        accessNumberByFirstTouchThread = 0;
        accessNumberByOtherThread = 0;
    }

public:

    static CacheLineDetailedInfoForPageSharing *createNewCacheLineDetailedInfoForPageSharing() {
        void *buff = localMemoryPool.get();
        Logger::debug("new CacheLineDetailedInfoForPageSharing buff address:%lu \n", buff);
        CacheLineDetailedInfoForPageSharing *ret = new(buff) CacheLineDetailedInfoForPageSharing();
        return ret;
    }

    static void release(CacheLineDetailedInfoForPageSharing *buff) {
        localMemoryPool.release((void *) buff);
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