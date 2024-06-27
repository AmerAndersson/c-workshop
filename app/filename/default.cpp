#include <cstdint>
#include <fstream>
#include <iostream>
#include <string>
#include <vector>

int main() {
    // Default
    std::ifstream is{"in.txt", std::ios::in};
    std::ofstream os{"out.txt", std::ios::out};  //(overwrite existing file)

    // Append to existing file
    std::ofstream os{"log.txt", std::ios::app};
    // Binary
    std::ifstream is{"in.jpg", std::ios::binary};
    std::ofstream os{"out.jpg", std::ios::binary};

    // we'll learn later what all this means…
    std::uint64_t i = 0;
    // read binary
    is.read(reinterpret_cast<char*>(&i), sizeof(i));
    // write binary
    os.write(reinterpret_cast<char const*>(&i), sizeof(i));

    // File Input & Output
    std::ofstream os{"squares.txt"};  // open file

    // if stream OK = can write to file
    if (os.good()) {
        for (int x = 1; x <= 6; ++x) {
            // write x space x² newline
            os << x << ' ' << (x * x) << '\n';
        }
    }

    std::ifstream is{"squares.txt"};  // open file
    // if stream OK = file readable
    if (is.good()) {
        double x, y;
        // as long as any 2 values readable
        while (is >> x >> y) {
            // print pairs (x,y)
            std::cout << x << "² = " << y << "\n";
        }
    }
    return 0;
}
// With open and close
void bar() {
    std::ofstream os;
    os.open("squares.txt");
    os.close();
    // open another file:
    os.open("test.txt");
    os.close();
}