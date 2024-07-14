// class-automoile.h

#pragma once

#include <string>
#include <iostream>

using namespace std;



// declare class Automobile
class Automobile {
    public:
        // constructor
        Automobile(string make, string model, int year, string color);
        // destructor
        ~Automobile();
        // member functions
        void displayInfo();

    private:
        // member variables
        string make;
        string model;
        int year;
        string color;
};