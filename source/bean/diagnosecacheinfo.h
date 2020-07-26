#ifndef NUMAPERF_DIAGNOSECACHEINFO_H
#define NUMAPERF_DIAGNOSECACHEINFO_H

#include "objectInfo.h"
#include "diagnosecallsiteinfo.h"

class DiagnoseCacheLineInfo {
private:
    ObjectInfo *objectInfo;
    DiagnoseCallSiteInfo *diagnoseCallSiteInfo;
    CacheLineDetailedInfo *cacheLineDetailedInfo;

    static MemoryPool localMemoryPool;


    DiagnoseCacheLineInfo(ObjectInfo *objectInfo, DiagnoseCallSiteInfo *diagnoseCallSiteInfo) {
        this->objectInfo = objectInfo;
        this->diagnoseCallSiteInfo = diagnoseCallSiteInfo;
    }

public:
    inline static DiagnoseCacheLineInfo *
    createDiagnoseCacheLineInfo(ObjectInfo *objectInfo, DiagnoseCallSiteInfo *diagnoseCallSiteInfo) {
        void *buff = localMemoryPool.get();
        Logger::debug("new DiagnoseCacheLineInfo buff address:%lu \n", buff);
        DiagnoseCacheLineInfo *ret = new(buff) DiagnoseCacheLineInfo(objectInfo, diagnoseCallSiteInfo);
        return ret;
    }

    inline static void release(DiagnoseCacheLineInfo *buff) {
        localMemoryPool.release((void *) buff);
    }

    inline unsigned long getSeriousScore() const {
        return this->cacheLineDetailedInfo->getSeriousScore();
    }

    inline bool operator<(const DiagnoseCacheLineInfo &diagnoseCacheLineInfo) {
        return *(this->cacheLineDetailedInfo) < *(diagnoseCacheLineInfo.getCacheLineDetailedInfo());
    }

    inline bool operator>(const DiagnoseCacheLineInfo &diagnoseCacheLineInfo) {
        return *(this->cacheLineDetailedInfo) > *(diagnoseCacheLineInfo.getCacheLineDetailedInfo());
    }

    inline bool operator<=(const DiagnoseCacheLineInfo &diagnoseCacheLineInfo) {
        return *(this->cacheLineDetailedInfo) <= *(diagnoseCacheLineInfo.getCacheLineDetailedInfo());
    }

    inline bool operator>=(const DiagnoseCacheLineInfo &diagnoseCacheLineInfo) {
        return *(this->cacheLineDetailedInfo) >= *(diagnoseCacheLineInfo.getCacheLineDetailedInfo());
    }

    inline bool operator==(const DiagnoseCacheLineInfo &diagnoseCacheLineInfo) {
        return *(this->cacheLineDetailedInfo) == *(diagnoseCacheLineInfo.getCacheLineDetailedInfo());
    }

    inline CacheLineDetailedInfo *getCacheLineDetailedInfo() const {
        return cacheLineDetailedInfo;
    }

    inline void setCacheLineDetailedInfo(CacheLineDetailedInfo *cacheLineDetailedInfor) {
        this->cacheLineDetailedInfo = cacheLineDetailedInfor;
    }
};

#endif //NUMAPERF_DIAGNOSECACHEINFO_H
