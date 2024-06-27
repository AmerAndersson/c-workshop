#include <iostream>

int main() {
    /**
     * Exercise 1.19
     * Revise the program you wrote for the exercises in § 1.4.1 (p. 13)
     * that printed a range of  numbers so that it handles input in which the first number is smaller * than the second.
     */
    std::cout << "Exercise 1.19\n";
    int small = 0, big = 0;
    std::cout << "Please input 2 integers: " << std::endl;
    std::cin >> small >> big;

    if (small > big) {
        int temp = small;
        small = big;
        big = small;
    }

    // Print integers in the range [num1, num2]:
    while (small <= big) {
        std::cout << small << std::endl;
        ++small;
    }
    return 0;
}