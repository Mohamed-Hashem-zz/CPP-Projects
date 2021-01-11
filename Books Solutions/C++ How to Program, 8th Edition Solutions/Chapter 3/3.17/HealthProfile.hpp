/*
 * =====================================================================================
 *
 *       Filename:  HealthProfile.hpp
 *
 *    Description:  Exercise 3.17 - Computerisation of Health Records
 *
 *        Version:  1.0
 *        Created:  24/03/16 00:38:14
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Siidney Watson - siidney.watson.work@gmail.com
 *   Organization:  LolaDog Studio
 *
 * =====================================================================================
 */
#pragma once

#include <iostream>
#include <string>

class HealthProfile {
 private:
    std::string firstName;
    std::string lastName;
    std::string gender;
    int month, day, year;
    double height, weight;
    int ageInYears = 0;

 public:
    HealthProfile(const std::string &, const std::string &, const std::string &,
                 int, int, int, double, double);

    // SETTERS
    void setFirstName(const std::string &);
    void setLastName(const std::string &);
    void setGender(const std::string &);
    void setDOB(int, int, int);
    void setMonth(int);
    void setDay(int);
    void setYear(int);
    void setAge();
    void setHeight(int);
    void setWeight(int);

    // GETTERS
    std::string getFirstName() const;
    std::string getLastName() const;
    std::string getGender() const;
    int getMonth() const;
    int getDay() const;
    int getYear() const;
    void getDOB() const;
    int getAge();
    double getHeight() const;
    double getWeight() const;

    double getBMI() const;
    void getTargetHeartRate();
    int getMaxHeartRate();

    void showHealthProfile();
    void printBMIInfo() const;
};
