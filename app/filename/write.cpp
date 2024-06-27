#include <fstream>
#include <iostream>
/**
 * @brief  main program for The fstream library allows us to work with files.
 * @author: Amer Andersson
 * @conutry: Sweden
 * @date: 2024
 * @return 0 when program execution completes successfully:
 * Input/output with files
 * C++ provides the following classes to perform output and input of characters to/from files:
 * * ofstream: Stream class to write on files
 * * ifstream: Stream class to read from files
 * * fstream: Stream class to both read and write from/to files.
 * These classes are derived directly or indirectly from the classes istream and ostream.
 * We have already used objects whose types were these classes: cin is an object of class istream
 * and cout is an object of class ostream. Therefore, we have already been using classes that
 * are related to our file streams. And in fact, we can use our file streams the same way
 * we are already used to use cin and cout, with the only difference that we have to associate
 * these streams with physical files. Let's see an example
 *
 * This code creates a file called myfilename.txt
 * and inserts a sentence into it in the same way we are used to do with cout,
 * but using the file stream myfile instead
 *   * std::ofstream myfile;
 *   * myfile.open("./src/myfilename.txt");
 *   * myfile << "Writing this to a file.\n";
 *   * myfile.close();
 */
int main() {
    // Writing operations on text files are performed in the same way we operated with cout:
    /// Create and open a text file
    /// Write to the file
    /// Close the file
    std::ofstream myfile("./src/myfilename.txt");
    if (myfile.is_open()) {
        myfile << "This is a line.\n";
        myfile << "This is another line.\n";
        myfile << "Files can be tricky, but it is fun enough!\n";
        myfile.close();
    } else
        std::cout << "Unable to open file";
    return 0;
}
