// champlain-sdev-340-2024-week-2-assignment-sports-car-class.h

#include "champlain-sdev-340-2024-week-2-assigment-base-class.h"

#pragma once

// sports car derived class
class SportsCar : public Automobile
{
    private:


    public:
        // declare variables
        double topSpeed;
        double zeroToSixty;

        // constructor
        SportsCar(
            std::string make, std::string model, int year, double topSpeed, double zeroToSixty) :
            Automobile(make, model, year), topSpeed(topSpeed), zeroToSixty(zeroToSixty) {}

        // display info member function
        void displayInfo() const override {}

    public:
        // constructor using mutators setter and getter
        SportsCar(
            std::string make, std::string model, int year) :
            Automobile(make, model, year) {}

        // setter - top speed
        void setTopSpeed(double topSpeed) {}

        // setter - zero to sixty
        void setZeroToSixty(double zeroToSixty) {}

        // getter - top speed
        double getTopSpeed() const {}

        // getter - zero to sixty
        double getZeroToSixty() const {}
};
