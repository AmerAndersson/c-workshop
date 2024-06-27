#include <iostream>

/**
 * * Virtual members
 * * A virtual member is a member function that can be redefined in a derived class,
 * * while preserving its calling properties through references.
 *
 * A function to become virtual is to precede its declaration with the virtual keyword:
 * All four classes (Polygon, Rectangle, Triangle and Square) have the same members: width, height,
 * and functions set_values and area. The member function area has been declared as virtual in the base class because,
 * it is later redefined in each of the derived classes. Non-virtual members can also be redefined in derived classes,
 * but non-virtual members of derived classes cannot be accessed through a reference of the base class: i.e.,
 * if virtual is removed from the declaration of area in the example above, all three calls to area would return zero,
 * because in all cases, the version of the base class would have been called instead. Therefore, essentially,
 ** Therefore, essentially, what the virtual keyword does is to allow a member of a derived class with the same name as one in the base class to be appropriately called from a pointer,
 ** and more precisely when the type of the pointer is a pointer to the base class that is pointing to an object of the derived class.
 * Note that despite of the virtuality of one of its members, Polygon was a regular class, of which even an object was instantiated (poly),
 * with its own definition of member area that always returns 0.
 */

// A class that declares a virtual function: is called a polymorphic class.
class Polygon {
   protected:
    int width, height;

   public:
    void set_values(int a, int b);
    virtual int area() { return 0; }
    
};
void Polygon::set_values(int a, int b) { (width = a, height = b); }

// A class that  inherits a virtual function: is called a polymorphic class.
class Rectangle : public Polygon {
   public:
    int area();
};
int Rectangle::area() { return (width * height); }

// A class that  inherits a virtual function: is called a polymorphic class.
class Triangle : public Polygon {
   public:
    int area();
};
int Triangle::area() { return (width * height / 2); }

// A class that  inherits a virtual function: is called a polymorphic class.
class Square : public Polygon {
   public:
    int area();
};
int Square::area() { return (width * height); }

int main() {
    Rectangle rect;
    Triangle trgl;
    Square sqr;
    Polygon poly;

    Polygon *ppoly1 = &rect;
    Polygon *ppoly2 = &trgl;
    Polygon *ppoly3 = &sqr;
    Polygon *ppoly4 = &poly;

    ppoly1->set_values(4, 5);
    ppoly2->set_values(4, 5);
    ppoly3->set_values(4, 4);
    ppoly4->set_values(4, 5);
    

    std::cout << "Rect's area: ";
    std::cout << ppoly1->area() << '\n';
    std::cout << "Trgl's area: ";
    std::cout << ppoly2->area() << '\n';
    std::cout << "Sqr's area: ";
    std::cout << ppoly3->area() << '\n';
    std::cout << "Poly's area: ";
    std::cout << ppoly4->area() << '\n';
    return 0;
}
