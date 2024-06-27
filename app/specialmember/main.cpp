#include <iostream>
#include <string>

/**
 * * Member function	typical form for class C:
 * * Default constructor	C::C();
 * * Destructor	         C::~C();
 * * Copy constructor	   C::C (const C&);
 * * Copy assignment	   C& operator= (const C&);
 * * Move constructor	   C::C (C&&);
 * * Move assignment	   C& operator= (C&&);
 */

// The default constructor: is the constructor called when objects of a class are declared,
// but are not initialized with any arguments. If a class definition has no constructors,
// the compiler assumes the class to have an implicitly defined default constructor.
// objects of this class can be constructed by simply declaring them without any arguments:
// * DefaultConstructor df; without arguments.
class DefaultConstructor {
   public:
    int total;
    void accumulate(int x) { total += x; }
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

// if objects of this class need to be constructed without arguments,
// the proper default constructor shall also be declared in the class.
// * classes and default constructors
// This allows objects of class Example3 to be constructed without arguments (like foo was declared in this example).
// Normally, a default constructor like this is implicitly defined for all classes that have no other constructors
// and thus no explicit definition is required. But in this case, Example3 has another constructor:
// * Example3 (const string& str);
// And when any constructor is explicitly declared in a class, no implicit default constructors is automatically provided.

class Example3 {
    std::string data;

   public:
    Example3(const std::string& str) : data{str} {}
    Example3() {}  // default constructors
    const std::string& content() const { return data; }
};
/**
 * * Destructor
 * Destructors fulfill the opposite functionality of constructors:
 * They are responsible for the necessary cleanup needed by a class when its lifetime ends.
 * let's imagine that the class in the last example allocates dynamic memory to store the string it had as data member;
 * in this case, it would be very useful to have a function called automatically at the end of the object's life in charge of releasing this memory.
 * To do this, we use a destructor. A destructor is a member function very similar to a default constructor: it takes no arguments and returns nothing, not even void.
 * It also uses the class name as its own name, but preceded with a tilde sign (~):
 */
// * Destructors
class Example4 {
    std::string* ptr;

   public:
    // constructors:
    Example4() : ptr{new std::string} {}
    Example4(const std::string& str) : ptr{new std::string(str)} {}
    // destructor:
    ~Example4() { delete ptr; }
    // access content:
    const std::string& content() const { return *ptr; }
};

int main(int argc, char const* argv[]) {
    // default constructors
    Example3 foo;
    Example3 bar{"Constructors"};
    std::cout << "bar's content: " << bar.content() << '\n';

    // On construction, Example4 allocates storage for a string.
    // Storage that is later released by the destructor.
    // The destructor for an object is called at the end of its lifetime;
    // in the case of (arg and obj) this happens at the end of function main.
    Example4 arg;
    Example4 obj{"Destructors"};
    std::cout << "Obj's content: " << obj.content() << '\n';
    return 0;
}
