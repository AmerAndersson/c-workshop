#include <iostream>

/**
 * * Polymorphism
 * -----------------------------------------------------
 *  * Statement:	         | Explained in:
 * ------------------------- | --------------------------
 *  * int A::b(int c) { }	 | Classes
 *  * a->b	                 | Data structures
 *  * class A: public B {};	 | Friendship and inheritance
 * -------------------------------------------------------
 * Pointers to base class
 * One of the key features of class inheritance is that a pointer to
 * a derived class is type-compatible with a pointer to its base class.
 * Polymorphism is the art of taking advantage of this simple but powerful and versatile feature.
 * Function main declares two pointers to Polygon (named ppolyr and ppolyt).
 * These are assigned the addresses of rect and trgl, respectively, which are objects of type Rectangle and Triangle.
 * Such assignments are valid, since both Rectangle and Triangle are classes derived from Polygon.
 * Dereferencing ppoly1  and ppoly2 (with ppoly1-> and ppoly2->) is valid and allows us to access the members of their pointed
 * --------------------------------------------------------------------
 * But because the type of both ppolyr and ppolyt is pointer to Polygon:
 * (and not pointer to Rectangle nor pointer to Triangle),
 * only the members inherited from Polygon can be accessed,
 * and not those of the derived classes Rectangle and Triangle.
 * That is why the program above accesses the area members of both objects using rect and trgl directly,
 * instead of the pointers; the pointers to the base class cannot access the area members.
 *
 * Member area could have been accessed with the pointers to Polygon,
 * if area were a member of Polygon instead of a member of its derived classes,
 * but the problem is that Rectangle and Triangle implement different versions of area,
 * therefore there is not a single common version that could be implemented in the base class.
 */

// pointers to base class
class Polygon {
   protected:
    int width, height;

   public:
    void set_values(int a, int b);
};
void Polygon::set_values(int a, int b) { width = a, height = b; }

class Rectangle : public Polygon {
   public:
    int area();
};
int Rectangle::area() { return width * height; }

class Triangle : public Polygon {
   public:
    int area();
};
int Triangle::area() { return width * height / 2; }

class Square : public Polygon {
   public:
    int area();
};
int Square::area() { return (width * height); }

int main() {
    /// Objects of type Rectangle and Triangle:
    Rectangle rect;
    Triangle trgl;
    Square sqr;
    /// These are assigned the addresses of rect and trgl:
    Polygon *ppoly1 = &rect;
    Polygon *ppoly2 = &trgl;
    Polygon *ppoly3 = &sqr;

    /// Dereferencing to access the members of their pointed:
    ppoly1->set_values(4, 5);
    ppoly2->set_values(4, 5);
    ppoly3->set_values(4, 4);

    /// Print out areas:
    std::cout << "Rect's area: ";
    std::cout << rect.area() << '\n';
    std::cout << "Trgl's area: ";
    std::cout << trgl.area() << '\n';
    std::cout << "Sqr's area: ";
    std::cout << sqr.area() << '\n';
    return 0;
}
