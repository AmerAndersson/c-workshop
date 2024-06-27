#include <iostream>

#include "SalesItems.h"
/**
 * Exercise 1.21: Write a program that reads two Sales_item objects that have the
 * same ISBN and produces their sum.
 * 0-201-78345-X 3 20.00
 * 0-201-78345-X 2 25.00
 */

int main() {
  SalesItems item1, item2;

  std::cout << "Exercise 1.21\n";
  std::cout << "Please enter ISBN: ";
  std::cin >> item1 >> item2;
  if (item1.isbn() == item2.isbn()) {
    std::cout << item1 + item2 << newline;
  } else {
    std::cerr << "Input error: different ISBN.\n";
  }
}