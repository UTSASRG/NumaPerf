#ifndef NUMAPERF_ADDRTOCACHEINDEXSHADOWMAP_H
#define NUMAPERF_ADDRTOCACHEINDEXSHADOWMAP_H

#include "../mm.hh"
#include <assert.h>
#include "../addresses.h"
#include "../log/Logger.h"
#include "../concurrency/automics.h"
#include "abstractShadowMap.h"

/**
 * memory layout: bool-value-bool-value-bool-value
 * @tparam unsigned long
 * @tparam ValueType
 */
template<class ValueType>
class AddressToCacheIndexShadowMap : public AbstractShadowMap<ValueType> {

private:
    inline unsigned long hashKey(unsigned long key) override {
        return ADDRESSES::getCacheIndex(key);
    }
};

#endif //NUMAPERF_ADDRTOCACHEINDEXSHADOWMAP_H
