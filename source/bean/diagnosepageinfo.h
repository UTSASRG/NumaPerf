#ifndef NUMAPERF_DIAGNOSEPAGEINFO_H
#define NUMAPERF_DIAGNOSEPAGEINFO_H

#include "objectInfo.h"
#include "diagnosecallsiteinfo.h"

class DiagnosePageInfo {
private:
    ObjectInfo *objectInfo;
    DiagnoseCallSiteInfo *diagnoseCallSiteInfo;
    PageDetailedAccessInfo pageDetailedAccessInfo;

    static MemoryPool localMemoryPool;

    DiagnosePageInfo(ObjectInfo *objectInfo, DiagnoseCallSiteInfo *diagnoseCallSiteInfo,
                     PageDetailedAccessInfo *pageDetailedAccessInfo) {
        this->objectInfo = objectInfo;
        this->diagnoseCallSiteInfo = diagnoseCallSiteInfo;
        memcpy(&(this->pageDetailedAccessInfo), pageDetailedAccessInfo, sizeof(PageDetailedAccessInfo));
    }

public:
    inline static DiagnosePageInfo *
    createDiagnosePageInfo(ObjectInfo *objectInfo, DiagnoseCallSiteInfo *diagnoseCallSiteInfo,
                           PageDetailedAccessInfo *pageDetailedAccessInfo1) {
        void *buff = localMemoryPool.get();
//        Logger::debug("new DiagnosePageInfo buff address:%lu \n", buff);
        DiagnosePageInfo *ret = new(buff) DiagnosePageInfo(objectInfo, diagnoseCallSiteInfo, pageDetailedAccessInfo1);
        return ret;
    }

    inline static void release(DiagnosePageInfo *buff) {
        ObjectInfo::release(buff->objectInfo);
        localMemoryPool.release((void *) buff);
    }

    inline unsigned long getSeriousScore() {
        return this->pageDetailedAccessInfo.getSeriousScore();
    }

    inline bool operator<(DiagnosePageInfo &diagnoseCacheLineInfo) {
        return (this->pageDetailedAccessInfo) < *(diagnoseCacheLineInfo.pagePageDetailedAccessInfo());
    }

    inline bool operator>(DiagnosePageInfo &diagnoseCacheLineInfo) {
        return (this->pageDetailedAccessInfo) > *(diagnoseCacheLineInfo.pagePageDetailedAccessInfo());
    }

    inline bool operator<=(DiagnosePageInfo &diagnoseCacheLineInfo) {
        return (this->pageDetailedAccessInfo) <= *(diagnoseCacheLineInfo.pagePageDetailedAccessInfo());
    }

    inline bool operator>=(DiagnosePageInfo &diagnoseCacheLineInfo) {
        return (this->pageDetailedAccessInfo) >= *(diagnoseCacheLineInfo.pagePageDetailedAccessInfo());
    }

    inline bool operator==(DiagnosePageInfo &diagnoseCacheLineInfo) {
        return (this->pageDetailedAccessInfo) == *(diagnoseCacheLineInfo.pagePageDetailedAccessInfo());
    }

    inline bool operator>=(unsigned long seriousScore) {
        return this->pageDetailedAccessInfo >= seriousScore;
    }

    inline PageDetailedAccessInfo *pagePageDetailedAccessInfo() {
        return &pageDetailedAccessInfo;
    }

    inline void dump(FILE *file, int blackSpaceNum) {
        this->pageDetailedAccessInfo.dump(file, blackSpaceNum + 2);
        this->objectInfo->dump(file, blackSpaceNum + 2);
        char prefix[blackSpaceNum + 2];
        for (int i = 0; i < blackSpaceNum; i++) {
            prefix[i] = ' ';
            prefix[i + 1] = '\0';
        }
        fprintf(file, "%sCall Site Stacks:\n", prefix);
        this->diagnoseCallSiteInfo->dump_call_stacks(file);
    }
};

#endif //NUMAPERF_DIAGNOSEPAGEINFO_H
