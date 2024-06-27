// example on this
#include <iostream>

/**
 * * The keyword this
 * The keyword this represents a pointer to the object whose member function is being executed.
 * It is used within a class's member function to refer to the object itself.
 * One of its uses can be to check if a parameter passed to a member function is the object itself. For example:
 */
class Dummy {
   public:
    bool IsItem(Dummy& param);
};

bool Dummy::IsItem(Dummy& param) {
    if (&param == this)
        return true;
    else
        return false;
}

int main() {
    Dummy a;
    Dummy* b = &a;
    if (b->IsItem(a)) {
        std::cout << "Yes, &a is b\n";
    } else {
        std::cout << "No, &a is b\n";
    }
    return 0;
}