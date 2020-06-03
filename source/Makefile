all: libnumaperf.so

# INCLUDEPATH = /usr/include/x86_64-linux-gnu/c++/4.8/

SRCS = utils/concurrency/automics.h
                bean/cachelineaccessinfo.h
                utils/collection/hashfuncs.h
                utils/collection/list.h
                utils/collection/hashmap.h
                libnumaperf.cpp
                libnumaperf.h
                bean/objectacessinfo.h
                bean/pageaccessinfo.h
                utils/real.h
                utils/concurrency/spinlock.h
                xdefines.h

libnumaperf.so: $(SRCS)
#         clang -g -O0 -shared -fPIC -fno-omit-frame-pointer $(SRCS) -o libnumaperf.so -ldl -I$(INCLUDEPATH) -lpthread
        clang -g -O0 -shared -fPIC -fno-omit-frame-pointer $(SRCS) -o libnumaperf.so -ldl -lpthread

clean:
        rm libnumaperf.so