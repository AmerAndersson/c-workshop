#include <iostream>

#include "SalesItems.h"

/**
 * Exercises Section 1.5.2
 * Exercise 1.23
 * Write a program that reads several transactions and counts how many transactions occur for each ISBN.
 * 0-201-78345-X 2 20.00
 * 0-201-78345-X 3 24.00
 * 0-201-70353-X 4 25.99
 * 0-201-70353-X 5 26.99
 */

int main() {
  SalesItems item1, item2;

  std::cout << "Exercise 1.23\n";
  std::cout << "Enter ISBN: " << std::endl;
  if (std::cin >> item1) {
    int cnt = 1;
    while (std::cin >> item2) {
      if (item1.isbn() == item2.isbn()) {
        ++cnt;
      } else {
        std::cout << item1 << " occurs " << cnt << " times " << std::endl;
        item1 = item2;
        cnt = 1;
      }
    }
    std::cout << item1 << " occurs " << cnt << " times " << std::endl;
  }
  return 0;
}