#ifndef __HASHMAP_H__
#define __HASHMAP_H__

#include <assert.h>
#include <stddef.h>
#include <stdint.h>
#include <stdlib.h>
#include <unistd.h>
#include <cstdio>

#include "list.h"
#include "../real.h"

class localAllocator {
public:
    static void *allocate(size_t size) {
        return Real::malloc(size);
    }

    static void free(void *ptr) {
        return Real::free(ptr);
    }
};


#define LOCK_PROTECTION 1

#if LOCK_PROTECTION

template<class KeyType,
        class ValueType,
        class LockType, class SourceHeap>
#else
template <class KeyType,
          class ValueType, class SourceHeap>
#endif
class HashMap {

    // Each entry has a lock.
    struct HashBucket {
        list_t list;
#if LOCK_PROTECTION
        // Each entry has a separate lock
        LockType lock;
#endif
        size_t count; // How many _bucketsTotal in this list

        void initialize() {
            count = 0;
            listInit(&list);
#if LOCK_PROTECTION
            LockInit();
#endif
        }


#if LOCK_PROTECTION

        void Lock() { lock.lock(); }

        void Unlock() { lock.unlock(); }

        void LockInit() { lock.init(); }

#endif

        void *getFirstEntry() { return (void *) list.next; }
    };

    struct Entry {
        list_t list;
        KeyType key;
        size_t keylen;
        ValueType value;

        void initialize(KeyType ikey = 0, int ikeylen = 0, ValueType ivalue = 0) {
            listInit(&list);
            key = ikey;
            keylen = ikeylen;
            value = ivalue;
        }

        void erase() { listRemoveNode(&list); }

        struct Entry *nextEntry() { return (struct Entry *) list.next; }

        ValueType getValue() { return value; }

        KeyType getKey() { return key; }
    };

    bool _initialized;
    struct HashBucket *_buckets;
    size_t _bucketsTotal;     // How many buckets in total
    size_t _bucketsTotalUsed; // How many buckets in use

    size_t _totalEntry;

    typedef bool (*keycmpFuncPtr)(const KeyType, const KeyType, size_t);

    typedef size_t (*hashFuncPtr)(const KeyType, size_t);

    keycmpFuncPtr _keycmp;
    hashFuncPtr _hashfunc;

public:
    HashMap() : _initialized(false) {
    }

    void initialize(hashFuncPtr hfunc, keycmpFuncPtr kcmp, const size_t size = 4096) {
        _buckets = NULL;
        _bucketsTotalUsed = 0;
        _bucketsTotal = size;
        _totalEntry = 0;

        if (hfunc == NULL || kcmp == NULL) {
            abort();
        }

        // Initialize those functions.
        _hashfunc = hfunc;
        _keycmp = kcmp;

        // Allocated predefined size.
        _buckets = (struct HashBucket *) SourceHeap::allocate(size * sizeof(struct HashBucket));

        // Initialize all of these _buckets.
        struct HashBucket *bucket;
        for (size_t i = 0; i < size; i++) {
            bucket = getHashBucket(i);
            bucket->initialize();
        }
        _initialized = true;
    }

    inline struct HashBucket *getHashBucket(size_t index) {
        if (index < _bucketsTotal) {
            return &_buckets[index];
        } else {
            return NULL;
        }
    }

    inline size_t hashIndex(const KeyType &key, size_t keylen) {
        size_t hkey = _hashfunc(key, keylen);
        return hkey & (_bucketsTotal - 1);
    }

    // Look up whether an entry is existing or not.
    // If existing, return true. *value should be carried specific value for this key.
    // Otherwise, return false.
    ValueType *find(const KeyType &key, size_t keylen) {
        assert(_initialized == true);
        size_t hindex = hashIndex(key, keylen);
        struct HashBucket *first = getHashBucket(hindex);
        //fprintf(stderr, "find entry key %p hindex %d\n", key, hindex);
        struct Entry *entry = getEntry(first, key, keylen);
        ValueType *ret = NULL;

        if (entry) {
            ret = &entry->value;
        }

        return ret;
    }

