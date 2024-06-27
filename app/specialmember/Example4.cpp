#include <iostream>
#include <string>

/**
 * * Destructor
 * Destructors fulfill the opposite functionality of constructors:
 * They are responsible for the necessary cleanup needed by a class when its lifetime ends.
 *
 * let's imagine that the class in the last example allocates dynamic memory to store the string it had as data member;
 * in this case, it would be very useful to have a function called automatically at the end of the object's life in charge of releasing this memory.
 * we use a destructor. A destructor is a member function very similar to a default constructor:
 * it takes no arguments and returns nothing, not even void.
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
    // On construction, Example4 allocates storage for a string.
    // Storage that is later released by the destructor.
    // The destructor for an object is called at the end of its lifetime;
    // in the case of (foo and bar) this happens at the end of function main.
    Example4 foo;
    Example4 bar{"Destructors"};
    std::cout << "Bar's content: " << bar.content() << '\n';
    return 0;
}

/**
 * * This default copy constructor may suit the needs of many classes.
 * This default copy constructor may suit the needs of many classes.
 * But shallow copies only copy the members of the class themselves,
 * and this is probably not what we expect for classes like class Example4 we defined above,
 * because it contains pointers of which it handles its storage.
 * For that class, performing a shallow copy means that the pointer value is copied,
 * but not the content itself; This means that both objects (the copy and the original)
 * would be sharing a single string object (they would both be pointing to the same object),
 * and at some point (on destruction) both objects would try to delete the same block of memory,
 * probably causing the program to crash on runtime.
 */
