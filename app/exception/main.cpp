#include <exception>
#include <iostream>
#include <string>

/**
 * ---------------------------------------------------------------------------------------------
 * @brief  main program for executing C++ code, different errors can occur:
 * coding errors made by the programmer, errors due to wrong input, or other unforeseeable things.
 * When an error occurs, C++ will normally stop and generate an error message. The technical term for this is:
 * C++ will throw an exception (throw an error). Exception handling in C++ consist of three keywords: try, throw and catch:
 * The (try): statement allows you to define a block of code to be tested for errors while it is being executed.
 * The (throw): keyword throws an exception when a problem is detected, which lets us create a custom error.
 * The (catch): statement allows you to define a block of code to be executed, if an error occurs in the try block.
 * The (try and catch): keywords come in pairs:
 *-----------------------------------------------------------------------------------------------
 * @author: Amer Andersson
 * @conutry: Sweden
 * @date: 2024
 * @return 0 when program execution completes successfully:
 */
int main()
{
    const int age = 15;
    // Block of code to try
    try
    {
        if (age >= 18)
        {
            std::cout << "Access granted - you are old enough.";
        }
        else
        {
            throw(age); // Throw an exception when a problem arise
        }
    }
    // Block of code to handle errors
    catch (const int myNum)
    {
        std::cout << "Access denied - You must be at least 18 years old.\n"
                  << "Now your age is " << myNum << " years old.\n";
    }
    std::cout << "----------------------------------------" << std::endl;

    // If no error occurs (e.g. if age is 20 instead of 15,
    // meaning it will be be greater than 18), the catch block is skipped:
    const int ages = 20;
    // Block of code to try
    try
    {
        if (ages >= 18)
        {
            std::cout << "Access granted - you are old enough.\n";
        }
        else
        {
            throw(ages); // Throw an exception when a problem arise
        }
    }
    // Block of code to handle errors
    catch (const int myNums)
    {
        std::cout << "Access denied - You must be at least 18 years old.\n"
                  << "Now your age is " << myNums << " years old.\n";
    }
    std::cout << "----------------------------------------" << std::endl;

    /// Use the throw keyword to output a reference number,
    /// like a custom error number/code for organizing purposes:
    const int userAge = 15;
    try
    {
        if (userAge >= 18)
        {
            std::cout << "Access granted - you are old enough.\n";
        }
        else
        {
            throw 505;
        }
    }
    catch (const int myNum)
    {
        std::cout << "Access denied - You must be at least 18 years old.\n";
        std::cout << "Error number: " << myNum << std::endl;
    }
    std::cout << "----------------------------------------" << std::endl;

    /// Handle Any Type of Exceptions (...)
    /// If you do not know the throw type used in the try block, you can use the "three dots" syntax (...)
    /// inside the catch block, which will handle any type of exception:
    const int typeAge = 15;
    try
    {

        if (typeAge >= 18)
        {
            std::cout << "Access granted - you are old enough.";
        }
        else
        {
            throw 505;
        }
    }
    catch (...)
    {
        std::cout << "Access denied - You must be at least 18 years old.\n";
    }
    return 0;
}
