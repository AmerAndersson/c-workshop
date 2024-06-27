// non-member operator overloads
#include <iostream>
using namespace std;

class CVector {
 public:
  int x, y;
  CVector() {}
  CVector(int a, int b) : x(a), y(b) {}
  CVector& operator=(const CVector&);
};

CVector operator+(const CVector& lhs, const CVector& rhs) {
  CVector temp;
  temp.x = lhs.x + rhs.x;
  temp.y = lhs.y + rhs.y;
  return temp;
}
CVector& CVector::operator=(const CVector& param) {
  x = param.x;
  y = param.y;
  return *this;
}
int main() {
  CVector foo(3, 1);
  CVector bar(1, 2);
  CVector result;
  result = foo + bar;
  cout << result.x << ',' << result.y << '\n';

  CVector foo1(3, 1);
  CVector bar1(1, 2);
  CVector result1;
  result1 = foo1 = bar1;
  cout << result1.x << ',' << result1.y << '\n';
  return 0;
}