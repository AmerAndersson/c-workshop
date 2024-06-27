#include <iostream>

/**
 * Point Coordinate I/O
 * by overloading two functions with names operator<< and operator>>
 */
struct Point {
    int x;
    int y;
};

std::ostream& operator<<(std::ostream& os, Point const& p) {
    // write to stream
    return os << '(' << p.x << ',' << p.y << ')';
}

std::istream& operator>>(std::istream& is, Point& p) {
    // read from stream
    return is >> p.x >> p.y;
}

/**
 * Operators << and >> return a reference (to their stream parameter) to allow operator chaining:
 * cin  >> x >> y;  ⇔  operator>>( operator>>(cin, x), y)
 * cout << x << y;  ⇔  operator<<( operator<<(cout,x), y)
 */
int main(int argc, char const* argv[]) {
    Point p{1, 2};
    std::cout << p << '\n';  // prints (1,2)
    std::cin >> p;           // reads 2 ints into p.x and p.y
    return 0;
}
// Stream Operators
// operator functions for stream input/output of objects of type T:
/*
template <class T>
std::ostream& operator<<(std::ostream& os, T const& x) {
    // write to stream …
    return os;
}
template <class T>
std::istream& operator>>(std::istream& is, T& x) {
    // read from stream …
    return is;
}
*/