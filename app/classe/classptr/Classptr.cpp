#include <iostream>

/**
 *
 * Pointers to classes:
 * Objects can also be pointed to by pointers: Once declared, a class becomes a valid type,
 * so it can be used as the type pointed to by a pointer.
 * expression	can be read as
 * *x	pointed to by x
 * &x	address of x
 * x.y	member y of object x
 * x->y	member y of object pointed to by x
 * (*x).y	member y of object pointed to by x (equivalent to the previous one)
 * x[0]	first object pointed to by x
 * x[1]	second object pointed to by x
 * x[n]	(n+1)th object pointed to by x
 *
 * Similarly as with plain data structures,
 * the members of an object can be accessed directly from a pointer by using the arrow operator (->)
 */

const char newline = '\n';
// pointer to class Rectangle
class Rectangle {
 private:
  int width;
  int height;

 public:
  Rectangle(int, int);  // constructors
  int area() { return width * height; };
};

// Member initialization in constructors with uniform initializer
Rectangle::Rectangle(int w, int l) : width{w}, height{l} {}

int main() {
  // It is a pointer to an object of class Rectangle.
  Rectangle obj{3, 4};  // uniform init.
  Rectangle *foo, *bar, *baz;
  foo = &obj;

  bar = new Rectangle{5, 6};
  baz = new Rectangle[2]{{2, 5}, {3, 6}};
  std::cout << "obj's area: " << obj.area() << newline;
  std::cout << "*foo's area: " << foo->area() << newline;
  std::cout << "*bar's area: " << bar->area() << newline;
  std::cout << "baz[0]'s area: " << baz[0].area() << newline;
  std::cout << "baz[1]'s area: " << baz[1].area() << newline;
  delete bar;
  delete[] baz;

  return 0;
}
