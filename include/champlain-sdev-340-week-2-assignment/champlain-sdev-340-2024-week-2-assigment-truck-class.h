// champlain-sdev-340-2024-week-2-assignment-truck-class.h

#include "champlain-sdev-340-2024-week-2-assigment-base-class.h"

#pragma once

// truck class
class Truck : public Automobile
{
    private:
        

    public:
        // declare variables
        double cargoSize;
        double payload;

        // constructor
        Truck(std::string make, std::string model, int year, double cargoSize, double payload) :
            Automobile(make, model, year), cargoSize(cargoSize), payload(payload) {}

        // display info member function
        void displayInfo() const override {}

    public:
        // constructor using mutators setter and getter
        Truck(std::string make, std::string model, int year) :
            Automobile(make, model, year) {}

        // setter - cargo size
        void setCargoSize(double cargoSize) {}

        // setter - payload
        void setPayload(double payload) {}

        // getter - cargo size
        double getCargoSize() const {}

        // getter - payload
        double getPayload() const {}
};
