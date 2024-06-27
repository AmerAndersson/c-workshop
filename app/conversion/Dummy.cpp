#include <iostream>

/**
 * Explicit type-casting:
 * C++ is a strong-typed language. Many conversions,
 * specially those that imply a different interpretation of the value,
 * require an explicit conversion, known in C++ as type-casting.
 * There exist two main syntaxes for generic type-casting:
 * ------------
 * * functional
 * * c-like:
 * ------------
 * * double x = 10.3;
 * * int y;
 * * y = int (x);    // functional notation
 * * y = (int) x;    // c-like cast notatio
 * The functionality of these generic forms of type-casting is enough for most needs with fundamental data types.
 * However, these operators can be applied indiscriminately on classes and pointers to classes,
 * which can lead to code that -while being syntactically correct- can cause runtime errors.
 * For example, the following code compiles without errors:
 */

// Class type-casting
class Dummy {
    double i, j;
};

class Addition {
    int x, y;

   public:
    Addition(int a, int b);
    int result() { return x + y; }
};
Addition::Addition(int a, int b) : x(a), y(b) {}

int main() {
    Dummy d;
    Addition* padd;
    // explicit type-casting:
    padd = (Addition*)&d;
    std::cout << padd->result();
    return 0;
}

/**
 * The program declares a pointer to Addition, but then it assigns to it a reference to an object of another unrelated type using explicit type-casting:
 * * padd = (Addition*) &d;
 * Unrestricted explicit type-casting allows to convert any pointer into any other pointer type,
 * independently of the types they point to. The subsequent call to member result will produce either a run-time error or some other unexpected results.
 */