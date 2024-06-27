#include <iostream>

/**
 * * Classes
 * Classes are an expanded concept of data structures: like data structures,
 * they can contain data members, but they can also contain functions as members.
 * An object is an instantiation of a class. In terms of variables, a class would be the type,
 * and an object would be the variable.
 * * private members:
 * are accessible only from within other members of the same class (or from their "friends").
 * * protected members:
 * are accessible from other members of the same class (or from their "friends"),
 * but also from members of their derived classes.
 * * public members:
 *  are accessible from anywhere where the object is visible
 * By default, all members of a class declared with the class keyword have private access for all its members
 *
 * Classes allow programming using object-oriented paradigms:
 * Data and functions are both members of the object, reducing the need to pass and carry handlers
 * or other state variables as arguments to functions, because they are part of the object whose member is called.
 * Notice that no arguments were passed on the calls to rectA.area or rectB.area.
 * Those member functions directly used the data members of their respective objects rectA and rectB.
 *
 * In order to avoid that, a class can include a special function called its constructor, which is automatically
 * called whenever a new object of this class is created, allowing the class to initialize member variables or allocate storage
 * This constructor, with a name that matches the class name and without any return type; not even void.
 * The constructors are only executed once, when a new object of that class is created.
 */

const char newline = '\n';
// Declaration of class Rectangle:
// scope operator (::, two colons)
// classes and uniform initialization
class Rectangle {
 private:
  int length;
  int width;

 public:
  Rectangle(int l, int w);  /// constructors
  int get_area() { return length * width; };
};

// Member initialization in constructors with uniform initializer
Rectangle::Rectangle(int l, int w) : length{l}, width{w} {}

class Triangle {
  double base;
  double height;

 public:
  Triangle(double b, double h);  // constructors
  double get_area() { return base * height / 2; }
};
// Member initialization in constructors with uniform initializer
Triangle::Triangle(double b, double h) : base{b}, height{h} {}

// classes and uniform initialization
class Circle {
 private:
  double radius;

 public:
  Circle(double r);  // constructors
  double get_area() { return radius * radius * 3.14159265; }
};
// Member initialization in constructors with uniform initializer
Circle::Circle(double r) : radius{r} {}

// classes and uniform initialization
class Cylinder {
  Circle base;
  double height;

 public:
  Cylinder(double r, double h);  // constructors
  double volume() { return base.get_area() * height; }
};

// Member initialization in constructors with uniform initializer
Cylinder::Cylinder(double r, double h) : base{r}, height{h} {}

int main() {
  /// Two instances of Rectangle (rectA & rectB):
  Rectangle rectA{5, 4};  // uniform init.
  Rectangle rectB{3, 6};  // uniform init.
  Triangle triA{3, 4};    // uniform init.

  std::cout << "RectA area: " << rectA.get_area() << newline;
  std::cout << "RectB area: " << rectB.get_area() << newline;
  std::cout << "triA area: " << triA.get_area() << newline;

  Cylinder foo(10, 20);  // functional form.
  Cylinder baz{11, 30};  // uniform init.

  std::cout << "foo's  volume: " << foo.volume() << newline;
  std::cout << "baz's  volume: " << baz.volume() << newline;

  return 0;
}