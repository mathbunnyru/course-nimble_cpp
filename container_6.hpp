#include "util.hpp"

#include <set>
#include <unordered_set>

#include <boost/container/set.hpp>
#include <boost/unordered_set.hpp>
#include <boost/container/flat_set.hpp>

//////////////////////////// TASK 6 ////////////////////////////

using naive_assoc_container = std::unordered_set<int>;
using set_assoc_container = std::set<int>;
using flat_assoc_container = boost::container::flat_set<int>;


//////////////////////////// DETAIL ////////////////////////////
BENCH(iteration, naive_assoc_container_iteration, naive_assoc_container{})->Range(8, 8<<10);
BENCH(iteration, set_assoc_container, set_assoc_container{})->Range(8, 8<<10);
BENCH(iteration, flat_assoc_container, flat_assoc_container{})->Range(8, 8<<10);

BENCH(search_assoc, naive_assoc_container_iteration, naive_assoc_container{})->Range(8, 8<<10);
BENCH(search_assoc, set_assoc_container, set_assoc_container{})->Range(8, 8<<10);
BENCH(search_assoc, flat_assoc_container, flat_assoc_container{})->Range(8, 8<<10);

BENCH(insertion_assoc, naive_assoc_container_iteration, naive_assoc_container{})->Range(8, 8<<10);
BENCH(insertion_assoc, set_assoc_container, set_assoc_container{})->Range(8, 8<<10);
BENCH(insertion_assoc, flat_assoc_container, flat_assoc_container{})->Range(8, 8<<10);
