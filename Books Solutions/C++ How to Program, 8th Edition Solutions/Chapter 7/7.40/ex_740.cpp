/*
 * =====================================================================================
 *
 *       Filename:  ex_740.cpp
 *
 *    Description:  Exercise 7.40 - Find the Minimum Value in a vector
 *
 *        Version:  1.0
 *        Created:  26/04/16 14:33:30
 *       Revision:  none
 *       Compiler:  g++
 *
 *         Author:  Siidney Watson - siidney.watson.work@gmail.com
 *   Organization:  LolaDog Studio
 *
 * =====================================================================================
 */
#include <iostream>
#include <vector>
#include <random>

int recursiveMinimum(const std::vector<int>&, int, int);

static const int LIMIT = 10;

int main(int argc, const char* argv[]) {
    std::cout << "Program to recursively find mimimum value in an array\n"
              << std::endl;

    std::vector<int> n(LIMIT);

    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<int> dis(1, LIMIT);

    for (int i = 0; i < LIMIT; ++i) {
        n[i] = dis(gen);

        std::cout << n[i] << std::endl;
    }

    std::cout << "\nMinimum : " << recursiveMinimum(n, 0, LIMIT - 1)
              << std::endl;

    return 0;
}

/*
 * Recursively finds the minimum value from the given array.
 * @param const std::vector<int>
 * @param int
 * @param int
 * @return int
 */
int recursiveMinimum(const std::vector<int>& n, int start, int end) {
    if (start == end) { return n[start]; }

    int min = recursiveMinimum(n, ++start, end);

    return (min < n[start]) ? min : n[start];
}
