
#include <iostream>
#include <list>
#include <map>
#include <set>
#include <stack>
#include <string>
#include <vector>

class Vector {
   private:
    int sz;        // the size
    double* elem;  // a pointer to the elements

   public:
    Vector(int s);  // constructor
    ~Vector();      // destructor
};
// allocates memory
Vector::Vector(int s) : sz{s}, elem{new double[s]} {}
// deallocates memory
Vector::~Vector() { delete[] elem; }

int main(int argc, char const* argv[]) {
    std::vector v1 = {1.2, 7.89, 12.34};
    return 0;
}
