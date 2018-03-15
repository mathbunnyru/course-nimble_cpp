#include "algorithm_common.hpp"

//////////////////////////// TASK 2 ////////////////////////////

int naive_median(std::vector<int>& d) {
    std::sort(d.begin(), d.end());
    return *(d.begin() + (d.size() >> 1));
}

int optimized_median(std::vector<int>& d) {
    // TASK: Improve
    std::sort(d.begin(), d.end());
    return *(d.begin() + (d.size() >> 1));
}


//////////////////////////// DETAIL ////////////////////////////
BENCH(algorithms, naive_median, naive_median, naive_median)->Range(8, 8 << 10)->Complexity();
BENCH(algorithms, optim_median, optimized_median, naive_median)->Range(8, 8 << 10)->Complexity();

