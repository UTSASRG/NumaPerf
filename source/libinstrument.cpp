#include <stdio.h>
#include <stdlib.h>

extern "C" {

  typedef enum e_access_type {
    E_ACCESS_READ = 0,
    E_ACCESS_WRITE
  } eAccessType;

  //const char path[] =  "/home/utsasrg/corey/MemLog/output/"; // Directory for all output

  void initializer (void) __attribute__((constructor));
  void finalizer (void)   __attribute__((destructor));

  bool initialized = false;

  void initializer (void) {
	//init_real_functions(); //where this come from??
	fprintf(stderr, "Lib Initialized\n");
    initialized = true;
  }

  void finalizer (void) {
	fprintf(stderr, "Lib Unloaded\n");
    initialized = false;
  }

  void handleAccess(unsigned long addr, size_t size, eAccessType type) {
	fprintf(stderr, "Handle Access: ");
	if(type == E_ACCESS_READ) {
		fprintf(stderr, "Read  at %lx, Size: %zu\n", addr, size);
	}
	else {
		fprintf(stderr, "Write at %lx, Size: %zu\n", addr, size);
	}
  }

  void store_16bytes(unsigned long addr) {
    handleAccess(addr, 16, E_ACCESS_WRITE);
  }

  void store_8bytes(unsigned long addr) {
    //fprintf(stderr, "store_8bytes %lx WWWWWWWWWWWWWWWWWWWWW isMulthreading %d\n", addr, isMultithreading);
      handleAccess(addr, 8, E_ACCESS_WRITE);
  }

  void store_4bytes(unsigned long addr) {
    //fprintf(stderr, "store_4bytes %lx WWWWWWWWWWWWWWWWWWWWW\n", addr);
      handleAccess(addr, 4, E_ACCESS_WRITE);
  }
  void store_2bytes(unsigned long addr) {
      handleAccess(addr, 2, E_ACCESS_WRITE);
  }

  void store_1bytes(unsigned long addr) {
      handleAccess(addr, 1, E_ACCESS_WRITE);
  }

  void load_16bytes(unsigned long addr) {
      handleAccess(addr, 16, E_ACCESS_READ);
  }

  void load_8bytes(unsigned long addr) {
    //fprintf(stderr, "load_8bytes %lx WWWWWWWWWWWWWWWWWWWWW\n", addr);
      handleAccess(addr, 8, E_ACCESS_READ);
  }

  void load_4bytes(unsigned long addr) {
    //fprintf(stderr, "load_4bytes %lx WWWWWWWWWWWWWWWWWWWWW\n", addr);
      handleAccess(addr, 4, E_ACCESS_READ);
  }

  void load_2bytes(unsigned long addr) {
      handleAccess(addr, 2, E_ACCESS_READ);
  }

  void load_1bytes(unsigned long addr) {
      handleAccess(addr, 1, E_ACCESS_READ);
  }
}
