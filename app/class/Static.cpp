// example on this
#include <iostream>
/**
 * * Static members
 * A static data member of a class is also known as a "class variable",
 * because there is only one common variable for all the objects of that same class,
 * sharing the same value: i.e., its value is not different from one object of this class to another
 * It may be used for a variable within a class that can contain a counter with the number of objects
 * of that class that are currently allocated.
 * In fact, static members have the same properties as non-member variables but they enjoy class scope.
 * For that reason, and to avoid them to be declared several times, they cannot be initialized directly in the class,
 * but need to be initialized somewhere outside it
 *
 * Classes can also have static member functions.
 * These represent the same: members of a class that are common to all object of that class,
 * acting exactly as non-member functions but being accessed like members of the class.
 * Because they are like non-member functions, they cannot access non-static members of the class
 * (neither member variables nor member functions). They neither can use the keyword this
 */

// static members in classes
class Dummy {
   public:
    static int n;
    Dummy() { n++; };
};
int Dummy::n = 0;
// Because it is a common variable value for all the objects of the same class,
// it can be referred to as a member of any object of that class or even directly by the class name
// (of course this is only valid for static members):

int main() {
    Dummy a;
    Dummy b[5];
    // These two calls above are referring to the same variable:
    // the static variable n within class Dummy shared by all objects of this class
    std::cout << a.n << '\n';
    Dummy* c = new Dummy;
    std::cout << Dummy::n;
    delete c;
    return 0;
}