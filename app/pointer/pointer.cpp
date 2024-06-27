
#include <iostream>

const char newline = '\n';

int main() {
    /**
     * The ariable which stores the address of another variable is called a pointer.
     * Pointers are said to "point to" the variable whose address they store.
     * Pointers are a very powerful feature of the language that has many uses in lower level programming.
     * A bit later, we will see how to declare and use pointers.
     * @*ptr
     * An interesting property of pointers is that they can be used to access the variable they point to directly.
     * @Dereference operator (*), the operator itself can be read as "value pointed to by":
     */

    // bar = ptr; : bar equal to ptr address
    // bar = *ptr; : bar equal to value pointed to by ptr (25)

    // The reference and dereference operators are thus complementary:
    // & is the address-of operator, and can be read simply as "address of"
    // * is the dereference operator, and can be read as "value pointed to by"
    // An address obtained with & can be dereferenced with *.
    // myvar == 25, &myvar == 1776, ptr == 1776, *ptr==25

    /*
     * Due to the ability of a pointer to directly refer to the value that it points to,
     * a pointer has different properties when it points to a char than when it points to an int or a float.
     * Once dereferenced, the type needs to be known. And for that, the declaration of a pointer needs to include
     * the data type the pointer is going to point to.
     */

    // Declaring pointers
    // int *number;
    // char *character;
    // double *decimals;

    int firstvalue = 5;
    int secondvalue = 15;
    int *ptr1;
    int *ptr2;

    ptr1 = &firstvalue;   // ptr1 = address of firstvalue
    ptr2 = &secondvalue;  // ptr2 = address of secondvalue
    *ptr1 = 10;           // value pointed to by ptr1 = 10
    *ptr2 = *ptr1;        // value pointed to by ptr2 = value pointed to by ptr1
    ptr1 = ptr2;          // ptr1 = ptr2 (value of pointer is copied)
    *ptr1 = 20;           // value pointed to by ptr1 = 20

    std::cout << "FirstValue: " << firstvalue << newline;
    std::cout << "SecondValue: " << secondvalue << newline;
    std::cout << "=============================" << newline;

    // Declaring pointers
    int firstValue;
    int secondValue;
    int *ptrvalue;

    ptrvalue = &firstValue;
    *ptrvalue = 30;
    ptrvalue = &secondValue;
    *ptrvalue = 40;

    // Dereference
    std::cout << "FirstValue: " << firstValue << newline;
    std::cout << "SecondValue: " << secondValue << newline;
    std::cout << "=============================" << newline;

    // When used in declaration (string* ptr), it creates a pointer variable.
    // When not used in declaration, it act as a dereference operator.int y = 42;
    // & reference
    // *dereference

    int x = 42;
    int *ptr = &x;
    std::cout << "X-Value: " << x << newline;
    std::cout << "X-Address: " << ptr << " is " << *ptr << newline;

    *ptr = 50;
    std::cout << "The x value is changed at " << ptr << " is " << *ptr << newline;
    *ptr = 99;
    std::cout << "The x value is changed at " << ptr << " is " << *ptr << newline;
    std::cout << "=============================" << newline;

    int y = 5;
    int *ptrs = &y;

    // Get Memory Address and Value
    std::cout << "Y-Value: " << y << newline;
    std::cout << "Address: " << ptrs << " is " << *ptrs << newline;
    *ptrs = 7;
    std::cout << "The y value is changed at " << ptrs << " is " << *ptrs << newline;

    *ptrs = 10;
    std::cout << "The y value is changed at " << ptrs << " is " << *ptrs << newline;

    *ptrs = 20;
    std::cout << "The y value is changed at " << ptrs << " is " << *ptrs << newline;
    std::cout << "Value: " << y << newline;

    return 0;
}