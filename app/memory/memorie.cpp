// rememb-o-matic
#include <iostream>

int main() {
    /**
     * Dynamic memory
     * In the programs seen in previous chapters, all memory needs were determined before program execution
     * by defining the variables needed. But there may be cases where the memory needs of a program can only be
     * determined during runtime. For example, when the memory needed depends on user input. On these cases,
     * programs need to dynamically allocate memory, for which the C++ language integrates the operators new and delete
     * * Operators new and new[]
     * * delete
     *
    // pointer = new type
    // pointer = new type[number_of_elements]
    // The first expression is used to allocate memory to contain one single element of type type.
    // The second one is used to allocate a block(an array) of elements of type type, where number_of_elements
    // is an integer value representing the amount of these:

    // In this case, the system dynamically allocates space for five elements of type int
    // and returns a pointer to the first element of the sequence, which is assigned to foo (a pointer).
    // Therefore, foo now points to a valid block of memory with space for five elements of type int
    */
    int* foo;
    foo = new int[5]{1, 2, 3, 4, 5};  // if allocation fails, an exception is thrown
    // accessed
    std::cout << foo[0] << std::endl;  // The first element can be accessed
    std::cout << *foo << std::endl;    // The first element can be accessed
    std::cout << "====" << std::endl;
    std::cout << foo[1] << std::endl;      // The second element can be accessed
    std::cout << *(foo + 1) << std::endl;  // The second element can be accessed
    std::cout << "====" << std::endl;
    std::cout << *(foo + 2) << std::endl;  // The third element can be accessed
    std::cout << *(foo + 3) << std::endl;  // The four element can be accessed
    std::cout << *(foo + 4) << std::endl;  // The five element can be accessed
    std::cout << &foo << std::endl;        // accessed address
    delete[] foo;

    /**
     * * Operators delete and delete[]
     * In most cases, memory allocated dynamically is only needed during specific periods of time
     * within a program; once it is no longer needed, it can be freed so that the memory becomes available again
     * for other requests of dynamic memory. This is the purpose of operator delete,
     * delete pointer;
     * delete[] pointer;
     * The first statement releases the memory of a single element allocated using new,
     * and the second one releases the memory allocated for arrays of elements using new and a size in brackets ([])
     */

    int i, n;
    int* p;
    std::cout << "How many numbers would you like to type? ";
    std::cin >> i;
    p = new (std::nothrow) int[i];
    if (p == nullptr)
        std::cout << "Error: memory could not be allocated";
    else {
        for (n = 0; n < i; n++) {
            std::cout << "Enter number: ";
            std::cin >> p[n];
        }
        std::cout << "You have entered: ";
        for (n = 0; n < i; n++)
            std::cout << p[n] << ", ";
        delete[] p;
    }
    return 0;
}