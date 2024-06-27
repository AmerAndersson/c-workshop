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
 *
 * These issues could be solved with a copy assignment that
 * deletes the previous object and performs a deep copy:
 *
 *  Example5& operator= (const Example5& x) {
 *  delete ptr;                      // delete currently pointed string
 *  ptr = new string (x.content());  // allocate space for new string, and copy
 *  return *this;
 * }
 *
 *  Or even better, since its string member is not constant, it could re-utilize the same string object:
 *  Example5& operator= (const Example5& x) {
 *  *ptr = x.content();
 *  return *this;
 * }
 *
 * * Move constructor and assignment
 * Using the value of a temporary object such as these to initialize another
 * object or to assign its value, does not really require a copy: the object
 * is never going to be used for anything else, and thus, its value can be moved
 * into the destination object. These cases trigger the move constructor and move assignments:
 * The move constructor is called when an object is initialized on construction using an unnamed
 * temporary. Likewise, the move assignment is called when an object is assigned the value of an
 * unnamed temporary:
 *
 * * MyClass fn();            // function returning a MyClass object
 * * MyClass foo;             // default constructor
 * * MyClass bar = foo;       // copy constructor
 * * MyClass baz = fn();      // move constructor
 * * foo = bar;               // copy assignment
 * * baz = MyClass();         // move assignment
 * Both the value returned by fn and the value constructed with MyClass are unnamed temporaries.
 * In these cases, there is no need to make a copy, because the unnamed object is very short-lived
 * and can be acquired by the other object when this is a more efficient operation.
 * The move constructor and move assignment are members that take a parameter of type rvalue
 * reference to the class itself:
 * * MyClass (MyClass&&);             // move-constructor
 * * MyClass& operator= (MyClass&&);  // move-assignment
 * An rvalue reference is specified by following the type with two ampersands
 * (&&). As a parameter, an rvalue reference matches arguments of temporaries of this type.
 * The concept of moving is most useful for objects that manage the storage they use, such as
 * objects that allocate storage with new and delete. In such objects, copying and moving are
 * really different operations:
 * - Copying from A to B means that new memory is allocated to B and then the entire content of A is copied to this new memory allocated for B.
 * - Moving from A to B means that the memory already allocated to A is transferred to B without allocating any new storage. It involves simply copying the pointer.
 */

// Move constructor and assignment
class MoveConstructors {
    std::string* ptr;

   public:
    MoveConstructors(const std::string& str) : ptr(new std::string(str)) {}
    ~MoveConstructors() { delete ptr; }
    // move constructor
    MoveConstructors(MoveConstructors&& x) : ptr(x.ptr) { x.ptr = nullptr; }
    // move assignment
    MoveConstructors& operator=(MoveConstructors&& x) {
        delete ptr;
        ptr = x.ptr;
        x.ptr = nullptr;
        return *this;
    }
    // access content:
    const std::string& content() const { return *ptr; }
    // addition:
    MoveConstructors operator+(const MoveConstructors& rhs) {
        return MoveConstructors(content() + rhs.content());
    }
};

int main(int argc, char const* argv[]) {
    MoveConstructors foo("Exam");
    MoveConstructors bar = MoveConstructors("ple");  // move-construction
    foo = foo + bar;                                 // move-assignment
    std::cout << "foo's content: " << foo.content() << '\n';
    return 0;
}
