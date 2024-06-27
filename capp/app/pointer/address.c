#include <stdio.h>

/**
 * When a variable is created in C, a memory address is assigned to the variable.
 * The memory address is the location of where the variable is stored on the computer.
 * When we assign a value to the variable, it is stored in this memory address.
 * To access it, use the reference operator (&), and the result represents where the variable is stored:
 */
int main() {
    // Memory Address
    char fname[] = "John";
    printf("The memory address: %p\n", fname);  // Outputs the memory address of fname
    printf("The memory address: %p\n", &fname[0]);

    // Creating Pointers
    int myAges = 43;                                      // an int variable
    printf("Age: %d\n", myAges);                          // Outputs the value of myAge (43)
    printf("The memory address: %p\n", (void *)&myAges);  // Outputs the memory address of myAge
    printf("------------------\n");

    // Use the & operator to store the memory address
    // of the myAge variable, and assign it to the pointer.
    // ptr holds the value of myAge's memory address.

    int myAge = 43;     // Variable declaration
    int *ptr = &myAge;  //  Creates a pointer variable

    printf("%d\n", myAge);                               // Output the value of myAge (43)
    printf("The memory address: %p\n", (void *)&myAge);  // Output the memory address of myAge
    printf("The memory address: %p\n", (void *)ptr);     // Output the memory address of myAge with the pointer
    printf("------------------\n");

    // &Reference
    int userAge = 43;      // Variable declaration
    int *ptrs = &userAge;  // Creates a pointer variable

    // &Reference: Output the memory address of userAge with the pointer
    printf("Reference: %p\n", (void *)ptrs);
    // Dereference: Output the value of userAge with the pointer (43)
    printf("Dereference: %d\n", *ptrs);
    printf("------------------\n");

    // Pointers & Arrays
    int myNumbers[4] = {25, 50, 75, 100};
    int i;
    for (i = 0; i < 4; i++) {
        printf("The memory address: %p\n", (void *)&myNumbers[i]);  // Output the memory address of myNumbers
    }
    printf("------------------\n");
    // Create an int variable
    // The size of an int type is typically 4 bytes
    int myInt;
    // Get the memory size of an int
    printf("Bytes: %lu\n", sizeof(myInt));

    // The entire array takes up 16 bytes (4 * 4) of memory storage
    int myNumber[4] = {25, 50, 75, 100};
    // Get the size of the myNumbers array
    printf("Bytes: %lu\n", sizeof(myNumber));
    printf("------------------\n");

    // The memory address of the first element is the same as the name of the array:
    int myNum[5] = {25, 50, 75, 80, 100};
    // Get the memory address of the myNum array
    printf("The memory address: %p\n", (void *)myNum);
    // Get the memory address of the first array element
    printf("The memory address: %p\n", (void *)&myNum[0]);
    // Get the value of the first element in myNum
    printf("Value of the first element: %d\n", *myNum);

    // To access the rest of the elements in myNumbers,
    // you can increment the pointer/array (+1, +2, etc):
    // Get the value of the second element in myNumbers
    printf("Value of the second element: %d\n", *(myNum + 1));
    // Get the value of the third element in myNumbers
    printf("Value of the third element: %d\n", *(myNum + 2));
    // Get the value of the four element in myNumbers
    printf("Value of the four element: %d\n", *(myNum + 3));
    // Get the value of the five element in myNumbers
    printf("Value of the five element: %d\n", *(myNum + 4));
    printf("------------------\n");

    // loop through it:
    int myNums[5] = {25, 50, 75, 80, 100};
    int *pointer = myNums;
    int a;

    for (a = 0; a < 4; a++) {
        printf("%d\n", *(pointer + a));
    }
    printf("------------------\n");
    // It is also possible to change the value of array elements with pointers:
    // Change the value of the first element to 13
    *myNums = 13;

    // Change the value of the second element to 17
    *(myNums + 1) = 17;

    // Get the value of the first element
    printf("%d\n", *myNums);

    // Get the value of the second element
    printf("%d\n", *(myNums + 1));
    printf("------------------\n");
    return 0;
}