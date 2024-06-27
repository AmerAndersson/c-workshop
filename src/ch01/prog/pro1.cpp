#include <iostream>  // iostream library

/**
 * @brief  A while statement repeatedly executes
 * a section of code so long as a given condition is true.
 *  We can use a while to write a program to sum the numbers from 1 through 10 inclusive as follows:
 * @author: Amer Andersson
 * @return 0 when program execution completes successfully.
 */

int main() {
  // keep executing the while as long as val is less than or equal to 10:
  // assigns sum + val to sum
  // add 1 to val
  int sum = 0, val = 1;

  while (val <= 10) {
    sum += val;
    ++val;
  }
  std::cout << "==================================" << std::endl;
  std::cout << "Sum of 1 to 10 inclusive is " << sum << std::endl;
  std::cout << "==================================" << std::endl;

  //  Write a program that uses a while to sum the numbers from 50 to 100:
  int number = 0, start = 50;
  while (start <= 100) {
    number += start;
    ++start;
  }
  std::cout << "Sum of 50 to 100 inclusive is " << number << std::endl;
  std::cout << "==================================" << std::endl;

  // Use the decrement operator to write a while
  // that prints the numbers from ten down to zero
  int num = 10;

  while (num >= 0) {
    std::cout << "Numbers from 10  to zero is " << num << std::endl;
    --num;
  }
  std::cout << "==============================" << std::endl;

  // sum values from 1 through 10 inclusive
  // equivalent to sum = sum + val
  int sums = 0;

  for (int val2 = 1; val2 <= 10; val2++) {
    sums += val2;
  }
  std::cout << "Sum of 1 to 10 inclusive is " << sums << std::endl;
  std::cout << "==============================" << std::endl;

  // read until end-of-file, calculating a running total of all values read
  // equivalent to sum = sum + value
  int sum = 0, value = 0;

  std::cout << "Enter numbers: ";
  while (std::cin >> value) {
    sum += value;
  }
  std::cout << "Sum is: " << sum << std::endl;

  return 0;
}
