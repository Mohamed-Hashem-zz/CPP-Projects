/*
 * =====================================================================================
 *
 *       Filename:  ex_433.cpp
 *
 *    Description:  Exercise 4.33 - Sides of a Right Triangle
 *
 *        Version:  1.0
 *        Created:  27/03/16 19:14:05
 *       Revision:  none
 *       Compiler:  g++
 *
 *         Author:  Siidney Watson - siidney.watson.work@gmail.com
 *   Organization:  LolaDog Studio
 *
 * =====================================================================================
 */
#include <math.h>
#include <stdio.h>
#include <iostream>
#include <algorithm>

bool isRightTriangle(int, int, int);

int main(int argc, const char *argv[]) {
    int a, b, c = 0;

    std::cout << "Program to check whether 3 values represent a right triangle.\n"
              << std::endl;

    std::cout << "Enter three space separated non zero integers: ";
    std::cin >> a >> b >> c;

    printf("%d %d %d could%srepresent a right triangle.\n", a, b, c,
           (isRightTriangle(a, b, c)) ? " " : " not ");
    return 0;
}
bool isRightTriangle(int a, int b, int c) {
    int hypotenuse = std::max(a, std::max(b, c));

    if (hypotenuse == a) {
        return pow(b, 2) + pow(c, 2) == pow(hypotenuse, 2);
    } else if (hypotenuse == b) {
        return pow(a, 2) + pow(c, 2) == pow(hypotenuse, 2);
    } else {
        return pow(a, 2) + pow(b, 2) == pow(hypotenuse, 2);
    }
}
