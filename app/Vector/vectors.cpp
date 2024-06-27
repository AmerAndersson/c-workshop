#include <iostream>
#include <vector>

const char newline = '\n';
int main() {
    /// Initialization / Access vector

    std::vector<int> v;

    std::cout << v.size() << newline;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    for (auto x : v) {
        std::cout << x << '\n';
    }
    std::cout << "---" << newline;
    std::cout << v[0] << newline;
    std::cout << v.front() << newline;
    std::cout << v.back() << newline;
    std::cout << v.capacity() << newline;

    // Resizing
    v.pop_back();
    v.clear();
    std::cout << v.size() << newline;

    /**
     * * Copies Are Always Deep!
     * deep copying: copying creates a new vector object and copies all contained objects
     * deep assignment: all contained objects are copied from source to assignment target
     * deep comparison: comparing two vectors compares the values of the contained objects
     * deep ownership: destroying a vector destroys all contained object
     */
    std::vector<int> a{1, 2, 3, 4};
    std::vector<int> b = a;  // copy a → b
    if (a == b) std::cout << "equal\n";
    a[0] = 9;

    std::cout << b[0] << '\n';
    if (a != b) std::cout << "different\n";

    return 0;
}
