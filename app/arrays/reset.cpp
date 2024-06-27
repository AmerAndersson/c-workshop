
/*
 * The main program for application
 * @author Amer Andersson
 * @conutry: Sweden
 * @date: 2024
 */

#include <iostream>

// Give all element in the vector value 0:
void ResetArray(int *x, int size);

// THE MAIN FUNCTION:
int main()
{

    /*
     * Create dynamic vector and save
     * in a part of memory called the heap
     */

    // Assign the size of vector
    const int size = 5;
    int temperature[] = {17, -65, -20, 9, 42};

    // Print out all vector before reset:
    for (int i = 0; i < size; i++)
    {
        std::cout << temperature[i] << "\n";
    }
    std::cout << "---------------" << std::endl;

    // Calling function to reset:
    ResetArray(temperature, size);

    // Print out after reset:
    for (int i = 0; i < size; i++)
    {
        std::cout << temperature[i] << "\n";
    }

    return 0;
}

// Vector as argument in function
// Give all element in the vector value 0:
void ResetArray(int *x, int size)
{
    for (int i = 0; i < size; i++)
    {
        x[i] = 0;
    }
}