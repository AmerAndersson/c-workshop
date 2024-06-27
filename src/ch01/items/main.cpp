#include <iostream>

#include "SalesItems.h"

/**
 * Now that we know what operations we can use with SalesItems objects, we can
 * write programs that use the class. The following program reads data
 * from the standard input into a SalesItems object and writes that SalesItems
 * back onto the standard output:
 * Reading and Writing SalesItems
 * 0-201-78345-X 2 20.00
 * 0-201-78345-X 3 24.00
 * 0-201-70353-X 4 25.99
 * 0-201-70353-X 5 26.99
 * @author Amer Andersson
 */

/// represents a newline character.
const char newline = '\n';

int main() {
  /// create an empty SalesItems object.
  SalesItems item1, item2;

  /// Read ISBN, number of copies sold,
  /// and sales price. Read a pair of transactions.
  std::cout << "Enter SalesItems ISBN: ";
  std::cin >> item1 >> item2;

  /// Write ISBN, number of copies sold, total revenue, and average price.
  /// first check that item1 and item2 represent the same book.
  /// write the data back to the standard output and prints their sum.
  if (item1.isbn() == item2.isbn()) {
    std::cout << "Sum of all the trans: " << item1 + item2 << newline;
    return 0;  /// indicate success
  } else {
    std::cerr << "Data must refer to same ISBN" << newline;
    return -1;  /// indicate failure
  }
  return 0;
}
