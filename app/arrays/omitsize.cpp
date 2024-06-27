#include <iostream>
#include <string>


/*
 * The main program for application
 * @author Amer Andersson
 * @conutry: Sweden
 * @date: 2024
 */
int main()
{
    /// Omit Array Size
    std::string car[] = {"Volvo", "BMW", "Ford"}; // Three array elements
    /// create an array of three integers
    int myNum[3] = {10, 20, 30};
    /// create an array of size 4

    /// Omit Elements on Declaration
    std::string cars[5];
    cars[0] = "Volvo";
    cars[1] = "BMW";
    cars[2] = "Ford";
    cars[3] = "Mazda";
    cars[4] = "Tesla";
    for (int i = 0; i < 5; i++)
    {
        std::cout << cars[i] << "\n";
    }
    std::cout << "==============" << std::endl;

    /// Get the Size of an Array, 4 bytes x 5 elements) = 20 bytes.
    int myNumbers[5] = {10, 20, 30, 40, 50};
    std::cout << sizeof(myNumbers) << " Bytes:" << std::endl;
    std::cout << "==============" << std::endl;

    /// To find out how many elements an array has,
    /// you have to divide the size of the array by the size of the data type it contains:
    int getArrayLength = sizeof(myNumbers) / sizeof(int);
    std::cout << getArrayLength << " Elements:" << std::endl;
    std::cout << "==============" << std::endl;

    /// Loop Through an Array with sizeof()
    ///  by using the sizeof() approach from the example above,
    ///  we can now make loops that work for arrays of any size, which is more sustainable.
    for (int i = 0; i < sizeof(myNumbers) / sizeof(int); i++)
    {
        std::cout << myNumbers[i] << "\n";
    }
    std::cout << "==============" << std::endl;
    
    /// Note that, in C++ version 11 (2011), you can also use the "for-each" loop:
    for (int i : myNumbers)
    {
        std::cout << i << "\n";
    }
    return 0;
}
