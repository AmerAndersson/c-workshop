
#include <algorithm>
#include <iostream>
#include <limits>

// Solution: Reset Input Stream After Error

constexpr auto max_size = std::numeric_limits<std::streamsize>::max();
void reset_cin() {
    // clear all error status bits
    std::cin.clear();
    // clear input buffer
    std::cin.ignore(max_size, '\n');
}
int main() {
    std::cout << "i? ";
    int i = 0;
    std::cin >> i;  // ← 1st

    if (std::cin.fail()) {
        reset_cin();
    }

    std::cout << "j? ";
    int j = 0;
    std::cin >> j;  // ← 2nd
    std::cout << "i: " << i << ", "
              << "j: " << j << '\n';
}