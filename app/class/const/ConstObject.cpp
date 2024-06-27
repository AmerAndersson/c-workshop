
#include <iostream>
/**
 * * constructor on const object
 * The member functions of a const object can only be called if they are themselves specified as const members;
 * To specify that a member is a const member, the const keyword shall follow the function prototype,
 * after the closing parenthesis for its parameters.
 * * int get() const {return x;}
 * Note that const can be used to qualify the type returned by a member function.
 * This const is not the same as the one which specifies a member as const.
 * Both are independent and are located at different places in the function prototype
 *
 * * int get() const {return x;}        // const member function
 * * const int& get() {return x;}       // member function returning a const&
 * * const int& get() const {return x;} // const member function returning a const&
 *
 * Member functions specified to be const cannot modify non-static data members nor call other non-const member functions.
 * In essence, const members shall not modify the state of an object.
 * const objects are limited to access only member functions marked as const, but non-const objects are not restricted
 * and thus can access both const and non-const member functions alike.
 * You may think that anyway you are seldom going to declare const objects,
 * and thus marking all members that don't modify the object as const is not worth the effort,
 * but const objects are actually very common. Most functions taking classes as parameters actually take them by const reference,
 * and thus, these functions can only access their const members.
 *
 * If in this example, get was not specified as a const member, the call to param.get()
 * in the print function would not be possible, because const objects only have access to const member functions.
 */
/// const objects
class ConstObject {
   private:
    int x;

   public:
    ConstObject(int val);
    const int& get() const { return x; }
};

ConstObject::ConstObject(int val) : x{val} {}
void print(const ConstObject& param) { std::cout << param.get() << '\n'; }

/**
 * * overloading members on constness
 * Member functions can be overloaded on their constness: i.e.,
 * a class may have two member functions with identical signatures except that one is const and the other is not:
 * in this case, the const version is called only when the object is itself const,
 * and the non-const version is called when the object is itself non-const.
 */
class MyClass {
   private:
    int x;

   public:
    MyClass(int val);
    const int& get() const { return x; }
    int& get() { return x; }
};
MyClass::MyClass(int val) : x{val} {}

int main() {
    // constructor on const object
    const ConstObject obj{15};
    print(obj);
    std::cout << "---" << '\n';

    // constructor on const object
    MyClass foo(10);
    const MyClass bar(30);
    foo.get() = 20;  // ok: get() returns int&
                     // bar.get() = 25;  //:not valid: get() returns const int&
    std::cout << foo.get() << '\n';
    std::cout << bar.get() << '\n';
    return 0;
}