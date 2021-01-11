/*
 * =============================================================================
 *
 *       Filename:  ex_816.cpp
 *
 *    Description:  Exercise 8.16 - Maze Traversal
 *
 *        Version:  1.0
 *        Created:  13/02/18 04:05:58
 *       Revision:  none
 *       Compiler:  g++
 *
 *         Author:  Siidney Watson - siidney.watson.work@gmail.com
 *   Organization:  LolaDog Studio
 *
 * =============================================================================
 */
#include "Maze.hpp"

/**
 * This is the main method.
 * @param argc.
 * @param argv[].
 * @return int.
 */
int main(int argc, char* argv[]) {
    Maze maze("levels/level2");

    maze.go();

    return 0;
}  // end method main
