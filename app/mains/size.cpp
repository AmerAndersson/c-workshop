
#include <cmath>
#include <iostream>

/**
 *
 * * Size	Unique representable values	Notes
 * * 8-bit	256	= 2^8 = 1 byte	=
 * * 16-bit	65 536	= 2^16 2 byte
 * * 32-bit	4 294 967 296	= 2^32 (~4 billion) 3 byte
 * * 64-bit	18 446 744 073 709 551 616	= 2^64 (~18 billion billion 4 byte
 *
 * * pow(float, float);
 * * pow(float, int);
 * * pow(double, double); // taken over from C
 * * pow(double, int);
 * * pow(long double, long double);
 * * pow(long double, int);
 */

int main(int argc, char const *argv[]) {
    int x = 2;
    int y = 2;
    double z = 2;
    double w = 2;

    std::cout << pow(x, 8) << '\n';   // 2^8
    std::cout << pow(y, 16) << '\n';  // 2^16
    std::cout << pow(z, 32) << '\n';  // 2^32
    std::cout << pow(w, 64) << '\n';  // 2^64
    std::cout << "----" << '\n';

    int a = 0;
    int b = 0;

    std::cout << (a ^ b) << '\n';
    std::cout << "----" << '\n';
    std::cout << (a | b) << '\n';
    std::cout << (a & b) << '\n';
    std::cout << (a << 1) << '\n';
    std::cout << (a >> 1) << '\n';
    std::cout << (a >> 2) << '\n';
    std::cout << "----" << '\n';

    int a1 = 0;
    int b1 = 1;

    std::cout << (a1 ^ b1) << '\n';
    int a2 = 1;
    int b2 = 0;

    std::cout << (a2 ^ b2) << '\n';

    int a3 = 1;
    int b3 = 1;
    std::cout << (256 * 256) << '\n';
    return 0;
}

 