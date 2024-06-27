#include <iostream>
#include <memory>

/**
 * A Smart Pointer is a wrapper class over a pointer with an operator like * and -> overloaded.
 * The objects of the smart pointer class look like normal pointers.
 * But, unlike Normal Pointers, it can deallocate and free destroyed object memory.
 *
 * 1.It’s a pointer-wrapping stack-allocated object. Smart pointers,
 * in plain terms, are classes that wrap a pointer, or scoped pointers.
 * 2.It destroys itself when it goes out of its scope
 * 3.Smart pointers are more efficient as they have an additional feature of memory management.
 * 4.They are automatic/pre-programmed in nature.
 */
int main() {
    /* std::unique_ptr<int> ptr = std::make_unique<int>(20);
    std::cout << *ptr << std::endl;
    std::cout << &ptr << std::endl; */

    std::shared_ptr<std::string> ptr = std::make_shared<std::string>("Hello");
    auto q = ptr;
    ptr = nullptr;

    if (q != nullptr) {
        std::cout << q->length() << ' ' << *q << '\n';
    }

    return 0;
}