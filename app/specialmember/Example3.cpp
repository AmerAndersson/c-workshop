#include <iostream>
#include <string>

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

int main(int argc, char const* argv[]) {
    // default constructors
    Example3 foo;
    Example3 bar{"Constructors"};
    std::cout << "bar's content: " << bar.content() << '\n';
    return 0;
}
