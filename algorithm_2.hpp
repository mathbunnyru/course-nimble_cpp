#include "util.hpp"

//////////////////////////// TASK 2 ////////////////////////////

int naive_median(std::vector<int>& d) {
    std::sort(d.begin(), d.end());
    return *(d.begin() + static_cast<std::size_t>(d.size() / 2));
}

int optimized_median(std::vector<int>& d) {
    auto it = d.begin() + static_cast<std::size_t>(d.size() / 2);
    std::nth_element(d.begin(), it, d.end());
    return *it;
}


//////////////////////////// DETAIL ////////////////////////////
BENCH(algorithms, naive_median, naive_median, naive_median)->Range(8, 8 << 10)->Complexity();
BENCH(algorithms, optim_median, optimized_median, naive_median)->Range(8, 8 << 10)->Complexity();

