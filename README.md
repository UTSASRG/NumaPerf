# NumaPerf: Predictive NUMA Profiling

NumaPerf is a  NUMA profiling tool that detects NUMA related performance issues, provides helpful information, and suggests fix strategies—all with relatively low performance and memory overhead. Specifically it detects and reports on the following performance issues: remote accesses, node imbalances, interconnect congestion, and true/false sharing. NumaPerf has been extensively tested and proven to significantly improve performance speed—more so than any other existing NUMA profiling tools. 

Contributions: 
1. NumaPerf proposes new architecture-independent and scheduling-independent methods that could predicatively detect NUMA-related performance issues, even without the requirement to evaluate on a NUMA architecture.
2. NumaPerf proposes a new mechanism to profile load imbalance issues based on the number of memory accesses, which provides a better prediction on the thread assignment.
3. NumaPerf detects some omitted NUMA performance issues by existing tools, such as load imbalance, and thread migrations.
4. NumaPerf designs a set of new metrics to measure the seriousness of performance issues and provides helpful information to assist their fixes.
5. We have performed extensive evaluations to confirm NumaPerf’s effectiveness and overhead.

Notes/To-do:
1. Code cleanup: rename functions to be more descriptive and refactor code
1. Fix UMT2013 (#11): change from compiler based instrumentation to pin (binary) instrumentation (Similar to NumaProf).

Clone this repo:
```
git clone https://github.com/UTSASRG/NumaPerf.git
```

Learn more about NumaPerf in ICS'21.