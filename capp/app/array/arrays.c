
#include <stdio.h>

int main()
{
    //  Arrays
    int myNumbers[] = {20, 40, 35, 90};
    printf("The first: %d\n", myNumbers[0]);

    myNumbers[0] = 25;
    printf("New value: %d\n", myNumbers[0]);
    printf("---------------\n");

    // Making Better Loops
    int lengths = sizeof(myNumbers) / sizeof(myNumbers[0]);
    int i;

    for (i = 0; i < lengths; i++)
    {
        printf("%d\n", myNumbers[i]);
    }
    printf("---------------\n");

    // Set Array Size
    // Declare an array of four integers:
    int myNumber[4];
    // Add elements to it
    myNumber[0] = 25;
    myNumber[1] = 50;
    myNumber[2] = 75;
    myNumber[3] = 100;
    printf("The first: %d\n", myNumber[0]);
    printf("---------------\n");

    // Get Array Size or Length
    // Returns the size of a type in bytes: 20
    //(int 4 bytes x 5 elements) = 20 bytes. is memory size of an array.
    int myNum[] = {10, 25, 50, 75, 100};
    printf("size of a type in bytes: %lu\n", sizeof(myNum));
    printf("---------------\n");

    // Find out how many elements an array has,by using sizeof and it
    // divides the size of the array by the size of one array element)
    int length = sizeof(myNum) / sizeof(myNum[0]);
    printf("The length: %d\n", length); // Prints 5
    printf("---------------\n");

    // An array storing different ages
    int ages[] = {20, 22, 18, 35, 48, 26, 87, 70};
    float avg, sum = 0;
    int a;
    // Get the length of the array
    int leng = sizeof(ages) / sizeof(ages[0]);
    // Loop through the elements of the array and accumulate the sum
    for (int a = 0; a < leng; a++)
    {
        sum += ages[a];
    }

    // Calculate the average by dividing the sum by the length
    avg = sum / leng;
    // Print the average
    printf("The average age is: %.2f\n", avg);
    printf("---------------\n");

    // Finds the lowest age among different ages:
    // Get the length of the array
    int lengt = sizeof(ages) / sizeof(ages[0]);

    // Create a 'lowest age' variable and assign the first array element of ages to it
    int lowestAge = ages[0];

    // Loop through the elements of the ages array to find the lowest age
    for (int i = 0; i < lengt; i++)
    {

        // Check if the current age is smaller than current the 'lowest age'
        if (lowestAge > ages[i])
        {

            // If the smaller age is found, update 'lowest age' with that element
            lowestAge = ages[i];
        }
    }

    // Output the value of the lowest age
    printf("The lowest age in the array is: %d", lowestAge);

    return 0;
}