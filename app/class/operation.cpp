// overloading operators example
#include <iostream>
/**
 * CVector& CVector::operator= (const CVector& param)
 * {
 *   x=param.x;
 * y=param.y;
 *  return *this;
 * }
 */

// operation of two cartesian vectors
class CVector {
   public:
    int x, y;
    CVector(){};
    CVector(int a, int b);
    CVector operator+(const CVector&);
    CVector operator-(const CVector&);
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
// function that returns a CVector
CVector CVector::operator-(const CVector& param) {
    CVector temp;
    temp.x = x - param.x;
    temp.y = y - param.y;
    return temp;
}
// function name display: x,y
void CVector::display() {
    std::cout << x << ',' << y << '\n';
}

int main() {
    CVector foo{4, 3}, bar{2, 1};
    CVector plus = foo + bar;
    plus.display();
    CVector minus = foo - bar;
    minus.display();
    return 0;
}