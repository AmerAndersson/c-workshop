#include <iostream>

/**
 * * Abstract base classes
 * Abstract base classes are something very similar to the Polygon class in the previous example.
 * They are classes that can only be used as base classes,
 * and thus are allowed to have virtual member functions without definition (known as pure virtual functions).
 * The syntax is to replace their definition by =0 (an equal sign and a zero).
 *
 * Notice that area has no definition; this has been replaced by =0, which makes it a pure virtual function.
 * Classes that contain at least one:
 * * pure virtual function are known as abstract base classes.
 * * Abstract base classes cannot be used to instantiate objects.
 * Therefore, this last abstract base class version of Polygon could not be used to declare objects like:
 * * Polygon mypolygon;   // not working if Polygon is abstract base class
 *
 * But an abstract base class is not totally useless.
 * It can be used to create pointers to it, and take advantage of all its polymorphic abilities.
 * For example, the following pointer declarations would be valid:
 * * Polygon * ppoly1;
 * * Polygon * ppoly2;
 * And can actually be dereferenced when pointing to objects of derived (non-abstract) classes.
 */

/// Abstract base class:
class Polygon {
   protected:
    int width, height;

   public:
    void set_values(int w, int l);
    virtual int area(void) = 0;
};

void Polygon::set_values(int w, int l) { (width = w, height = l); }

class Rectangle : public Polygon {
   public:
    int area(void);
};
int Rectangle::area(void) { return (width * height); }

class Triangle : public Polygon {
   public:
    int area(void);
};
int Triangle::area(void) { return (width * height / 2); }

class Square : public Polygon {
   public:
    int area(void);
};
int Square::area(void) { return (width * height); }

int main() {
    Rectangle rect;
    Triangle trgl;
    Square sqr;

    Polygon* ppoly1 = &rect;
    Polygon* ppoly2 = &trgl;
    Polygon* ppoly3 = &sqr;
    
    ppoly1->set_values(4, 5);
    ppoly2->set_values(4, 5);
    ppoly3->set_values(4, 4);

    std::cout << "Rect's area: ";
    std::cout << ppoly1->area() << '\n';

    std::cout << "Trgl's area: ";
    std::cout << ppoly2->area() << '\n';

    std::cout << "Sqr's area: ";
    std::cout << ppoly3->area() << '\n';
    return 0;
}
