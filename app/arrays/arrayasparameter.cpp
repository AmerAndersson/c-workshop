#include <iostream>

/**
 * @brief  Arrays are blocks of static memory whose size must be determined at compile time:
 * At some point, we may need to pass an array to a function as a parameter.
 * In C++, it is not possible to pass the entire block of memory represented by an array to a function directly as an argument.
 * But what can be passed instead is its address. In practice, this has almost the same effect,
 * and it is a much faster and more efficient operation.
 * @author: Amer Andersson
 * @conutry: Sweden
 * @date: 2024
 * @return 0 when program execution completes successfully.
 */

// Pass an arrays as parameters
void printarray(int arg[], int length);

int main() {
	/// Pass an arrays as parameters
	int firstarray[]{5, 10, 15};
	int secondarray[]{2, 4, 6, 8, 10};
	printarray(firstarray, 3);
	printarray(secondarray, 5);
	std::cout << "--------------" << std::endl;

	/// Library arrays

	return 0;
}

// To accept an array as parameter for a function,
// the parameters can be declared as the array type,
// but with empty brackets, omitting the actual size of the array.
// The first parameter (int arg[]) accepts any array whose elements are of type int,
// whatever its length. For that reason, we have included a second parameter that
// tells the function the length of each array that we pass to it as its first parameter.
// This allows the for loop that prints out the array to know the range to iterate in the array passed, without going out of range.
/*
 In a way, passing an array as argument always loses a dimension.
 The reason behind is that, for historical reasons, arrays cannot be directly copied,
 and thus what is really passed is a pointer. This is a common source of errors for novice programmers.
 Although a clear understanding of pointers, explained in a coming chapter, helps a lot.
 */
void printarray(int arg[], int length) {
	for (int n = 0; n < length; ++n) {
		std::cout << arg[n] << " ";
	}
	std::cout << "\n";
}