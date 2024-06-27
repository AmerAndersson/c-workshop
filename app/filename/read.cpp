#include <fstream>
#include <iostream>
#include <string>

/**
 * @brief  main program for The ifstream library allows us to work with files.
 * @author: Amer Andersson
 * @conutry: Sweden
 * @date: 2024
 * @return 0 when program execution completes successfully:
 */
int main() {
    // Reading from a file can also be performed in the same way that we did with cin:
    // Create a text string, which is used to output the text file
    // Read from the text file(istream)
    // Use a while loop together with the getline()
    // function to read the file line by line
    // Output the text from the file
    // Close the file
    std::string line;

      std::ifstream myfile("./src/myfilename.txt");
    if (myfile.is_open()) {
        while (getline(myfile, line)) {
            std::cout << line << '\n';
        }
        myfile.close();
    } else {
        std::cout << "Unable to open file";
    }
    return 0;
}
