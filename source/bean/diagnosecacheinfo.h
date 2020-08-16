#ifndef NUMAPERF_DIAGNOSECACHEINFO_H
#define NUMAPERF_DIAGNOSECACHEINFO_H

#include "objectInfo.h"
#include "diagnosecallsiteinfo.h"

class DiagnoseCacheLineInfo {
private:
    ObjectInfo *objectInfo;
    DiagnoseCallSiteInfo *diagnoseCallSiteInfo;
    CacheLineDetailedInfo cacheLineDetailedInfo;

    static MemoryPool localMemoryPool;


    DiagnoseCacheLineInfo(ObjectInfo *objectInfo, DiagnoseCallSiteInfo *diagnoseCallSiteInfo,
                          CacheLineDetailedInfo *cacheLineDetailedInfo1) {
        this->objectInfo = objectInfo;
        this->diagnoseCallSiteInfo = diagnoseCallSiteInfo;
        memcpy(&(this->cacheLineDetailedInfo), cacheLineDetailedInfo1, sizeof(CacheLineDetailedInfo));
    }

public:
    inline static DiagnoseCacheLineInfo *
    createDiagnoseCacheLineInfo(ObjectInfo *objectInfo, DiagnoseCallSiteInfo *diagnoseCallSiteInfo,
                                CacheLineDetailedInfo *cacheLineDetailedInfo1) {
        void *buff = localMemoryPool.get();
//        Logger::debug("new DiagnoseCacheLineInfo buff address:%lu \n", buff);
        DiagnoseCacheLineInfo *ret = new(buff) DiagnoseCacheLineInfo(objectInfo, diagnoseCallSiteInfo,
                                                                     cacheLineDetailedInfo1);
        return ret;
    }

    inline static void release(DiagnoseCacheLineInfo *buff) {
        localMemoryPool.release((void *) buff);
    }

    inline unsigned long getSeriousScore() {
        return this->cacheLineDetailedInfo.getSeriousScore();
    }

    inline bool operator<(DiagnoseCacheLineInfo &diagnoseCacheLineInfo) {
        return this->cacheLineDetailedInfo < *(diagnoseCacheLineInfo.getCacheLineDetailedInfo());
    }

    inline bool operator>(DiagnoseCacheLineInfo &diagnoseCacheLineInfo) {
        return this->cacheLineDetailedInfo > *(diagnoseCacheLineInfo.getCacheLineDetailedInfo());
    }

    inline bool operator<=(DiagnoseCacheLineInfo &diagnoseCacheLineInfo) {
        return this->cacheLineDetailedInfo <= *(diagnoseCacheLineInfo.getCacheLineDetailedInfo());
    }

    inline bool operator>=(DiagnoseCacheLineInfo &diagnoseCacheLineInfo) {
        return this->cacheLineDetailedInfo >= *(diagnoseCacheLineInfo.getCacheLineDetailedInfo());
    }

    inline bool operator==(DiagnoseCacheLineInfo &diagnoseCacheLineInfo) {
        return this->cacheLineDetailedInfo == *(diagnoseCacheLineInfo.getCacheLineDetailedInfo());
    }

    inline bool operator>=(unsigned long seriousScore) {
        return this->cacheLineDetailedInfo >= seriousScore;
    }

    inline CacheLineDetailedInfo *getCacheLineDetailedInfo() {
        return &cacheLineDetailedInfo;
    }

    inline void dump(FILE *file, int blackSpaceNum) {
        this->cacheLineDetailedInfo.dump(file, blackSpaceNum + 2);
        this->objectInfo->dump(file, blackSpaceNum + 2);
        char prefix[blackSpaceNum];
        for (int i = 0; i < blackSpaceNum; i++) {
            prefix[i] = ' ';
        }
        fprintf(file, "%sCall Site Stacks:\n", prefix);
        this->diagnoseCallSiteInfo->dump_call_stacks(file);
    }
};

#endif //NUMAPERF_DIAGNOSECACHEINFO_H
