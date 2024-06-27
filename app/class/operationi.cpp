// overloading operators example
#include <iostream>

/**
 * It is also frequently used in operator= member functions that return objects by reference.
 * Following with the examples on cartesian vector seen before, its operator= function could have been defined as:
 * * CVector (int, int) : x(a), y(b) {}  // function name CVector (constructor)
 * * CVector operator+ (const CVector&); // function that returns a CVector
 * CVector& CVector::operator= (const CVector& param)
 * {
 *   x=param.x;
 * y=param.y;
 *  return *this;
 * }
 *  In fact, this function is very similar to the code that the compiler generates implicitly for this class for operator=.
 */
// operation of two cartesian vectors
struct CVector {
    int x, y;
    CVector(){};
    CVector(int a, int b);
    CVector operator+(const CVector&);
    void display();
};
// function name CVector (constructor)
CVector::CVector(int a, int b) : x{a}, y{b} {}
// function that returns a CVector
CVector CVector::operator+(const CVector& param) {
    CVector temp;
    temp.x = x + param.x;
    temp.y = y + param.y;
    return temp;
}
// function name display: x,y
void CVector::display() {
    std::cout << x << ',' << y << '\n';
}
int main() {
    CVector foo{3, 1}, bar{1, 2};
    CVector result = foo + bar;
    result.display();

    return 0;
}