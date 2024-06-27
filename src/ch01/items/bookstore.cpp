#include <iostream>
#include <string>

#include "SalesItems.h"

/**
 * @brief The main function.
 * We are now ready to solve our original bookstore problem. We need to read a
 * file of sales transactions and produce a report that shows, for each book,the total
 * number of copies sold, the total revenue, and the average sales price. We’ll assume
 * that all the transactions for each ISBN are grouped together in the input.
 * Our program will combine the data for each ISBN in a variable named total.
 * We’ll use a second variable named trans to hold each transaction we read. If
 * trans and total refer to the same ISBN, we’ll update total. Otherwise we’ll
 * print total and reset it using the transaction we just read:
 * ---------------------------------------------------------------------------------------------
 * * Reading a file of sales transactions and produce a report that shows, for each book.
 * * 1.the total number of copies sold,
 * * 2.the total revenue,
 * * 3.the average sales price.
 * ---------------------------------------------------------------------------------------------
 * Exercises Section 1.6
 * 0-201-78345-X 2 20.00
 * 0-201-78345-X 3 24.00
 * 0-201-70353-X 4 25.99
 * 0-201-70353-X 5 26.99
 * @author Amer Andersson
 */

const char newline = '\n';

int main() {
  /// total: to hold data for the next transaction
  SalesItems total;

  /// prompt user to enter ISBN
  std::cout << "Enter ISBN:\n";

  /// read the first transaction and ensure that there are data to process
  if (std::cin >> total) {
    SalesItems trans;  /// trans: to hold the running sum
    /// read and process the remaining transactions
    while (std::cin >> trans) {
      /// if we’re still processing the same book
      if (total.isbn() == trans.isbn()) {
        total += trans;  /// update the running total
      } else {
        /// print results for the previous book
        std::cout << "Previous Book: " << total << newline;
        /// reset total by assigning trans to it,total now refers to the next book
        total = trans;
      }
    }
    /// print the last transaction
    std::cout << "Last transaction: " << total << newline;
  } else {
    /// no input! warn the user
    std::cerr << "No input data?! " << newline;
    return -1;  /// indicate failure
  }
  return 0;
}
