#include <iostream>
using namespace std;

int main() {
    // 1: Swap Numbers (Using Temporary Variable)
    int a1 = 5, b1 = 10, temp;

    cout << "Before swapping." << endl;
    cout << "a = " << a1 << ", b = " << b1 << endl;

    temp = a1;
    a1 = b1;
    b1 = temp;

    cout << "\nAfter swapping." << endl;
    cout << "a = " << a1 << ", b = " << b1 << endl;
    cout << "-----------------" << endl;

    // 2: Swap Numbers Without Using Temporary Variables
    int a = 5, b = 10;

    cout << "Before swapping." << endl;
    cout << "a = " << a << ", b = " << b << endl;

    a = a + b;
    b = a - b;
    a = a - b;

    cout << "\nAfter swapping." << endl;
    cout << "a = " << a << ", b = " << b << endl;
    cout << "-----------------" << endl;

    // 3: Swap using multiplication and division for swapping
    int as = 5, bs = 10;

    cout << "Before swapping." << endl;
    cout << "a = " << as << ", b = " << bs << endl;

    as = as * bs;  // a = 50
    bs = as / bs;  // b = 5
    as = as / bs;  // a = 10
    cout << "\nAfter swapping." << endl;
    cout << "a = " << as << ", b = " << bs << endl;

    return 0;
}