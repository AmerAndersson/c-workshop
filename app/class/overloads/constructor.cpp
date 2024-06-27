// overloading class constructors
#include <iostream>
using namespace std;

/**
 * The default constructor is the constructor that takes no parameters, and it is special
 * because it is called when an object is declared but is not initialized with any arguments.
 */
class Rectangle {
    int width, height;

   public:
    Rectangle();  // default constructor
    Rectangle(int, int);
    int area(void) { return (width * height); }
};

// default constructor
Rectangle::Rectangle() {
    width = 5;
    height = 5;
}
// Member initialization in constructors
Rectangle::Rectangle(int w, int l) : width(w), height(l) {}

int main() {
    // Rectangle rectb;    // default constructor called
    // Rectangle rectc();  // function declaration (default constructor NOT called)
    // Rectangle rectd{};  // default constructor called
    // Circle foo(10.0);   // functional form
    // Circle bar = 20.0;    // assignment init.
    // Circle baz{30.0};     // uniform init.
    // Circle qux = {40.0};  // POD-like

    Rectangle rect(3, 4);
    Rectangle rectb;  // ok, default constructor called
    cout << "rect area: " << rect.area() << endl;
    cout << "rectb area: " << rectb.area() << endl;
    return 0;
}