#include <iostream>
#include <string>
#include <vector>

/**
 * @brief The main function lvalue and rvalue
 * @param  W[int&, int&]
 * @param  X[const int&, int&]
 * @param  Y[int&, const int&]
 * @param  Z[int&, int&]
 * @param T
 * @author: Amer Andersson
 * @return 0 when program execution completes successfully.
 */

// Declares four types, W, X, Y, and Z. The constructor for each type takes
// a different combination of const and non-const lvalue references as its parameters.

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

// Properties of lvalue and rvalue references
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
