#include <fstream>
#include <iostream>

int main() {
    // obtaining file size
    std::streampos begin, end;
    std::ifstream myfile("example.bin", std::ios::binary);
    begin = myfile.tellg();
    myfile.seekg(0, std::ios::end);
    end = myfile.tellg();
    myfile.close();
    std::cout << "size is: " << (end - begin) << " bytes.\n";
    return 0;
}