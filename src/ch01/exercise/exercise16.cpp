#include <iostream>

int main() {
    // Write your own version of a program that prints the sum of a set of integers read from cin.
    // read until end-of-file, calculating a running total of all values read
    std::cout << "Exercise 1.16\n";
    int result = 0;
    std::cout << "Enter numbers: " << std::endl;
    for (int value = 0; std::cin >> value;) {
        result += value;
    }
    std::cout << "The sum is " << result << std::endl;
    return 0;
}