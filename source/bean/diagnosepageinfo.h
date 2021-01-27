#ifndef NUMAPERF_DIAGNOSEPAGEINFO_H
#define NUMAPERF_DIAGNOSEPAGEINFO_H

#include "objectInfo.h"
#include "diagnosecallsiteinfo.h"
#if 0
class DiagnosePageInfo {
private:
//    ObjectInfo *objectInfo;
//    DiagnoseCallSiteInfo *diagnoseCallSiteInfo;
    unsigned long pageStartAddress;
    int minThreadId;
    int maxThreadId;
    unsigned long remoteMemAccessNum;
    unsigned long remoteInvalidationNum;    // remoteMemAccessNum + remoteInvalidationNum is the final remote main memory access, to quantify the serious the NUMA issue
    unsigned long readNumBeforeLastWrite;   // remoteMemAccessNum - readNumBeforeLastWrite is basically the duplicated reading

    unsigned long invalidationByTrueSharing;  // to identify true sharing and false sharing issues in this page
    unsigned long invalidationByFalseSharing;
    PriorityQueue<CacheLineDetailedInfo> topCacheLineDetailQueue;

    static MemoryPool localMemoryPool;

    void resetMinMaxThreadId() {
        minThreadId = MAX_THREAD_NUM + 1;
        maxThreadId = -1;
    }

public:


    DiagnosePageInfo(unsigned long pageStartAddress) : topCacheLineDetailQueue(MAX_TOP_CACHELINE_DETAIL_INFO) {
        this->pageStartAddress = pageStartAddress;
        resetMinMaxThreadId();
        this->remoteMemAccessNum = 0;
        this->remoteInvalidationNum = 0;
        this->readNumBeforeLastWrite = 0;
        this->invalidationByTrueSharing = 0;
        this->invalidationByFalseSharing = 0;
    }

    inline static DiagnosePageInfo *createDiagnosePageInfo(unsigned long pageStartAddress) {
        void *buff = localMemoryPool.get();
//        Logger::debug("new DiagnosePageInfo buff address:%lu \n", buff);
        DiagnosePageInfo *ret = new(buff) DiagnosePageInfo(pageStartAddress);
        return ret;
    }

//    inline static void releaseOnlyDiagnosePageInfo(DiagnosePageInfo *buff) {
//        localMemoryPool.release((void *) buff);
//    }

    inline static void releaseAll(DiagnosePageInfo *buff) {
        for (int i = 0; i < buff->topCacheLineDetailQueue.getSize(); i++) {
            CacheLineDetailedInfo::release(buff->topCacheLineDetailQueue.getValues()[i]);
        }
        localMemoryPool.release((void *) buff);
    }

    void recordPageInfo(PageDetailedAccessInfo *pageDetailedAccessInfo, unsigned long objAddress,
                        unsigned long objSize) {
        this->pageStartAddress = pageDetailedAccessInfo->getStartAddress();
        this->minThreadId = pageDetailedAccessInfo->getMinThreadId();
        this->maxThreadId = pageDetailedAccessInfo->getMaxThreadId();
        bool wholePageCoveredByObj = pageDetailedAccessInfo->isCoveredByObj(objAddress, objSize);
        if (wholePageCoveredByObj) {
            this->remoteMemAccessNum = pageDetailedAccessInfo->getAccessNumberByOtherTouchThread(0, 0);
        } else {
            this->remoteMemAccessNum = pageDetailedAccessInfo->getAccessNumberByOtherTouchThread(
                    objAddress, objSize);
        }
    }

    void recordCacheInfo(CacheLineDetailedInfo *cacheLineDetailedInfo) {
        this->remoteInvalidationNum += cacheLineDetailedInfo->getInvalidationNumberInOtherThreads();
        this->readNumBeforeLastWrite += cacheLineDetailedInfo->getReadNumBeforeLastWrite();
        int cacheSharingType = cacheLineDetailedInfo->getSharingType();
        if (cacheSharingType == TRUE_SHARING) {
            this->invalidationByTrueSharing += cacheLineDetailedInfo->getInvalidationNumberInOtherThreads();
        } else if (cacheSharingType == FALSE_SHARING) {
            this->invalidationByFalseSharing += cacheLineDetailedInfo->getInvalidationNumberInOtherThreads();
        }
    }

    int getMinThreadId() {
        return minThreadId;
    }

    int getMaxThreadId() {
        return maxThreadId;
    }

    inline bool isThisPageShared() {
        if (maxThreadId < 0) {
            return false;
        }
        return maxThreadId != minThreadId;
    }

    void clearResidentDetailedInfo(unsigned long objAddress, unsigned long objSize) {
        for (int i = 0; i < this->topCacheLineDetailQueue.getSize(); i++) {
            this->topCacheLineDetailQueue.getValues()[i]->clear();
        }
    }

    bool isDominatedByCacheSharing() {
        unsigned long totalRemoteAccess = this->getTotalRemoteMainMemoryAccess();
        if (this->invalidationByTrueSharing >
            totalRemoteAccess * TRUE_SHARING_DOMINATE_PERCENT) {
            return true;
        }
        if (this->invalidationByFalseSharing >
            totalRemoteAccess * FALSE_SHARING_DOMINATE_PERCENT) {
            return true;
        }
        if ((this->invalidationByTrueSharing + this->invalidationByFalseSharing) >
            totalRemoteAccess * TRUE_AND_FALSE_SHARING_DOMINATE_PERCENT) {
            return true;
        }
        return false;
    }