    void *findEntry(const KeyType &key, size_t keylen) {
        assert(_initialized == true);
        size_t hindex = hashIndex(key, keylen);
        struct HashBucket *first = getHashBucket(hindex);
#if LOCK_PROTECTION
        first->Lock();
#endif
        struct Entry *entry = getEntry(first, key, keylen);
#if LOCK_PROTECTION
        first->Unlock();
#endif

        return entry;
    }

    ValueType *getValueFromEntry(void *ptr) {
        struct Entry *entry = (struct Entry *) ptr;

        if (entry) {
            return &entry->value;
        }

        return NULL;
    }

    // this function is customized for call stack array
    ValueType *findOrAdd(const KeyType &key, size_t keylen, ValueType newval) {
        assert(_initialized == true);
        ValueType *ret = NULL;
        size_t hindex = hashIndex(key, keylen);
        struct HashBucket *first = getHashBucket(hindex);
        struct Entry *entry = getEntry(first, key, keylen);

#if LOCK_PROTECTION
        first->Lock();
#endif
        // Check all _buckets with the same hindex.
        entry = getEntry(first, key, keylen);
        if (entry == NULL) {
            // fprintf(stderr, "entry not exists. Now add the current one to the map\n");
            // insert new call stack into map
            entry = insertEntry(first, key, keylen, newval);
        }

        // return the actual call stack value
        ret = &entry->value;
        //fprintf(stderr, "entry exists. Now return. ret %p\n", ret);

#if LOCK_PROTECTION
        first->Unlock();
#endif

        return ret;
    }

    void insert(const KeyType &key, size_t keylen, ValueType value) {
        if (_initialized != true) {
            fprintf(stderr, "process %d: initialized at  %p hashmap is not true\n", getpid(), &_initialized);
        }

        assert(_initialized == true);
        size_t hindex = hashIndex(key, keylen);
        // PRINF("Insert entry:  before inserting\n");
        struct HashBucket *first = getHashBucket(hindex);
//    fprintf(stderr, "insert key %p index %lx\n", key, hindex);

        // PRINF("Insert entry: key %p\n", key);
#if LOCK_PROTECTION
        first->Lock();
        insertEntry(first, key, keylen, value);
        first->Unlock();
#else
        insertEntry(first, key, keylen, value);
#endif
    }

    // Insert a hash table entry if it is not existing.
    // If the entry is already existing, return true
    bool insertIfAbsent(const KeyType &key, size_t keylen, ValueType value) {
        assert(_initialized == true);
        size_t hindex = hashIndex(key, keylen);
        struct HashBucket *first = getHashBucket(hindex);
        struct Entry *entry;
        bool isFound = true;

#if LOCK_PROTECTION
        first->Lock();
#endif

        // Check all _buckets with the same hindex.
        entry = getEntry(first, key, keylen);
        if (!entry) {
            isFound = false;
            insertEntry(first, key, keylen, value);
        }

#if LOCK_PROTECTION
        first->Unlock();
#endif
        return isFound;
    }

    // Free an entry with specified key
    bool erase(const KeyType &key, size_t keylen) {
        assert(_initialized == true);
        size_t hindex = hashIndex(key, keylen);
        struct HashBucket *first = getHashBucket(hindex);
        struct Entry *entry;
        bool isFound = false;

#if LOCK_PROTECTION
        first->Lock();
#endif

        entry = getEntry(first, key, keylen);

        if (entry) {
            isFound = true;

            // Check whether this entry is the first entry.
            // Remove this entry if existing.
            entry->erase();

            SourceHeap::free(entry);
        }

        first->count--;

#if LOCK_PROTECTION
        first->Unlock();
#endif
        return isFound;
    }

    size_t getEntryNumber() { return _totalEntry; }

    // Clear all _buckets
    void clear() {}

private:

