#ifndef NUMAPERF_DIAGNOSEPAGEINFO_H
#define NUMAPERF_DIAGNOSEPAGEINFO_H

#include "objectInfo.h"
#include "diagnosecallsiteinfo.h"

class DiagnosePageInfo {
private:
    ObjectInfo *objectInfo;
    DiagnoseCallSiteInfo *diagnoseCallSiteInfo;
    PageDetailedAccessInfo *pageDetailedAccessInfo;

    static MemoryPool localMemoryPool;

    DiagnosePageInfo(ObjectInfo *objectInfo, DiagnoseCallSiteInfo *diagnoseCallSiteInfo) {
        this->objectInfo = objectInfo;
        this->diagnoseCallSiteInfo = diagnoseCallSiteInfo;
    }

public:
    inline static DiagnosePageInfo *
    createDiagnosePageInfo(ObjectInfo *objectInfo, DiagnoseCallSiteInfo *diagnoseCallSiteInfo) {
        void *buff = localMemoryPool.get();
        Logger::debug("new DiagnosePageInfo buff address:%lu \n", buff);
        DiagnosePageInfo *ret = new(buff) DiagnosePageInfo(objectInfo, diagnoseCallSiteInfo);
        return ret;
    }

    inline static void release(DiagnosePageInfo *buff) {
        localMemoryPool.release((void *) buff);
    }

    inline unsigned long getSeriousScore() const {
        return this->pageDetailedAccessInfo->getSeriousScore(0, 0);
    }

    inline bool operator<(const DiagnosePageInfo &diagnoseCacheLineInfo) {
        return *(this->pageDetailedAccessInfo) < *(diagnoseCacheLineInfo.pagePageDetailedAccessInfo());
    }

    inline bool operator>(const DiagnosePageInfo &diagnoseCacheLineInfo) {
        return *(this->pageDetailedAccessInfo) > *(diagnoseCacheLineInfo.pagePageDetailedAccessInfo());
    }

    inline bool operator<=(const DiagnosePageInfo &diagnoseCacheLineInfo) {
        return *(this->pageDetailedAccessInfo) <= *(diagnoseCacheLineInfo.pagePageDetailedAccessInfo());
    }

    inline bool operator>=(const DiagnosePageInfo &diagnoseCacheLineInfo) {
        return *(this->pageDetailedAccessInfo) >= *(diagnoseCacheLineInfo.pagePageDetailedAccessInfo());
    }

    inline bool operator==(const DiagnosePageInfo &diagnoseCacheLineInfo) {
        return *(this->pageDetailedAccessInfo) == *(diagnoseCacheLineInfo.pagePageDetailedAccessInfo());
    }

    inline PageDetailedAccessInfo *pagePageDetailedAccessInfo() const {
        return pageDetailedAccessInfo;
    }

    inline void setPageDetailedAccessInfo(PageDetailedAccessInfo *pageDetailedAccessInfo) {
        this->pageDetailedAccessInfo = pageDetailedAccessInfo;
    }
};

#endif //NUMAPERF_DIAGNOSEPAGEINFO_H
