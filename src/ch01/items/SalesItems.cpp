#include <iostream>
#include <memory>
#include <string>
#include <vector>

/**
 * @brief Introducing classes
 * The only remaining feature we need to understand before solving our bookstore
 * problem is how to define a data structure to represent our transaction data. In C++
 * we define our own data structures by defining a class. A class defines a type along
 * with a collection of operations that are related to that type. The class mechanism
 * is one of the most important features in C++. In fact, a primary focus of the design
 * of C++ is to make it possible to define class types that behave as naturally as the
 * built-in types. we’ll describe a simple class that we can use in writing our
 * bookstore program. For our bookstore problem, we’ll assume that the class is named SalesItem  and
 * that it is already defined in a header named SalesItem.h.
 * As we’ve seen, to use a library facility, we must include the associated header.
 * Similarly, we use headers to access classes defined for our own applications. Conventionally,
 * header file names are derived   from the name of a class defined in that header.
 * Header files that we write usually have a suffix of .h.
 * We’ll implement this class in later chapters as we learn more about (types, expressions, statements, and functions).
 * • To use a class we need to know three things:
 * • What is its name?
 * • Where is it defined?
 * • What operations does it support?
 * @author: Amer Andersson
 * @return 0 when program execution completes successfully.
 */


class SalesItems {
 private:
  std::string book_title;
  double units_sold = 0.0;
  double revenue = 0.0;

 public:
  SalesItems() = default;
  SalesItems(const std::string &book_title, double units_sold, double revenue)
      : book_title(book_title), units_sold(units_sold), revenue(revenue) {}

  std::string book_title;
  double units_sold = 0.0;
  double revenue = 0.0;
};
int main() {
  return 0;
}
