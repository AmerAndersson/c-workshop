#include <iostream>

// Pass by value: void(int x); Does not change the value
// Pass by references: void(double &rx, double &ry); The value is changing:
// Pass by pointer: void(double *px, double *py); The value is changing:
const char newline = '\n';

void swapValue(int x, int y);
void swapReference(double &x1, double &y1);
void swapPointer(double *x2, double *y2);
int main() {
    int x = 5, y = 6;
    swapValue(x, y);  // call pass by value:
    std::cout << x << y << newline;

    double a = 3.0;
    double b = 5.0;

    std::cout << "\nAfter swapping." << newline;
    swapReference(a, b);  // call pass by references:
    std::cout << "a = " << a << ", b = " << b << newline;

    std::cout << "Before swapping." << newline;
    swapPointer(&a, &b);  // call pass by pointer:
    std::cout << "a = " << a << ", b = " << b << newline;

    return 0;
}

// Pass by value: void(int x);
void swapValue(int x, int y) {
    int temp = x;
    x = y;
    y = temp;
}
// Pass by references: void(int& x);
void swapReference(double &x1, double &y1) {
    // Access variable by its alias name
    double temp = x1;
    x1 = y1;
    y1 = temp;
}
// Pass by pointer: void(int* x)
void swapPointer(double *x2, double *y2) {
    // Dereference pointer
    double temp = *x2;
    *x2 = *y2;
    *y2 = temp;
}