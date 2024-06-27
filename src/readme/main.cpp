#include <iostream>
#include <memory>
#include <string>
#include <vector>

/**
 * @brief A program to solve a simple problem for a Bookstore
 * Our store keeps a file of transactions, each of which records the sale of one or
 * more copies of a single book. Each transaction contains three data elements:
 * * 0-201-70353-X 4 24.99
 * The first element is an ISBN (International Standard Book Number, a unique book
 * identifier), the second is the number of copies sold, and the last is the price at which
 * each of these copies was sold. From time to time, the bookstore owner reads this
 * file and for each book computes the number of copies sold, the total revenue from
 * that book, and the average sales price.
 * * 1. Define variables
 * * 2. Do input and output
 * * 3. se a data structure to hold the data
 * * 4. est whether two records have the same ISBN
 * * 5. Contain a loop that will process every record in the transaction file
 * We’ll start by reviewing how to solve these subproblems in C++ and then write our bookstore program.
 * @author: Amer Andersson
 * @return 0 when program execution completes successfully.
 */

// lavalue and rvalue

struct W {
  W(int&, int&) {}
};

struct X {
  X(const int&, int&) {}
};

struct Y {
  Y(int&, const int&) {}
};

struct Z {
  Z(const int&, const int&) {}
};
template <class T, class A1, class A2>
T* factory(A1&& a1, A2&& a2) {
  return new T(std::forward<A1>(a1), std::forward<A2>(a2));
}
int main() {
  int a = 4, b = 5;
  W* pw = factory<W>(a, b);
  X* px = factory<X>(2, b);
  Y* py = factory<Y>(a, 2);
  Z* pz = factory<Z>(2, 2);

  std::cout << pw << std::endl;
  std::cout << px << std::endl;
  std::cout << py << std::endl;
  std::cout << pz << std::endl;

  delete pw;
  delete px;
  delete py;
  delete pz;
  return 0;
}
