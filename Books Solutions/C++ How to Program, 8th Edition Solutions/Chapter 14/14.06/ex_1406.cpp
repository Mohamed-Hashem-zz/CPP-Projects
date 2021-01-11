/*
 * =====================================================================================
 *
 *       Filename:  ex_1406.cpp
 *
 *    Description:  Exercise 14.06 - Operator Overloads in Templates
 *
 *        Version:  1.0
 *        Created:  07/09/16 14:58:26
 *       Revision:  none
 *       Compiler:  g++
 *
 *         Author:  Siidney Watson - siidney.watson.work@gmail.com
 *   Organization:  LolaDog Studio
 *
 * =====================================================================================
 */
#include <iostream>

template <typename T>
bool isEqualTo(const T&, const T&);

int main(int argc, const char* argv[]) {
    int i1 = 5;
    int i2 = 6;

    double d1 = 1.5;
    double d2 = 1.5;

    char c1 = 'X';
    char c2 = 'x';

    std::cout << i1 << " == " << i2 << " : "
              << (isEqualTo(i1, i2) ? "true" : "false") << std::endl;
    std::cout << d1 << " == " << d2 << " : "
              << (isEqualTo(d1, d2) ? "true" : "false") << std::endl;
    std::cout << c1 << " == " << c2 << " : "
              << (isEqualTo(c1, c2) ? "true" : "false") << std::endl;

    return 0;
}
// comparison operator
template <typename T>
bool isEqualTo(const T& c1, const T& c2) {
    return c1 == c2;
}
