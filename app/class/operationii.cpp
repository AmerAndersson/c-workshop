// non-member operator overloads
#include <iostream>
using namespace std;

/**
 * CVector& CVector::operator= (const CVector& param)
 * {
 *   x=param.x;
 * y=param.y;
 *  return *this;
 * }
 */
class CVector {
   public:
    int x, y;
    CVector() {}
    CVector(int a, int b);
    void display();
};
// function name CVector (constructor)
CVector::CVector(int a, int b) : x{a}, y{b} {}
// function that returns a CVector
CVector operator+(const CVector& lv, const CVector& rv) {
    CVector temp;
    temp.x = lv.x + rv.x;
    temp.y = lv.y + rv.y;
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