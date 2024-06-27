// move constructor/assignment
#include <iostream>
#include <string>

/**
 * Similar to copying, moving also uses the value of an object to set the value to another object.
 * But, unlike copying, the content is actually transferred from one object (the source) to the other (the destination):
 * the source loses that content, which is taken over by the destination. This moving only happens when the source of the value is an unnamed object.
 * Unnamed objects are objects that are temporary in nature, and thus haven't even been given a name.
 * Typical examples of unnamed objects are return values of functions or type-casts.
 * Using the value of a temporary object such as these to initialize another object or to assign its value, does not really require a copy:
 *  the object is never going to be used for anything else, and thus, its value can be moved into the destination object.
 * These cases trigger the move constructor and move assignments:
 * The move constructor is called when an object is initialized on construction using an unnamed temporary. Likewise,
 * the move assignment is called when an object is assigned the value of an unnamed temporary:
 *  * MyClass fn();            // function returning a MyClass object
 *  * MyClass foo;             // default constructor
 *  * MyClass bar = foo;       // copy constructor
 *  * MyClass baz = fn();      // move constructor
 *  * foo = bar;               // copy assignment
 *  * baz = MyClass();         // move assignment
 * Both the value returned by fn and the value constructed with MyClass are unnamed temporaries.
 * In these cases, there is no need to make a copy, because the unnamed object is very short-lived
 * and can be acquired by the other object when this is a more efficient operation.
 * The move constructor and move assignment are members that take a parameter of type rvalue reference to the class itself:
 * * MyClass (MyClass&&);             // move-constructor
 * * MyClass& operator= (MyClass&&);  // move-assignment
 * An rvalue reference is specified by following the type with two ampersands (&&).
 * As a parameter, an rvalue reference matches arguments of temporaries of this type
 * * The concept of moving is most useful for objects that manage the storage they use,
 * such as objects that allocate storage with new and delete.
 * In such objects,copying and moving are really different operations:
 *
 * 1. Copying from A to B means that new memory is allocated to B
 * and then the entire content of A is copied to this new memory allocated for B.
 * 2. Moving from A to B means that the memory already allocated to A is transferred to B
 * without allocating any new storage.It involves simply copying the pointer.
 *
 * Compilers already optimize many cases that formally require a move-construction call in
 * what is known as Return Value Optimization. Most notably, when the value returned by a function
 * is used to initialize an object. In these cases, the move constructor may actually never get called.
 * Note that even though rvalue references can be used for the type of any function parameter,
 * it is seldom useful for uses other than the move constructor. Rvalue references are tricky,
 * and unnecessary uses may be the source of errors quite difficult to track.
 *
 * * Implicit members
 * The six special members functions described above are members implicitly declared on classes under certain circumstances:
 * -------------------------------------------------------------------------------------------------------------------
 *  * Member function	  |  implicitly defined:	                                             | default definition:
 * ---------------------- |----------------------------------------------------------------------|--------------------
 *  * Default constructor |	if no other constructors	                                         |  does nothing
 *  * Destructor	      | if no destructor	                                                 |  does nothing
 *  * Copy constructor	  | if no move constructor and no move assignment	                     |  copies all members
 *  * Copy assignment	  | if no move constructor and no move assignment	                     |  copies all members
 *  * Move constructor	  | if no destructor, no copy constructor and no copy nor move assignmen |	moves all members
 *  * Move assignment	  | if no destructor, no copy constructor and no copy nor move assignmen |	moves all members
 * --------------------------------------------------------------------------------------------------------------------
 * Notice how not all special member functions are implicitly defined in the same cases.
 * This is mostly due to backwards compatibility with C structures and earlier C++ versions,
 * and in fact some include deprecated cases. Fortunately, each class can select explicitly
 * which of these members exist with their default definition or which are deleted by using the keywords default and delete,
 * respectively. The syntax is either one of:
 * * function_declaration = default;
 * * function_declaration = delete;
 * Here, Rectangle can be constructed either with two int arguments or be default-constructed (with no arguments).
 * It cannot however be copy-constructed from another Rectangle object, because this function has been deleted.
 * Therefore, assuming the objects of the last example, the following statement would not be valid:
 */

class Example6 {
   private:
    std::string *ptr;

   public:
    Example6(const std::string &str);
    ~Example6();
    // move constructor
    Example6(Example6 &&x) : ptr(x.ptr) { x.ptr = nullptr; }
    // move assignment
    Example6 &operator=(Example6 &&x) {
        delete ptr;
        ptr = x.ptr;
        x.ptr = nullptr;
        return *this;
    }
    // access content:
    const std::string &content() const { return *ptr; }
    // addition:
    Example6 operator+(const Example6 &rhs) {return Example6(content() + rhs.content());}
};
Example6::Example6(const std::string &str) : ptr(new std::string(str)) {}
Example6::~Example6() { delete ptr; }

/**
 * Notice how not all special member functions are implicitly defined in the same cases.
 * This is mostly due to backwards compatibility with C structures and earlier C++ versions,
 * and in fact some include deprecated cases. Fortunately, each class can select explicitly
 * which of these members exist with their default definition or which are deleted by using the keywords default and delete,
 * respectively. The syntax is either one of:
 * * function_declaration = default;
 * * function_declaration = delete;
 * Here, Rectangle can be constructed either with two int arguments or be default-constructed (with no arguments).
 * It cannot however be copy-constructed from another Rectangle object, because this function has been deleted.
 *
 * It could, however, be made explicitly valid by defining its copy constructor as:
 * * Rectangle::Rectangle (const Rectangle& other) = default;
 * Which would be essentially equivalent to:
 * * Rectangle::Rectangle (const Rectangle& other) : width(other.width), height(other.height) {}
 * Note that, the keyword default does not define a member function equal to the default constructor
 * (i.e., where default constructor means constructor with no parameters),
 * but equal to the constructor that would be implicitly defined if not deleted.
 * In general, and for future compatibility, classes that explicitly define one copy/move constructor or
 * one copy/move assignment but not both, are encouraged to specify either delete or default on the other
 * special member functions they don't explicitly define.
 */
// default and delete implicit members
class Rectangle {
    int width, height;

   public:
    Rectangle(int x, int y) : width(x), height(y) {}
    Rectangle() = default;
    Rectangle(const Rectangle &other) = delete;
    int area() { return width * height; }
};

int main(int argc, char const *argv[]) {
    Example6 foo("Exam");
    Example6 bar = Example6("ple");  // move-construction
    foo = foo + bar;                 // move-assignment
    std::cout << "Foo's content: " << foo.content() << '\n';
    std::cout << "-----------------" << std::endl;

    Rectangle rect;
    Rectangle arg(10, 20);

    std::cout << "Arg's area: " << arg.area() << '\n';
    return 0;
}
