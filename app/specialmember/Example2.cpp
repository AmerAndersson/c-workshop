#include <iostream>

/**
 * The compiler assumes that Example has a default constructor.
 * Therefore, objects of this class can be constructed by simply declaring them without any arguments:
 * * Example ex;
 */
class Example {
   public:
    int total;
    int accumulate(int x) { return total += x; }
};

// But as soon as a class has some constructor taking any number of parameters explicitly declared,
// the compiler no longer provides an implicit default constructor,
// and no longer allows the declaration of new objects of that class without arguments.
//  * Example2 ex{100}; with arguments. // ok: calls constructor
class Example2 {
   public:
    int total;
    Example2(int initial_value) : total(initial_value){};
    void accumulate(int x) { total += x; };
};

int main(int argc, char const* argv[]) {
    Example ex;
    Example2 ex{100};  // ok: calls constructor
    return 0;
}
