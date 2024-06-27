#include <iostream>

const char newline = '\n';
// A function that takes a pointer to non-const
// as parameter can modify the value passed as argument
void increment_all(int *start, int *stop);

// while a function that takes a pointer to const as parameter cannot.
void print_all(const int *start, const int *stop);

// void pointers with increase
void increase(void *data, int psize);

// pointer to functions
int addition(int a, int b);
// pointer to functions
int subtraction(int a, int b);
// pointer to functions
int operation(int x, int y, int (*functocall)(int, int));

int main() {
    /**
     * * Pointers and arrays
     * The concept of arrays is related to that of pointers.
     * In fact, arrays work very much like pointers to their first elements, and,
     *  actually, an array can always be implicitly converted to the pointer of the proper type
     * * int myarray [20];
     * * int *mypointer;
     * After that, mypointer and myarray would be equivalent and would have very similar properties.
     * The main difference being that mypointer can be assigned a different address,
     * whereas myarray can never be assigned anything, and will always represent the same block of 20 elements of type int.
     * Therefore, the following assignment would not be valid:
     * * mypointer = myarray
     *
     * These are the four possible combinations of the "dereference operator" with both the prefix and suffix
     * versions of the increment operator (the same being applicable also to the decrement operator):
     * *p++   // same as *(p++): increment pointer, and dereference unincremented address
     * *++p   // same as *(++p): increment pointer, and dereference incremented address
     * ++*p   // same as ++(*p): dereference pointer, and increment the value it points to
     * (*p)++ // dereference pointer, and post-increment the value it points to
     */

    int number[5];
    int *pointer;

    pointer = number;
    *pointer = 10;
    pointer++;
    *pointer = 20;
    pointer = &number[2];
    *pointer = 30;
    pointer = number + 3;
    *pointer = 40;
    pointer = number;
    *(pointer + 4) = 50;
    for (int r = 0; r < 5; r++) {
        std::cout << number[r] << std::endl;
    }

    /**
     * Pointers and arrays support the same set of operations, with the same meaning for both.
     * The main difference being that pointers can be assigned new addresses, while arrays cannot
     * In the chapter about arrays, brackets ([]) were explained as specifying the index of an element of the array.
     * Well, in fact these brackets are a dereferencing operator known as offset operator.
     *  They dereference the variable they follow just as * does, but they also add the number between brackets to the address being dereferenced
     *  a[5] = 0;  // a [offset of 5] = 0
     *  *(a + 5) = 0;  // pointed to by (a+5) = 0
     */
    std::cout << "=============================" << newline;

    /// Pointer initialization
    /// Pointers can be initialized to point to specific locations at the very moment they are defined:
    int myVar;
    int *myPtr = &myVar;
    std::cout << "MyPtrs: " << myPtr << newline;
    // The resulting state of variables after this code is the same as after:
    int myInt;
    int *myPtrs;
    myPtrs = &myInt;
    std::cout << "MyPtrs: " << myPtrs << newline;
    std::cout << "=============================" << newline;

    /// Pointers can be initialized either to the address of a variable,
    // or to the value of another pointer (or array):
    int myVars;
    int *foo = &myVars;
    int *bar = foo;
    std::cout << "Foo: " << foo << newline;
    std::cout << "Bar: " << bar << newline;
    std::cout << "=============================" << newline;

    /**
     * Pointer arithmetics
     * To conduct arithmetical operations on pointers is a little different than to conduct them on regular integer types.
     * To begin with, only addition and subtraction operations are allowed; the others make no sense in the world of pointers.
     * But both addition and subtraction have a slightly different behavior with pointers, according to the size of the data type to which they point.
     * When fundamental data types were introduced, we saw that types have different sizes. For example: char always has a size of 1 byte, short is generally larger than that,
     * and int and long are even larger; the exact size of these being dependent on the system. For example, let's imagine that in a given system, char takes 1 byte, short takes 2 bytes, and long takes 4.
     */

    /// Suppose now that we define three pointers in this compiler:
    // And that we know that they point to the memory locations 1000, 2000, and 3000, respectively.
    char *myChar;
    short *myShort;
    long *myLong;

    // postfix expression x++ / x--
    // prefix expression ++x / --x
    //  Only addition operations are allowed;
    //  * As a prefix, the increment happens before the expression is evaluated,
    //  * As a suffix, the increment happens after the expression is evaluated.
    ++myChar;
    ++myShort;
    ++myLong;

    // Only subtraction operations are allowed
    --myChar;
    --myShort;
    --myLong;

    std::cout << sizeof(*myChar) << newline;
    std::cout << sizeof(*myShort) << newline;
    std::cout << sizeof(*myLong) << newline;
    std::cout << "=============================" << newline;

    /**
     * One of the use cases of pointers to const elements is as function parameters:
     * a function that takes a pointer to non-const as parameter can modify the value passed as argument,
     * while a function that takes a pointer to const as parameter cannot.
     */

    int x;
    int *p1 = &x;              // non-const pointer to non-const int
    const int *p2 = &x;        // non-const pointer to const int
    int *const p3 = &x;        // const pointer to non-const int
    const int *const p4 = &x;  // const pointer to const int
    const int *p2a = &x;       //  non-const pointer to const int
    int const *p2b = &x;       // also non-const pointer to const int

    int numbers[] = {10, 20, 30};
    increment_all(numbers, numbers + 3);
    print_all(numbers, numbers + 3);
    std::cout << "=============================" << newline;
    // Pointers and const-qualified
    int xs;
    int y = 10;
    const int *p = &y;
    xs = *p;  // ok: reading p

    std::cout << "Y: " << &y << newline;
    std::cout << "X: " << xs << newline;
    std::cout << "P: " << *p << newline;
    std::cout << "=============================" << newline;

    /**
     * * Pointers and arrays
     * The concept of arrays is related to that of pointers.
     * In fact, arrays work very much like pointers to their first elements, and,
     *  actually, an array can always be implicitly converted to the pointer of the proper type
     */
    char msg[10] = "Hello";
    char *ptr;

    // After that, ptr and msg would be equivalent and would have very similar properties.
    // the following assignment would not be valid:
    ptr = msg;
    *ptr = 'M';
    ptr++;
    *ptr = 'A';
    ptr += 2;
    *ptr = 'K';
    std::cout << msg << newline;
    int arr[5] = {23, 5, 12, 34, 17};
    for (int i = 0; i < 5; i++) {
        std::cout << *(arr + i) << newline;
    }
    std::cout << "=============================" << newline;

    // Pointers and string literals
    const char *foos = "hello";
    std::cout << *(foos + 4) << std::endl;
    std::cout << foos[4] << std::endl;
    std::cout << "=============================" << newline;

    /**
     * Pointers to pointers
     * C++ allows the use of pointers that point to pointers, that these, in its turn, point to data (or even to other pointers). The * syntax simply requires an asterisk (*) for each level of indirection in the declaration of the pointer:
     */

    char a = 'z';
    char *b;
    char **cs;
    b = &a;
    cs = &b;

    std::cout << &b << newline;
    std::cout << cs << newline;
    std::cout << &cs << newline;
    std::cout << **cs << newline;
    /*
    c is of type char** and a value of 8092
    *c is of type char* and a value of 7230
    **c is of type char and a value of 'z
    */
    std::cout << "=============================" << newline;

    /*
    * void pointers
     The void type of pointer is a special type of pointer. In C++, void represents the absence of type. Therefore, void pointers are pointers that point to a value that has no type (and thus also an undetermined length and undetermined dereferencing properties). This gives void pointers a great flexibility, by being able to point to any data type, from an integer value or a float to a string of characters. In exchange, they have a great limitation: the data pointed to by them cannot be directly dereferenced (which is logical, since we have no type to dereference to), and for that reason, any address in a void pointer needs to be transformed into some other pointer type that points to a concrete data type before being dereferenced.
     */

    char c = 'x';
    int i = 1602;
    increase(&c, sizeof(c));
    increase(&i, sizeof(i));
    std::cout << "C: " << c << newline;
    std::cout << "I: " << i << newline;
    std::cout << "=============================" << newline;

    /**
     * * Invalid pointers and null pointers
     * In principle, pointers are meant to point to valid addresses,
     * such as the address of a variable or the address of an element in an array.
     * But pointers can actually point to any address, including addresses that do not refer to any valid element.
     * Typical examples of this are uninitialized pointers and pointers to nonexistent elements of an array:
     */

    // null pointer value. This value can be expressed in C++ in two ways:
    // either with an integer value of zero, or with the nullptr keyword:
    // Here, both ps and q are null pointers, meaning that they explicitly point to nowhere,
    // and they both actually compare equal: all null pointers compare equal to other null pointers
    int *ps = 0;
    int *q = nullptr;

    /**
     * * Pointers to functions
     * C++ allows operations with pointers to functions.
     * The typical use of this is for passing a function as an argument to another function.
     * Pointers to functions are declared with the same syntax as a regular function declaration,
     * except that the name of the function is enclosed between parentheses () and an asterisk (*) is inserted before the name:
     */

    int m;
    // In the example above, minus is a pointer to a function that has two parameters of type int.
    // It is directly initialized to point to the function subtraction:
    int (*minus)(int, int) = subtraction;
    m = operation(7, 5, addition);

    int n;
    n = operation(20, m, minus);
    std::cout << n << newline;

    return 0;
}
void increment_all(int *start, int *stop)

{
    int *current = start;
    while (current != stop) {
        ++(*current);  // increment value pointed
        ++current;     // increment pointer
    }
}
void print_all(const int *start, const int *stop) {
    const int *current = start;
    while (current != stop) {
        std::cout << *current << "\n";
        ++current;  // increment pointer
    }
}

// void pointers with increase
void increase(void *data, int psize) {
    if (psize == sizeof(char)) {
        char *pchar;
        pchar = (char *)data;
        ++(*pchar);
    } else if (psize == sizeof(int)) {
        int *pint;
        pint = (int *)data;
        ++(*pint);
    }
}

// pointer to functions
int addition(int a, int b) {
    return (a + b);
}
// pointer to functions
int subtraction(int a, int b) {
    return (a - b);
}
// pointer to functions
int operation(int x, int y, int (*functocall)(int, int)) {
    return (*functocall)(x, y);
}