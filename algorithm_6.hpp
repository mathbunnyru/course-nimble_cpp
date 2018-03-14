#include "algorithm_common.hpp"

//////////////////////////// TASK 5 ////////////////////////////

struct  naive_complex {
    int real, im;

    ~naive_complex() {};
};


struct  optim_complex { // TASK: Improve
    int real, im;

    ~optim_complex() {};
};


//////////////////////////// DETAIL ////////////////////////////

template <class T>
static void copy_speed(benchmark::State& state) {
    const std::size_t elements_count = state.range();
    for (auto _ : state) {
        state.PauseTiming();
        std::vector<T> d(elements_count);
        std::vector<T> dest(elements_count);
        state.ResumeTiming();

        std::copy(d.cbegin(), d.cend(), dest.begin());
        benchmark::DoNotOptimize(d);
        benchmark::DoNotOptimize(dest);
    }
}

BENCHMARK_TEMPLATE(copy_speed, naive_complex)->Range(8, 8 << 10);
BENCHMARK_TEMPLATE(copy_speed, optim_complex)->Range(8, 8 << 10);

