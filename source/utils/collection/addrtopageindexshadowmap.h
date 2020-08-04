#ifndef NUMAPERF_ADDRTOPAGEINDEXSHADOWMAP_H
#define NUMAPERF_ADDRTOPAGEINDEXSHADOWMAP_H

#include "../mm.hh"
#include <assert.h>
#include "../addresses.h"
#include "../log/Logger.h"
#include "../concurrency/automics.h"
#include "abstractShadowMap.h"

/**
 * memory layout: bool-value-bool-value-bool-value
 * @tparam KeyType
 * @tparam ValueType
 */
template<class ValueType>
class AddressToPageIndexShadowMap : public AbstractShadowMap<ValueType> {

private:
    inline unsigned long hashKey(unsigned long key) {
        return ADDRESSES::getPageIndex(key);
    }
};

#endif //NUMAPERF_ADDRTOPAGEINDEXSHADOWMAP_H
