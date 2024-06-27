#include <iostream>

/**
 * Multiple inheritance
 * A class may inherit from more than one class by simply specifying more base classes,
 * separated by commas, in the list of a class's base classes (i.e., after the colon).
 * For example, if the program had a specific class to print on screen called Output,
 * and we wanted our classes Rectangle and Triangle to also inherit its members in addition
 * to those of Polygon we could write
 * -----------------------------------------------
 * * class Rectangle: public Polygon, public Output;
 * * class Triangle: public Polygon, public Output;
 * -----------------------------------------------
 */

// Multiple inheritance
// Base class
class Polygon {
   protected:
    int width, height;

   public:
    Polygon(int a, int b) : width(a), height(b) {}
};
class Output {
   public:
    static void print(int i);
};
void Output::print(int i) {
    std::cout << i << '\n';
}
// The inheritance relation has been declared
// using the public keyword on each of the derived classes
class Rectangle : public Polygon, public Output {
   public:
    Rectangle(int a, int b) : Polygon(a, b) {}
    int area() { return width * height; }
};

// The inheritance relation has been declared
// using the public keyword on each of the derived classes
class Triangle : public Polygon, public Output {
   public:
    Triangle(int a, int b) : Polygon(a, b) {}
    int area() { return width * height / 2; }
};
int main() {
    Rectangle rect(4, 5);
    Triangle trgl(4, 5);

    // Print Retctangle Area
    std::cout << "Rect'area: ";
    Rectangle::print(rect.area());

    // Print Triangle Area
    std::cout << "Trgl'area: ";
    Triangle::print(trgl.area());
    return 0;
}
