#include <iostream>
#include <string>

/**
 * * copy constructor: deep copy
 * This can be solved by defining the following custom copy constructor that performs a deep copy:
 * The deep copy performed by this copy constructor allocates storage for a new string,
 * which is initialized to contain a copy of the original object. In this way, both objects (copy and original)
 * have distinct copies of the content stored in different locations.
 */

class Example5 {
   private:
    std::string* ptr;

   public:
    // constructor:
    Example5(const std::string& str);
    // destructor:
    ~Example5();
    // copy constructor:
    Example5(const Example5& x);
    // access content:
    const std::string& content() const { return *ptr; }
};
// constructor:
Example5::Example5(const std::string& str) : ptr{new std::string(str)} {}

// copy constructor: deep copy
Example5::Example5(const Example5& x) : ptr{new std::string(x.content())} {}

Example5::~Example5() { delete ptr; }

int main(int argc, char const* argv[]) {
    // Create an objects of deep copy constructor:
    Example5 foo{"Copy-constructor: deep copy"};
    Example5 bar = foo;  // object initialization: copy constructor called
    std::cout << "Bar's content: " << bar.content() << '\n';
    return 0;
}
