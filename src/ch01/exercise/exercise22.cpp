#include <iostream>

#include "SalesItems.h"
/**
 * Exercise 1.22: Write a program that reads several transactions for the same ISBN.
 * Write the sum of all the transactions that were read.
 * 0-201-78345-X 3 20.00
 * 0-201-78345-X 2 25.00
 */

int main() {
  // create an empty SalesItems object
  SalesItems sum;

  // prompt the user for all the ISBN
  std::cout << "Exercise 1.22\n";
  std::cout << "Enter sum of all ISBN:" << newline;

  // read the ISBN
  if (std::cin >> sum) {
    // create an empty SalesItems object
    SalesItems trans;
    // read the ISBN
    while (std::cin >> trans) {
      // if the ISBN is the same, add to the sum
      if (sum.isbn() == trans.isbn()) {
        sum += trans;
      } else {
        // if the ISBN is different, print the sum
        std::cout << "ISBN is different: " << sum << newline;
        sum = trans;
      }
    }
    // print the sum of all transactions
    std::cout << "Sum of all the trans: " << sum << newline;
  } else {
    // if the input is not valid, print an error message
    std::cerr << "Data must refer to same ISBN" << newline;
    return -1;  // return -1 to indicate an error or failure
  }

  return 0;
}