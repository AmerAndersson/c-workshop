#include <stdio.h>

int main()
{
    // Create variables Data Types
    int myNum = 20;          // Integer (whole number)
    float myFloatNum = 5.99; // Floating point number
    char myLetter = 'A';     // Character

    printf("Hello World!\nI am learning C.\nAnd it is awesome!");
    printf("My favorite number is: %d\n", myNum);
    printf("My number is %d and my letter is %c\n", myNum, myLetter);
    printf("---------------------------\n");

    // Print variables
    printf("%d\n", myNum);
    printf("%.2f\n", myFloatNum);
    printf("%c\n", myLetter);
    printf("---------------\n");

    // Numeric Types
    int numI = 1000;
    float numF = 5.75;
    double numD = 19.99;

    printf("%d\n", numI);
    printf("%.3f\n", numF);
    printf("%.2lf\n", numD);
    printf("---------------\n");

    // Scientific Numbers
    float f1 = 35e3;
    double d1 = 12E4;
    printf("%f\n", f1);
    printf("%lf\n", d1);
    printf("---------------\n");

    int myInt = 15;
    int myOtherInt = 23;
    // Assign the value of myOtherNum (23) to myNum
    myInt = myOtherInt;
    // myNum is now 23, instead of 15
    printf("%d\n", myInt);
    printf("---------------\n");

    // Set Decimal Precision
    float myFloat = 3.5;
    double myDouble = 19.99;

    printf("%f\n", myFloat);   // Outputs 3.500000
    printf("%lf\n", myDouble); // Outputs 19.990000
    //remove the extra zeros
    printf("%f\n", myFloat);   // Default will show 6 digits after the decimal point
    printf("%.1f\n", myFloat); // Only show 1 digit
    printf("%.2f\n", myFloat); // Only show 2 digits
    printf("%.4f\n", myFloat); // Only show 4 digits
    printf("---------------\n");

    // Create a variable and assign the value 15 to it
    int mys = 15;
    // Declare a variable without assigning it a value
    int myOther;
    // Assign the value of myNum to myOtherNum copy values to empty variables:
    myOther = mys;

    // myOtherNum now has 15 as a value
    printf("%d\n", myOther);
    printf("---------------\n");

    int x = 5;
    int y = 6;
    int sum = x + y;
    printf("%d\n", sum);
    printf("---------------\n");

    int xs = 5, ys = 6, zs = 50;
    printf("%d\n", xs + ys + zs);
    printf("---------------\n");

    int x1, y1, z1;
    x1 = y1 = z1 = 50;
    printf("%d\n", x1 + y1 + z1);
    printf("---------------\n");

    // Good variable name
    int minutesPerHour = 60;
    printf("%d\n", minutesPerHour);
    printf("---------------\n");

    return 0;
}