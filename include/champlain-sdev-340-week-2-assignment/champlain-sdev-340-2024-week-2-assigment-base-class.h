// champlain-sdev-340-2024-week-2-assignment-base-class.h

#include <random>
#include <string>
#include <memory>
#include <sstream>
#include <iostream>

#pragma once

// base class
class Automobile
{
    // friend function declaration
    friend std::string getVIN(Automobile &);

    private:
        // code found online to generate a hex string which be used as a VIN
        std::string generateRandomHexString(size_t length) const {}

        // VIN will be used to dominate the friend function
        std::string VIN;

    public:
        // declare variables
        std::string make;
        std::string model;
        // smart pointer for year
        std::unique_ptr <int> year;

        // constructor
        Automobile(std::string make, std::string model, int year) :
            make(make), model(model), year(std::make_unique<int>(year)) {}

        // display info member function
        virtual void displayInfo() const {}

};

// friend function definition
std::string getVIN(Automobile &automobile) {}
