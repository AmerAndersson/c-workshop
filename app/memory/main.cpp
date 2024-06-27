// get_pointer_safety example
#include <iostream>
#include <memory>

/**
 * Returns the pointer safety setting used by the implementation,
 * as a value of type pointer_safety, which can take any of the following values:
* * value	          description
----------------------------------------------
* * relaxed:	     The validity of a pointer value does not depend on whether it is a safely-derived pointer value.
* * preferred:	     The validity of a pointer value does not depend on whether it is a safely-derived pointer value.
* * A leak detector may be running so that the program can avoid spurious leak reports.
* * strict:	        A pointer value that is not a safely-derived pointer value is an invalid pointer value unless the referenced complete object is of dynamic storage duration and has previously been declared reachable.
* * A garbage collector may be running so that non-traceable object are automatically deleted.
* A safely-derived pointer value is a pointer value returned by the default definition of operator new
* or a value derived from it by well-defined pointer arithmetic, pointer conversions
* or pointer reinterpretations (reinterpret_cast), including to and from other pointer types
* or integral types (at least as large as intptr_t), or from sequences of characters with the same size and alignment.
* When an implementation uses strict pointer safety, any object dynamically allocated using
* the default definition of operator new which cannot be traced either by a safely-derived pointer
* or an equivalent integer representation may be automatically destroyed, invalidating any pointer
* values that may point to it.
* Notice that his does not affect memory allocated dynamically by other means, such as using C-library's malloc
*  or custom redefinitions of operator new.
*/

int main() {
  std::cout << "Pointer safety: ";
  switch (std::get_pointer_safety()) {
    case std::pointer_safety::relaxed:
      std::cout << "relaxed";
      break;
    case std::pointer_safety::preferred:
      std::cout << "preferred";
      break;
    case std::pointer_safety::strict:
      std::cout << "strict";
      break;
  }
  std::cout << '\n';
  return 0;
}