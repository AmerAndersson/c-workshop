#include <iostream>

/**
 * Virtual members and abstract classes grant C++ polymorphic characteristics,
 * most useful for object-oriented projects. Of course, the examples above are very simple use cases,
 * but these features can be applied to arrays of objects or dynamically allocated objects.
 * Here is an example that combines some of the features in the latest chapters,
 * such as dynamic memory, constructor initializers and polymorphism:
 * * Polygon* ppoly1 = new Rectangle (4,5);
 * * Polygon* ppoly2 = new Triangle (4,5);
 * * Polygon* ppoly3 = new Square(4, 4);
 * are declared being of type "pointer to Polygon",
 * but the objects allocated have been declared having the derived class type directly
 * (Rectangle,Triangle and Square).
 */

// Dynamic allocation and polymorphism
class Polygon {
   protected:
    int width;
    int height;

   public:
    Polygon(int w, int l);
    virtual int area(void) = 0;
    void printarea() { std::cout << this->area() << '\n'; }
};
Polygon::Polygon(int w, int l) : width(w), height(l) {}

class Rectangle : public Polygon {
   public:
    Rectangle(int w, int l);
    int area();
};
Rectangle::Rectangle(int w, int l) : Polygon(w, l) {}
int Rectangle::area() { return (width * height); }

class Triangle : public Polygon {
   public:
    Triangle(int w, int l);
    int area();
};
Triangle::Triangle(int w, int l) : Polygon(w, l) {}
int Triangle::area() { return (width * height / 2); }

class Square : public Polygon {
   public:
    Square(int w, int l);
    int area();
};
Square::Square(int w, int l) : Polygon(w, l) {}
int Square::area() { return (width * height); }

int main() {
    Polygon* ppoly1 = new Rectangle(4, 5);
    Polygon* ppoly2 = new Triangle(4, 5);
    Polygon* ppoly3 = new Square(4, 4);

    std::cout << "Rect's area: ";
    ppoly1->printarea();
    std::cout << "Trgl's area: ";
    ppoly2->printarea();
    std::cout << "Sqr's area: ";
    ppoly3->printarea();

    delete ppoly1;
    delete ppoly2;
    delete ppoly3;
    return 0;
}
