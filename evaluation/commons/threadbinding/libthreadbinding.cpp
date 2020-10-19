#include <cstdio>
#include "automics.h"
#include "libthreadbinding.h"
#include "real.h"
#include "files.h"
#include <sys/mman.h>
#include <numaif.h>
#include <numa.h>
#include <sys/syscall.h>
#include <sys/sysinfo.h>
#include <unistd.h>

char CUSTOMIZE_THREAD_BINDING_CONFIG_FILE[100] = "./thread_binding.config\0";
unsigned long largestThreadIndex = 0;
pthread_attr_t attrBinding[NUMA_NODES];
int threadToNode[MAX_THREAD_NUM];
bool isRoundrobinBInding;

static void initThreadAttr() {
    int totalCpus = get_nprocs();
    cpu_set_t *cpusetp = CPU_ALLOC(totalCpus);
    assert(cpusetp);
    size_t size = CPU_ALLOC_SIZE(totalCpus);
    struct bitmask *bitmask = numa_bitmask_alloc(totalCpus);
    for (int i = 0; i < NUMA_NODES; i++) {
        numa_node_to_cpus(i, bitmask);
        pthread_attr_init(&(attrBinding[i]));
        pthread_attr_setdetachstate(&(attrBinding[i]), PTHREAD_CREATE_JOINABLE);
        CPU_ZERO_S(size, cpusetp);
        for (int cpu = 0; cpu < totalCpus; cpu++) {
            //          fprintf(stderr, "Node %d: setcpu %d\n", i, cpu);
            if (numa_bitmask_isbitset(bitmask, cpu)) {
                //      fprintf(stderr, "Node %d: setcpu %d\n", i, cpu);
                CPU_SET_S(cpu, size, cpusetp);
            }
        }
        pthread_attr_setaffinity_np(&(attrBinding[i]), size, cpusetp);
    }
}

static bool importCustomizeThreadBindingConfig() {
    for (int i = 0; i < MAX_THREAD_NUM; i++) {
        threadToNode[i] = -1;
    }
    FILE *file = fopen(CUSTOMIZE_THREAD_BINDING_CONFIG_FILE, "r");
    if (NULL == file) {
        return false;
    }
    int buffSize = 1024;
    char buff[buffSize];
    for (int i = 0; i < NUMA_NODES; i++) {
        int length = Files::readALine(file, buff, buffSize);
        if (length <= 0) {
            fprintf(stderr, "thread binding config file is not correct\n");
            return false;
        }
        int numberStartIndex = 0;
        for (int j = 0; j < length; j++) {
            if (buff[j] == ',') {
                buff[j] = '\0';
                unsigned int threadIndex = atoi(&(buff[numberStartIndex]));
                numberStartIndex = j + 1;
                threadToNode[numberStartIndex] = i;
                continue;
            }
            if (buff[j] == '\n' || buff[j] == '\0') {
                break;
            }
        }
    }
    return true;
}

static void initializer(void) {
    fprintf(stderr, "thread binding lib init\n");
    Real::init();
    initThreadAttr();
    isRoundrobinBInding = !importCustomizeThreadBindingConfig();
    if (isRoundrobinBInding) {
        fprintf(stderr, "thread binding using roundrobin strategy\n");
    } else {
        fprintf(stderr, "thread binding using customized config\n");
    }

}

//https://stackoverflow.com/questions/50695530/gcc-attribute-constructor-is-called-before-object-constructor
static int const do_init = (initializer(), 0);

int pthread_create(pthread_t *tid, const pthread_attr_t *attr,
                   void *(*start_routine)(void *), void *arg) __THROW {
    unsigned long threadIndex = Automics::automicIncrease(&largestThreadIndex, 1, -1);
    if (isRoundrobinBInding) {
        fprintf(stderr, "pthread create thread%lu--node%lu\n", threadIndex, threadIndex % NUMA_NODES);
        return Real::pthread_create(tid, &(attrBinding[threadIndex % NUMA_NODES]), start_routine, arg);
    }
    if (threadToNode[threadIndex] < 0) {
        fprintf(stderr, "pthread create error : thread to node data lost\n");
        exit(-1);
    }
    fprintf(stderr, "pthread create thread%lu--node%d\n", threadIndex, threadToNode[threadIndex]);
    return Real::pthread_create(tid, &(attrBinding[threadToNode[threadIndex]]), start_routine, arg);
}