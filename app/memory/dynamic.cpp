#include <iostream>
#include <vector>

/**
 * * Dynamic Storage: std::vector
 * * For now: only by using std::vector
 * * Next: more standard library containers (set, map, …)
 * * Much later: manual dynamic memory allocation
 * * In modern C++, manual allocation is actually only really necessary
 * * if you want to implement your own dynamic data structures / containers.
 * Each vector object holds a separate buffer that is dynamically allocated
 * (on the heap) where the actual content is stored.
 * Right now we only know how to allocate objects on the stack,
 * but the vector (object v) itself could also be allocated on the heap (more on that in later chapters).
 * -------------------------------------------------------------------------------------------------------
 * Dynamic array implementations separate the array object from the actual memory block for storing values.
 * * std::vector Growth Scheme
 * Growth is then done the following way:
 * dynamically allocate new, (≈1.1-2×) larger memory block
 * copy/move old values to new block
 * destroy old, smaller block
 * --------------------------------------
 *
 * std::vector Size vs. Capacity
 * v.size();      // → number of elements in vector
 * v.resize();    // new_number_of_elements
 * v.capacity();  // → number of available memory slots
 * v.reserve();   // new_capacity
 * If you know the (approximate) number of elements in advance ⇒ reserve before adding elements to the vector!
 * This avoids unnecessary memory allocations and copying during the growth phase.
 */
int main() {
    /**
     *
     */
    // std::vector<int> v{0, 1, 2, 3, 4};
    //     capacity  size
    std::vector<int> v;  //    0          0
    v.push_back(7);      //    0          1    // 7
    v.reserve(4);        //    4          1    // 7 | | |
    v.push_back(8);      //    4          2    // 7,8
    v.push_back(9);      //    4          3    // 7,8,9

    auto s = v.size();      //  s: 3
    auto c = v.capacity();  // c: 4
    v.resize(6, 0);         // r: 7,8,9,0,0,0   s: 6    c:6

    std::vector<int> v2;
    v2.reserve(4);
    v2.push_back(1);
    v2.push_back(3);
    v2.push_back(4);
    v2.resize(6, 0);
    std::cout << v2.size() << '\n';
    std::cout << v2.capacity() << '\n';

    return 0;
}