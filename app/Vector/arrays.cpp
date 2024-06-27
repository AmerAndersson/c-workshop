#include <array>
#include <cstring>
#include <iostream>

/**
 * @brief  Arrays are blocks of static memory whose size must be determined at compile time
 * C++ provides an alternative array type as a standard container.
 * It is a type template (a class template, in fact) defined in header <array>.
 * @author: Amer Andersson
 * @conutry: Sweden
 * @date: 2024
 * @return 0 when program execution completes successfully.
 */

int main() {
    std::array<int, 5> myarray{2, 16, 77, 34, 50};

    // Returns an iterator pointing to the first element in the array container.
    // array::begin and array::end
    std::cout << "myarray contains:";
    for (auto it = myarray.begin(); it != myarray.end(); ++it)
        std::cout << ' ' << *it;
    std::cout << '\n';
    std::cout << "--------------------------------" << std::endl;

    // array::front and array::back
    // The reference returned can be used to access or modify elements.
    // Concurrently accessing or modifying different elements is safe.
    // array::front and array::back
    std::cout << "front is: " << myarray.front() << std::endl;  // 2
    std::cout << "back is: " << myarray.back() << std::endl;    // 50

    // A reference to the first element in the array
    myarray.front() = 100;
    std::cout << "myarray now contains:";
    for (int& x : myarray) std::cout << ' ' << x;
    std::cout << '\n';
    std::cout << "--------------------------------" << std::endl;

    std::array<int, 5> myarrays = {15, 720, 801, 1002, 3502};
    // Member type const_iterator is a random access iterator type that points to a const element.
    // Returns a const_iterator pointing to the past-the-end element in the array container.
    // cbein
    std::cout << "myarray contains:";
    for (auto cit = myarrays.cbegin(); cit != myarrays.cend(); ++cit)
        std::cout << ' ' << *cit;  // cannot modify *it
    std::cout << '\n';
    std::cout << "--------------------------------" << std::endl;

    std::array<int, 4> myarrayes{4, 26, 80, 14};
    // Return reverse iterator to reverse beginning
    // Returns a reverse iterator pointing to the last element in the array container.
    // array::rbegin/rend
    std::cout << "myarray contains:";
    for (auto rit = myarrayes.rbegin(); rit < myarrayes.rend(); ++rit)
        std::cout << ' ' << *rit;
    std::cout << '\n';
    std::cout << "--------------------------------" << std::endl;

    std::array<int, 6> myArray{10, 20, 30, 40, 50, 60};
    // Returns a const_reverse_iterator pointing to the last element in the array container
    //  array::crbegin/crend
    std::cout << "myarray backwards:";
    for (auto crit = myArray.crbegin(); crit < myArray.crend(); ++crit)
        std::cout << ' ' << *crit;  // cannot modify *crit
    std::cout << '\n';
    std::cout << "--------------------------------" << std::endl;

    // array::size
    // Returns the number of elements in the array containe
    std::array<int, 5> myints;
    std::cout << "size of myints: " << myints.size() << std::endl;
    std::cout << "sizeof(myints): " << sizeof(myints) << std::endl;
    // array::max_size
    std::cout << "max_size of myints: " << myints.max_size() << std::endl;
    std::cout << "--------------------------------" << std::endl;

    // array::empty
    // Test whether array is empty or not empty
    std::array<int, 0> first;
    std::array<int, 5> second;
    std::cout << "first " << (first.empty() ? "is empty" : "is not empty") << '\n';
    std::cout << "second " << (second.empty() ? "is empty" : "is not empty") << '\n';
    std::cout << "--------------------------------" << std::endl;

    // array::fill and Fill array with value
    std::array<int, 6> myFillArray;
    myFillArray.fill(5);

    std::cout << "myarray contains:";
    for (int& r : myFillArray) {
        std::cout << ' ' << r;
    }
    std::cout << '\n';
    std::cout << "--------------------------------" << std::endl;

    // array::data
    // Pointer to the data contained by the array object.
    const char* cstr = "Test string";
    std::array<char, 12> charray;

    std::memcpy(charray.data(), cstr, 12);
    std::cout << charray.data() << '\n';
    std::cout << "--------------------------------" << std::endl;

    // array::at
    std::array<int, 10> myarrayAt;

    // assign some values:
    for (int i = 0; i < 10; i++) myarrayAt.at(i) = i + 1;

    // print content:
    std::cout << "myarray array::at contains:";
    for (int i = 0; i < 10; i++)
        std::cout << ' ' << myarrayAt.at(i);
    std::cout << '\n';
    std::cout << "--------------------------------" << std::endl;

    // array::operator[]
    std::array<int, 10> myarrayOp;
    unsigned int i;

    // assign some values:
    for (i = 0; i < 10; i++) myarrayOp[i] = i;

    // print content
    std::cout << "myarray operator[] contains:";
    for (i = 0; i < 10; i++)
        std::cout << ' ' << myarrayOp[i];
    std::cout << '\n';
    std::cout << "--------------------------------" << std::endl;

    // swap arrays
    std::array<int, 5> firsts = {10, 20, 30, 40, 50};
    std::array<int, 5> seconds = {11, 22, 33, 44, 55};

    firsts.swap(seconds);

    std::cout << "first:";
    for (int& x : firsts) std::cout << ' ' << x;
    std::cout << '\n';

    std::cout << "second:";
    for (int& x : seconds) std::cout << ' ' << x;
    std::cout << '\n';
    std::cout << "--------------------------------" << std::endl;
    return 0;
}