    // Create a new Entry with specified key and value.
    struct Entry *createNewEntry(const KeyType &key, size_t keylen, ValueType value) {
        struct Entry *entry = (struct Entry *) SourceHeap::allocate(sizeof(struct Entry));
        //struct Entry* entry = (struct Entry*)Real::malloc(sizeof(struct Entry));

        // Initialize this new entry.
        entry->initialize(key, keylen, value);
        return entry;
    }

    struct Entry *insertEntry(struct HashBucket *head, const KeyType &key, size_t keylen, ValueType value) {
        // Check whether the first entry is empty or not.
        // Create an entry
        struct Entry *entry = createNewEntry(key, keylen, value);
        listInsertTail(&entry->list, &head->list);
        head->count++;

        // increment total number
        __atomic_add_fetch(&_totalEntry, 1, __ATOMIC_RELAXED);
        return entry;
    }

    // Search the entry in the corresponding list.
    struct Entry *getEntry(struct HashBucket *first, const KeyType &key, size_t keylen) {
        struct Entry *entry = (struct Entry *) first->getFirstEntry();
        struct Entry *result = NULL;

        // Check all _buckets with the same hindex.
        int count = first->count;
        while (count > 0) {
            if (_keycmp(entry->key, key, keylen) && (entry->keylen == keylen)) {
                result = entry;
                break;
            }

            entry = entry->nextEntry();
            count--;
        }

        //fprintf(stderr, "count is %d\n", count);
        return result;
    }

public:
    class iterator {

#if LOCK_PROTECTION

        friend class HashMap<KeyType, ValueType, LockType, SourceHeap>;

#else
        friend class HashMap<KeyType, ValueType, SourceHeap>;
#endif

        struct Entry *_entry; // Which entry in the current hash entry?
        size_t _pos;          // which bucket at the moment? [0, nbucket-1]
        HashMap *_hashmap;

    public:
        iterator(struct Entry *ientry = NULL, int ipos = 0, HashMap *imap = NULL) {
            _pos = ipos;
            _entry = ientry;
            _hashmap = imap;
        }

        ~iterator() {}

        iterator &operator++(int) // in postfix ++  /* parameter? */
        {
            struct HashBucket *hashentry = _hashmap->getHashBucket(_pos);

            // Check whether this entry is the last entry in current hash entry.
            if (!isListTail(&_entry->list, &hashentry->list)) {
                // If not, then we simply get next entry. No need to change pos.
                _entry = _entry->nextEntry();
            } else {
                // Since current list is empty, we must search next hash entry.
                _pos++;
                while ((hashentry = _hashmap->getHashBucket(_pos)) != NULL) {
                    if (hashentry->count != 0) {
                        // Now we can return it.
                        _entry = (struct Entry *) hashentry->getFirstEntry();
                        return *this;
                    }
                    _pos++;
                }

                _entry = NULL;
            }

            return *this;
        }

        // iterator& operator -- ();
        // Iterpreted as a = b is treated as a.operator=(b)
        iterator &operator=(const iterator &that) {
            _entry = that._entry;
            _pos = that._pos;
            _hashmap = that._hashmap;
            return *this;
        }

        bool operator==(const iterator &that) const { return _entry == that._entry; }

        bool operator!=(const iterator &that) const { return _entry != that._entry; }

        ValueType getData() { return _entry->getValue(); }

        KeyType getkey() { return _entry->getKey(); }
    };

    // Acquire the first entry of the hash table
    iterator begin() {
        size_t pos = 0;
        struct HashBucket *head = NULL;
        struct Entry *entry;

        // Get the first non-null entry
        while (pos < _bucketsTotal) {
            head = getHashBucket(pos);
            if (head->count != 0) {
                // Now we can return it.
                entry = (struct Entry *) head->getFirstEntry();
                return iterator(entry, pos, this);
            }
            pos++;
        }

        return end();
    }

    iterator end() { return iterator(NULL, 0, this); }
};

#endif
