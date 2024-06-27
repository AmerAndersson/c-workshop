#include <iostream>
#include <vector>
/**
 * @brief  std::vector, std::begin, std::end
 * For (1), the same as returned by cont.begin().
 * For (2), a pointer to the first element in the array.
 * * Data races
 * The argument is accessed but not modified.
 * None of the elements in the sequence are accessed by the call,
 * but the iterator returned can be used to access or modify them.
 * @author: Amer Andersson
 * @conutry: Sweden
 * @date: 2024
 * @return 0 when program execution completes successfully.
 */
int main() {
	// std::vector, std::begin, std::end
	std::vector<int> u{1, 2, 3, 4, 5};

	// iterate u2: inserting into u2
	std::cout << "VectI contains:";
	for (auto it = std::begin(u); it != std::end(u); ++it)
		std::cout << ' ' << *it;
	std::cout << '\n';

	// std::vector, std::begin, std::end
	std::vector<double> v{1, 2, 3, 4, 5};

	// iterate double: print contents:ss
	std::cout << "VectD contains:";
	for (auto it = std::begin(v); it != std::end(v); ++it)
		std::cout << ' ' << *it;
	std::cout << '\n';

	return 0;
}