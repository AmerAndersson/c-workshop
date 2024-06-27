#include <iostream>

class Shape {
   public:
    virtual double area() = 0;
};

class Square : public Shape {
   public:
    double side;

    Square(double s);
    double area();
};
Square::Square(double s) : side(s) {}
double Square::area() { return side * side; }

class Rectangle : public Shape {
   public:
    double width;
    double height;
    Rectangle(double w, double l);
    double area();
};
Rectangle::Rectangle(double w, double l) : width(w), height(l) {}
double Rectangle::area() { return (width * height); }

class Triangle : public Shape {
   public:
    double base;
    double height;

    Triangle(double b, double h);
    double area();
};
Triangle::Triangle(double b, double h) : base(b), height(h) {}
double Triangle::area() { return (base * height / 2); }

int main() {
    Shape *shapes[] = {
        new Square(5),
        new Rectangle(4, 5),
        new Triangle(4, 5)};
    for (int i = 0; i < 3; i++)
        std::cout << "#" << i << ": " << shapes[i]->area() << '\n';
    return 0;
}
