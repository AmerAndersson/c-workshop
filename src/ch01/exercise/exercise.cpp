#include <iostream>

int main() {
    /*
     * Exercise 1.9: Write a program that uses a while
     * to sum the numbers from 50 to 100.
     */
    std::cout << "Exercise 1.9\n";
    int sum = 0;
    for (int num = 50; num <= 100; ++num) {
        sum += num;
    }
    std::cout << "The sum from 50 to 100 is " << sum << std::endl;
    std::cout << "============" << std::endl;

    /*
     * Exercise 1.10: Use the decrement operator to write a while
     * that prints the numbers from ten down to zero.
     */
    std::cout << "Exercise 1.10\n";
    for (int num = 10; num >= 0; --num) {
        std::cout << num << std::endl;
    }
    std::cout << "============" << std::endl;

    /*
     * Exercise 1.11: Write a program that prompts the user for two integers.
     * Print each number in the range specified by those two integers.
     */
    std::cout << "Exercise 1.11\n";
    int num1 = 0, num2 = 0;
    std::cout << "Please input 2 integers: ";
    std::cin >> num1 >> num2;

    // We make num1 <= num2
    if (num1 > num2) {
        int temp = num1;
        num1 = num2;
        num2 = temp;
    }

    // Print integers in the range [num1, num2]:
    for (; num1 <= num2; ++num1) {
        std::cout << num1 << std::endl;
    }
    std::cout << "============" << std::endl;
    return 0;
}