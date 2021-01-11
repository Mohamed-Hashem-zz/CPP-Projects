/*
 * =====================================================================================
 *
 *       Filename:  GradeBook.cpp
 *
 *    Description:  Fig. 5.10: Member-function definitions for class GradeBook
 *                  that uses a switch statement to count A, B, C, D and F
 *                  grades.
 *
 *        Version:  1.1
 *        Created:  04/04/16 16:55:11
 *       Revision:  05/04/16 17:39:04
 *       Compiler:  g++
 *
 *         Author:  Siidney Watson - siidney.watson.work@gmail.com
 *   Organization:  LolaDog Studio
 *
 * =====================================================================================
 */
#include <string>

#include "GradeBook.hpp"

GradeBook::GradeBook(std::string name) {
    setCourseName(name);

    aCount = 0;
    bCount = 0;
    cCount = 0;
    dCount = 0;
    fCount = 0;
}
// SETTERS
void GradeBook::setCourseName(std::string name) {
    if (name.length() <= 25) {
        courseName = name;
    } else {
        courseName = name.substr(0, 25);
        std::cout << "Name \"" << name << "\" exceeds maximum length (25).\n"
                  << "Limiting courseName to first 25 characters.\n"
                  << std::endl;
    }
}
// GETTERS
std::string GradeBook::getCourseName() const { return courseName; }
void GradeBook::displayMessage() const {
    std::cout << "Welcome to the grade book for\n"
              << getCourseName() << "!\n"
              << std::endl;
}
void GradeBook::inputGrades() {
    int grade;

    std::cout << "Enter the letter grades.\n"
              << "Enter the EOF character to end input." << std::endl;

    while ((grade = std::cin.get()) != EOF) {
        switch (grade) {
            case 'A':
            case 'a':
                ++aCount;
                break;
            case 'B':
            case 'b':
                ++bCount;
                break;
            case 'C':
            case 'c':
                ++cCount;
                break;
            case 'D':
            case 'd':
                ++dCount;
                break;
            case 'F':
            case 'f':
                ++fCount;
                break;
            case '\n':
            case '\t':
            case ' ':
                break;

            default:
                std::cout
                    << "Incorrect letter grade entered. Enter a new grade."
                    << std::endl;
        }
    }
}
void GradeBook::displayGradeReport() const {
    std::cout << "\n\nNumber of students who received each letter grade:"
              << "\nA: " << aCount << "\nB: " << bCount << "\nC: " << cCount
              << "\nD: " << dCount << "\nF: " << fCount << std::endl;

    printf("Grade Point Average: %d\n",
           (aCount * 4 + bCount * 3 + cCount * 2 + dCount * 1 + fCount * 0) /
               (aCount + bCount + cCount + dCount + fCount));
}
