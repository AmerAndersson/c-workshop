#include <iostream>

/**
 * * When an object of a class is qualified as a const object:
 * * const MyClass myobject;
 * The access to its data members from outside the class is restricted to read-only,
 * as if all its data members were const for those accessing them from outside the class.
 *  Note though, that the constructor is still called and is allowed to initialize and modify these data members:
 *
 */
class MyClass {
   public:
    int x;
    MyClass(int val);
    int get() { return x; }
    // member get (which is not specified as const) cannot be called from foo.
};
MyClass::MyClass(int val) : x{val} {}

int main() {
    // constructor on const object
    const MyClass foo{10};
    // foo.x = 20;            // not valid: x cannot be modified
    std::cout << foo.x << '\n';  // ok: data member x can be read

    return 0;
}