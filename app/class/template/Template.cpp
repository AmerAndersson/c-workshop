#include <iostream>

/**
 * * Class templates
 * @brief Just like we can create function templates, we can also create class templates,
 * allowing classes to have members that use template parameters as types.
 * The class that we have just defined serves to store two elements of any valid type.
 * If we wanted to declare an object of this class to store two integer values of
 * type int with the values 115 and 36 we would write.
 * template <class T>
 * class mypair {
 *   T values [2];
 * public:
 *  mypair (T first, T second)
 *  {
 *    values[0]=first; values[1]=second;
 *   }
 * };
 * * mypair<int> myobject (115, 36);
 * This same class could also be used to create an object to store any other type, such as:
 * * mypair<double> myfloats (3.0, 2.18);
 * The constructor is the only member function in the previous class template
 * and it has been defined inline within the class definition itself.
 * In case that a member function is defined outside the defintion of the class template,
 * it shall be preceded with the template <...> prefix
 *
 * There are three T's in this declaration:
 * The first one is the template parameter.
 * The second T refers to the type returned by the function.
 * And the third T (the one between angle brackets) is also a requirement:
 * It specifies that this function's template parameter is also the class template parameter.
 */

// ====================================
// class templates
// ====================================
template <class T>
class mypair {
   private:
    T x, y;

   public:
    mypair(T first, T second) : x{first}, y{second} {}
    T getmax();
};

// It specifies that this function's template
// parameter is also the class template parameter.
template <class T>
T mypair<T>::getmax() {
    T val;
    val = x > y ? x : y;
    return val;
}
// ====================================
// * Template specialization when a specific type is passed as template argument
// let's suppose that we have a very simple class
// called mycontainer that can store one element of
// any type and that has just one member function called increase,
// which increases its value. But we find that when it stores an element
// of type char it would be more convenient to have a completely different
// implementation with a function member uppercase, so we decide to declare
// a class template specialization for that type.
// ====================================
// class template:
template <class T>
class mycontainer {
   private:
    T element;

   public:
    mycontainer(T param) : element{param} {}
    T increase() { return ++element; }
};

// class template specialization:
template <>
class mycontainer<char> {
   private:
    char element;

   public:
    mycontainer(char param) : element{param} {}
    char uppercase() {
        if ((element > 'a') && (element <= 'z'))
            element += 'A' - 'a';
        return element;
    }
};

int main() {
    mypair<int> myobjects{90, 75};
    mypair<double> myfloats(3.0, 2.18);
    std::cout << myobjects.getmax() << '\n';
    std::cout << myfloats.getmax() << '\n';
    std::cout << "---" << std::endl;

    // class template specialization:
    mycontainer<int> myint(7);
    mycontainer<char> mychar('j');
    std::cout << myint.increase() << '\n';
    std::cout << mychar.uppercase() << '\n';
    return 0;
}