    DiagnosePageInfo *deepCopy() {
        DiagnosePageInfo *diagnosePageInfo = createDiagnosePageInfo(this->pageStartAddress);
        diagnosePageInfo->pageStartAddress = this->pageStartAddress;
        diagnosePageInfo->minThreadId = this->minThreadId;
        diagnosePageInfo->maxThreadId = this->maxThreadId;
        diagnosePageInfo->remoteMemAccessNum = this->remoteMemAccessNum;
        diagnosePageInfo->remoteInvalidationNum = this->remoteInvalidationNum;
        diagnosePageInfo->readNumBeforeLastWrite = this->readNumBeforeLastWrite;
        diagnosePageInfo->invalidationByTrueSharing = this->invalidationByTrueSharing;
        diagnosePageInfo->invalidationByFalseSharing = this->invalidationByFalseSharing;
        for (int i = 0; i < this->topCacheLineDetailQueue.getSize(); i++) {
            diagnosePageInfo->topCacheLineDetailQueue.insert(this->topCacheLineDetailQueue.getValues()[i]->copy());
        }
        return diagnosePageInfo;
    }

    inline unsigned long getTotalRemoteMainMemoryAccess() {
        return this->remoteMemAccessNum + this->remoteInvalidationNum;
    }

    inline unsigned long getRemoteMemAccessNum() {
        return this->remoteMemAccessNum;
    }

    inline unsigned long getRemoteInvalidationNum() {
        return this->remoteInvalidationNum;
    }

    inline unsigned long getReadNumBeforeLastWrite() {
        return this->readNumBeforeLastWrite;
    }

    inline unsigned long getInvalidationByTrueSharing() {
        return this->invalidationByTrueSharing;
    }

    inline unsigned long getInvalidationByFalseSharing() {
        return this->invalidationByFalseSharing;
    }

    inline unsigned long getAccessNumWithOutCacheSharing() {
        return getTotalRemoteMainMemoryAccess() - invalidationByTrueSharing -
               invalidationByFalseSharing;
    }

    inline unsigned long getDuplicateNum() {
        if (this->remoteMemAccessNum < this->readNumBeforeLastWrite) {
            return 0;
        }
        return this->remoteMemAccessNum - this->readNumBeforeLastWrite;
    }

    inline bool operator<(DiagnosePageInfo &diagnoseCacheLineInfo) {
        return (this->getTotalRemoteMainMemoryAccess()) < (diagnoseCacheLineInfo.getTotalRemoteMainMemoryAccess());
    }

    inline bool operator>(DiagnosePageInfo &diagnoseCacheLineInfo) {
        return (this->getTotalRemoteMainMemoryAccess()) > (diagnoseCacheLineInfo.getTotalRemoteMainMemoryAccess());
    }

    inline bool operator<=(DiagnosePageInfo &diagnoseCacheLineInfo) {
        return (this->getTotalRemoteMainMemoryAccess()) <= (diagnoseCacheLineInfo.getTotalRemoteMainMemoryAccess());
    }

    inline bool operator>=(DiagnosePageInfo &diagnoseCacheLineInfo) {
        return (this->getTotalRemoteMainMemoryAccess()) >= (diagnoseCacheLineInfo.getTotalRemoteMainMemoryAccess());
    }

    inline bool operator==(DiagnosePageInfo &diagnoseCacheLineInfo) {
        return (this->getTotalRemoteMainMemoryAccess()) == (diagnoseCacheLineInfo.getTotalRemoteMainMemoryAccess());
    }

    inline bool operator>=(unsigned long remoteMemAccess) {
        return this->getTotalRemoteMainMemoryAccess() >= remoteMemAccess;
    }

    inline void dump(FILE *file, int blackSpaceNum, unsigned long totalRunningCycles) {
        char prefix[blackSpaceNum + 2];
        for (int i = 0; i < blackSpaceNum; i++) {
            prefix[i] = ' ';
            prefix[i + 1] = '\0';
        }
        fprintf(file, "%sPage start address:%lu\n", prefix, pageStartAddress);
        fprintf(file, "%sSerious Score:%f\n", prefix,
                Scores::getSeriousScore(this->getTotalRemoteMainMemoryAccess(), totalRunningCycles));
        fprintf(file, "%sthis page is shared by thread range:%d--%d\n", prefix, minThreadId, maxThreadId);
        fprintf(file, "%sPage score:               %f\n", prefix,
                Scores::getSeriousScore(getAccessNumWithOutCacheSharing(), totalRunningCycles));
        fprintf(file, "%sInvalidationByTrueSharing score:%f\n", prefix,
                Scores::getSeriousScore(invalidationByTrueSharing, totalRunningCycles));
        fprintf(file, "%sInvalidationByFalseSharing score:%f\n", prefix,
                Scores::getSeriousScore(invalidationByFalseSharing, totalRunningCycles));
        fprintf(file, "%sDuplicate score:%f\n", prefix,
                Scores::getSeriousScore(getDuplicateNum(),
                                        totalRunningCycles));
        for (int i = 0; i < topCacheLineDetailQueue.getSize(); i++) {
            topCacheLineDetailQueue.getValues()[i]->dump(file, blackSpaceNum + 2, totalRunningCycles);
        }
    }
};
#endif
#endif //NUMAPERF_DIAGNOSEPAGEINFO_H
