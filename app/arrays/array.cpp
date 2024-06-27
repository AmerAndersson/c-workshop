#include <iostream>

/**
 * @brief  Arrays are blocks of static memory whose size must be determined at compile time
 * @author: Amer Andersson
 * @conutry: Sweden
 * @date: 2024
 * @return 0 when program execution completes successfully.
 */

// THE MAIN FUNCTION:
int main() {
	/**
	 * ---------------------------------------------------------------------------------
	 * A bidimensional array can be imagined as a two-dimensional table made of elements,
	 * all of them of a same uniform data type. jimmy represents a bidimensional array of
	 * 3 per 5 elements of type int.
	 * ---------------------------------------------------------------------------------
	 */

	int jimmy[3][5];
	jimmy[1][3];
	/**
	 * --------------------------------------------------------------------------------------
	 * At the end, multidimensional arrays are just an abstraction for programmers,
	 * since the same results can be achieved with a simple array, by multiplying its indices:
	 ** int jimmy[3][5];  // is equivalent to
	 ** jimmy[15];  // (3 * 5 = 15)
	 *----------------------------------------------------------------------------------------
	 */

	/// Arrays as parameters

	int matrix[3][4];          // Matrix dimensional
	double arr3D[10][10][10];  // Three dimensional

	std::string letters[2][4] = {
	    {"A", "B", "C", "D"},
	    {"E", "F", "G", "H"}};

	std::cout << "Outputs: " << letters[0][2] << "\n";  // Outputs "C"

	letters[0][0] = "Z";
	std::cout << "outputs: " << letters[0][0] << "\n";  // Now outputs "Z" instead of "A"
	std::cout << "------------------" << std::endl;

	/// Loop Through a Multi-Dimensional Array
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 4; j++) {
			std::cout << letters[i][j] << "\n";
		}
	}
	std::cout << "------------------" << std::endl;

	/// shows how to loop through a three-dimensional array:
	std::string letter[2][2][2] = {{{"A", "B"}, {"C", "D"}}, {{"E", "F"}, {"G", "H"}}};

	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++) {
			for (int k = 0; k < 2; k++) {
				std::cout << letter[i][j][k] << "\n";
			}
		}
	}

	// Assign a one-dimensional vector that is 5 in size:
	int temperatures[] = {17, -65, -20, 9, 42};
	// Both these statements are equivalent:
	int foo1[] = {10, 20, 30};
	int foo2[]{10, 20, 30};
	// Create a one-dimensional vector that is 5 in size:
	int temperature[5];
	// Assign one dimension array:
	temperature[0] = 17;
	temperature[1] = -65;
	temperature[2] = -20;
	temperature[3] = 9;
	temperature[4] = 42;

	// Create a two-dimensional vector that is 6x4 in size:
	int gameBoard1[6][4];
	// Assign value
	gameBoard1[0][0] = 1;
	gameBoard1[0][1] = 1;
	gameBoard1[0][2] = 1;
	gameBoard1[0][3] = 0;
	gameBoard1[1][0] = 0;
	gameBoard1[1][1] = 0;

	// Create a two-dimensional vector that is 6x4 in size:
	const int width = 4;
	const int height = 6;
	int gameBoard[width][height] = {
	    {1, 0, 0, 1, 0, 0},
	    {1, 0, 0, 1, 0, 0},
	    {1, 0, 0, 0, 0, 0},
	    {0, 0, 1, 1, 1, 1}};

	// The outer for loop loops through the vector horizontally:
	for (int row = 0; row < width; row++) {
		// Print some nice stuff
		std::cout << "------------------" << std::endl;
		// The inner for loop loops through the vector vertically:
		for (int col = 0; col < height; col++) {
			// Print element at this particular position in vector:
			std::cout << "[" << gameBoard[row][col] << "]";
		}
		std::cout << std::endl;
	}
	std::cout << "------------------" << std::endl;

	int sum = 0;
	for (int i = 0; i < 5; i++) {
		sum += temperature[i];
	}
	std::cout << "Medel Temperature is: " << sum / 5 << "\n";
	std::cout << "------------------" << std::endl;

	return 0;
}
