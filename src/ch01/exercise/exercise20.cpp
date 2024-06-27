#include <iostream>

#include "SalesItems.h"
/**
 * Exercise 1.20: <http://www.informit.com/title/0321714113> contains a copy
 * of Sales_item.h in the Chapter 1 code directory. Copy that file to your working
 * directory. Use it to write a program that reads a set of book sales transactions, writing
 * each transaction to the standard output.
 */

int main() {
  // Prints the result of two items.
  // Create two an empty SalesItems objects.
  // Read ISBN, number of copies sold,
  // and sales price.

  SalesItems item;

  std::cout << "Exercise 1.20\n";
  std::cout << "Please enter ISBN: ";
  while (std::cin >> (item)) {
    std::cout << "Items is: " << item << newline;
  }
  // for (SalesItems item; std::cin >> item; std::cout << item << newline);

  return 0;
}