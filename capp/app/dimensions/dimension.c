#include <stdio.h>

/*single dimension arrays or multidimensional arrays.*/

int main()
{
    // Two-Dimensional Arrays
    // Access the Elements of a 2D Array
    int matrix[2][3] = {{1, 4, 2}, {3, 6, 8}};
    // Change Elements in a 2D Array
    // matrix[0][0] = 9;
    printf("%d\n", matrix[0][0]);
    printf("%d\n", matrix[0][1]);
    printf("%d\n", matrix[0][2]);
    printf("---------------\n");

    printf("%d\n", matrix[1][0]);
    printf("%d\n", matrix[1][1]);
    printf("%d\n", matrix[1][2]);
    printf("---------------\n");

    // Get the length of the array
    int row = sizeof(matrix) / sizeof(matrix[0]);

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d\n", matrix[i][j]);
        }
    }

    return 0;
}
