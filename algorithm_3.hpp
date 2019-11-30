#include "util.hpp"

//////////////////////////// TASK 3 ////////////////////////////

int naive_bankrupted(std::vector<int>& d) {
    std::sort(d.begin(), d.end());
    return std::find_if(d.begin(), d.end(), [](int val) { return val > 0; }) - d.begin();
}

int optimized_bankrupted(std::vector<int>& d) {
    return std::count_if(d.begin(), d.end(), [](int i) { return i <= 0; });
}


//////////////////////////// DETAIL ////////////////////////////
BENCH(algorithms, naive_bankrupted, naive_bankrupted, naive_bankrupted)->Range(8, 8 << 10)->Complexity();
BENCH(algorithms, optim_bankrupted, optimized_bankrupted, naive_bankrupted)->Range(8, 8 << 10)->Complexity();

