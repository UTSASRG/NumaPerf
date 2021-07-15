# NumaPerf: Predictive NUMA Profiling

NumaPerf is a  NUMA profiling tool that detects NUMA related performance issues, provides helpful information, and suggests fix strategies—all with relatively low performance and memory overhead. Specifically, it detects and reports on the following performance issues: remote accesses, node imbalances, interconnect congestion, and true/false sharing. NumaPerf has been extensively tested and proven to significantly improve performance speed—more so than any other existing NUMA profiler. 

#### Contributions: 
1. NumaPerf proposes new architecture-independent and scheduling-independent methods that could predicatively detect NUMA-related performance issues, even without the requirement to evaluate on a NUMA architecture.
2. NumaPerf proposes a new mechanism to profile load imbalance issues based on the number of memory accesses, which provides a better prediction on the thread assignment.
3. NumaPerf detects some omitted NUMA performance issues by existing tools, such as load imbalance, and thread migrations.
4. NumaPerf designs a set of new metrics to measure the seriousness of performance issues and provides helpful information to assist their fixes.
5. We have performed extensive evaluations to confirm NumaPerf’s effectiveness and overhead.

We will compare NumaPerf to all existing work: numaProf, SNPERF (An application-centric ccNUMAmemory profiler), NUMAgrind, Numatop, HPCToolkit (Xu's work), and MemProf (a Memory Profiler for NUMA Multicore Systems [ATC'12]). The basic idea is to check the memory sharing pattern. 

Camera Ready Site(ICS '21): https://ics21-pub.hotcrp.com/paper/52/edit

#### Instructions

1. Clone this repo.

    ```
    git clone https://github.com/UTSASRG/NumaPerf.git
    ```
    
2. NumaPerf requires Clang (install dependency if needed).

    ```
    sudo apt-get install clang
    ```
    
3. Change directories to the source directory and run the make command. This will create the libnumaperf.so shared object file in the source directory.
    ```
    cd source
    make
    ```
4. Finally, compile your desired program with the flags below.

    ```
    -Wl,--no-as-needed -rdynamic your/path/to/the/.so/file/libnumaperf.so 
    ```
    After running your program, NumaPerf will create a .dump file in the directory you ran the program. This file is NumaPerf's performance report and has the following table of contents:
    
    > Part One: Thread number recommendation for each stage.
    
    > Part Two: Thread based node migration times.
    
    > Part Three: Thread based imbalance detection & threads binding recommendation.
    
    > Part Four: Top problematical callsites.
    
    Examples of NumaPerf's reports (on AMG2006, UMT2013, lulesh, and PARSEC) can be found in the evaluation folder.
