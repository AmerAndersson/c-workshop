#include <iostream>
#include <memory>
#include <string>
#include <vector>

/**
 * @brief  Rvalues correspond to temporary objects returned from functions,
 * while lvalues correspond to objects you can refer to, either by name or
 * by following a pointer or lvalue reference.
 * A useful heuristic to determine whether an expression is an lvalue is to ask if you can
 * take its address. If you can, it typically is. If you can’t, it’s usually an rvalue. A nice
 * feature of this heuristic is that it helps you remember that the type of an expression is
 * independent of whether the expression is an lvalue or an rvalue. That is, given a type
 * T, you can have lvalues of type T as well as rvalues of type T. It’s especially important
 * to remember this when dealing with a parameter of rvalue reference type, because the
 * parameter itself is an lvalue:
 * @author: Amer Andersson
 * @return 0 when program execution completes successfully.
 */

class Widget {
   public:
    Widget(Widget&& rhs);  // rhs is an lvalue, though it has an rvalue reference type
};

class Matrix {
   public:
    Matrix(Matrix&& rhs);  // rhs is an lvalue, though it has an rvalue reference type
};
Matrix operator+(const Matrix& lhs, const Matrix& rhs);  // lhs is an lvalue, rhs is an rvalue

template <class... Ts>                 // these are C++
void processVals(const Ts&... params)  // source code
{                                      // ellipses
}
int main(int argc, char const* argv[]) {
    /* code */
    return 0;
}
