#include <iostream>

/**
 * Objects of different but related types are referred to using a unique type of pointer (Polygon*)
 * and the proper member function is called every time, just because they are virtual.
 * This can be really useful in some circumstances.
 * It is even possible for a member of the abstract base class Polygon
 * to use the special (pointer this) to access the proper virtual members,
 * even though Polygon itself has no implementation for this function:
 */

// -----------------------------------
// pure virtual members can be called
// from the abstract base class
// -----------------------------------
class Polygon {
   protected:
    int width, height;

   public:
    void set_values(int a, int b);
    virtual int area(void) = 0;
    void print_area() { std::cout << this->area() << '\n'; }
};
void Polygon::set_values(int a, int b) { (width = a, height = b); }

class Rectangle : public Polygon {
   public:
    int area(void);
};
int Rectangle::area(void) { return (width * height); }

class Triangle : public Polygon {
   public:
    int area(void);
};
int Triangle::area() { return (width * height / 2); }

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
    ppoly1->print_area();
    std::cout << "Trgl's area: ";
    ppoly2->print_area();

    std::cout << "Sqr's area: ";
    ppoly3->print_area();

    return 0;
}
