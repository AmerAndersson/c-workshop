# smart pointers:


uptr takes exclusive ownership of the dynamically allocated MyClass object.
When we move uptr to another_uptr, the ownership is transferred, 
and the MyClass object is automatically destroyed when another_uptr goes out of scope.

std::shared_ptr: Shared Ownership
std::shared_ptr represents shared ownership of a dynamically allocated object.
Multiple std::shared_ptrs can point to the same object, and the object is 
automatically deleted when the last std::shared_ptr that points to it goes out of scope or is reset.