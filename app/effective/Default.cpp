#include <iostream>
#include <string>

/**
 * Member function	typical form for class C:
 * * Default constructor	C::C();
 * * Destructor	        C::~C();
 * * Copy constructor	C::C (const C&);
 * * Copy assignment    C& operator= (const C&);
 * * Move constructor   C::C (C&&);
 * * Move assignment    C& operator= (C&&);
 */

/// classes and default constructors
class DefaultConstructors {
    std::string data;

   public:
    DefaultConstructors(const std::string& str) : data(str) {}
    DefaultConstructors() {}  // default constructors without parameters
    const std::string& content() const { return data; }
};
/// copy constructor: deep copy
// The deep copy performed by this copy constructor allocates storage for a new string,
// which is initialized to contain a copy of the original object. In this way, both objects
// (copy and original) have distinct copies of the content stored in different locations.
// When an object is passed a named object of its own type as argument,
// its copy constructor is invoked in order to construct a copy
class DeepCopyConstructors {
    std::string* ptr;

   public:
    DeepCopyConstructors(const std::string& str) : ptr(new std::string(str)) {}
    // destructor:
    ~DeepCopyConstructors() { delete ptr; }
    // copy constructor:
    DeepCopyConstructors(const DeepCopyConstructors& x) : ptr(new std::string(x.content())) {}
    // access content:
    const std::string& content() const { return *ptr; }
};

int main() {
    DefaultConstructors foo;  // default constructors constructed without arguments
    DefaultConstructors bar("Default constructors");
    std::cout << "Bar's content: " << bar.content() << '\n';

    DeepCopyConstructors deepcopy("Copy constructors");
    DeepCopyConstructors deep = deepcopy;

    std::cout << "Deep's content: " << deep.content() << '\n';
    return 0;
}

/**
 * Copy assignment
 * * MyClass foo;
 * * MyClass bar(foo);   // object initialization: copy constructor called
 * * MyClass baz = foo;  // object initialization: copy constructor called
 * * foo = bar;          // object already initialized: copy assignment called
 *
 *  MyClass baz = foo; // call single-argument constructors.
 */