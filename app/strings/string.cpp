#include <iostream>
#include <string>
#include <sstream>

/**
 * @brief  main program  string type use to store a sequence of characters
 * @author:  Amer Andersson
 * @conutry: Sweden
 * @date:    2024
 * @return 0 when program execution completes successfully.
 */
const char newline = '\n';
int main()
{
    /**
     * stringstream
     * This feature is most useful to convert strings
     * to numerical values and vice versa. For example,
     * in order to extract an integer from a string we can write
     * std::string myst("1204");
     * int myint;
     * std::stringstream(mystr) >> myint;
     */

    std::string myprice;
    float price = 0;
    int quantity = 0;

    std::cout << "Enter price: ";
    std::getline(std::cin, myprice);
    std::stringstream(myprice) >> price;
    std::cout << "Enter quantity: ";
    std::getline(std::cin, myprice);
    std::stringstream(myprice) >> quantity;
    std::cout << "Total price: " << price * quantity << newline;
    std::cout << "-------------------" << newline;

    // function, called getline
    std::string mystr;
    std::cout << "What's your name? ";
    std::getline(std::cin, mystr);
    std::cout << "Hello " << mystr << newline;
    std::cout << "What is your favorite team? ";
    std::getline(std::cin, mystr);
    std::cout << "I like " << mystr << " too!" << newline;
    std::cout << "-------------------" << newline;

    // function, called cin
    int i;
    std::cout << "Please enter an integer value: ";
    std::cin >> i;
    std::cout << "The value you entered is " << i;
    std::cout << " and its double is " << i * 2 << newline;
    std::cout << "-------------------" << newline;

    std::string mystring;
    mystring = "This is the initial string content";
    std::cout << mystring << newline;
    mystring = "This is a different string content";
    std::cout << mystring << newline;
    std::cout << "-------------------" << newline;

    /// Add fname and lname:
    std::string firstNames = "John ";
    std::string lastNames = "Doe";
    std::string fullNames = firstNames.append(lastNames);
    std::cout << fullNames << newline;
    std::cout << "-------------------" << newline;

    /// Add fname and lname:
    std::string firstName = "John ";
    std::string lastName = "Smith";
    std::string fullName = firstName + lastName;
    std::cout << fullName << newline;
    std::cout << "-------------------" << newline;

    // String Length() and size()
    std::string txt = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    std::cout << "The length of the txt string is: " << txt.length() << newline;
    std::cout << "The length of the txt string is: " << txt.size() << newline;
    /// This operator accepts one parameter, which can be either a type or a variable,
    /// and returns the size in bytes of that type or object
    int m = sizeof(char);
    std::cout << "Size in bytes: " << m << newline;
    std::cout << "-------------------" << newline;

    // Access Strings
    std::string myString = "Hello";
    std::cout << myString[0] << newline;
    std::cout << myString[1] << newline;
    std::cout << myString[2] << newline;
    std::cout << myString[3] << newline;
    std::cout << myString << newline;
    std::cout << "-------------------" << newline;

    // Change String Characters
    myString[0] = 'J';
    std::cout << myString << newline;
    std::cout << "-------------------" << newline;

    // Strings - Special Characters
    std::string txts = "We are the so-called \"Vikings\" from the north.";
    std::cout << txts << newline;
    std::cout << "-------------------" << newline;

    std::string txte = "It\'s alright.";
    std::cout << txte << newline;
    std::cout << "-------------------" << newline;

    //	Inserts a backslash character (\)
    std::string tx = "The character \\ is called backslash.";
    std::cout << tx << newline;

    // Creates a horizontal tab
    std::cout << "Hello World!\t";
    std::cout << "I am learning C++." << newline;

    // 	Inserts a double quote character
    std::cout << "They call him \"Johnny\"." << newline;
    std::cout << "-------------------" << newline;

    /// Character Types
    char myGrade = 'A';
    char a = 65, b = 66, c = 67;
    std::cout << a << newline;
    std::cout << b << newline;
    std::cout << c << newline;
    std::cout << "myGrade: " << myGrade << newline;

    return 0;
}