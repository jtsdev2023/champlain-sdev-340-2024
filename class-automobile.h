// class-automoile.h

#pragma once

#include <string>
#include <iostream>

using namespace std;



// declare class Automobile
class Automobile {
    public:
        // constructor
        Automobile(string make, string model, int year);
        // destructor
        ~Automobile();
        // method vs. member function?
        virtual void displayInfo();

    private:
        // member variables
        // seems to be some convention to name member variables with m_ prefix
        // not sure i understand it yet
        string m_make;
        string m_model;
        int m_year;
};


// sports car derived class
class SportsCar : public Automobile {
    public:
        // constructor
        SportsCar(string make, string model, int year, int topSpeed, float zeroToSixty);
        // destructor
        ~SportsCar();
        // method
        void displayInfo() override;

    private:
        // member variables
        int m_topSpeed;
        int* topSpeedPointer = &m_topSpeed;
        float m_zeroToSixty;
};


// truck derived class
class Truck : public Automobile {
    public:
        // constructor
        Truck(string make, string model, int year, int towingCapacity, int payload);
        // destructor
        ~Truck();
        // method
        void displayInfo() override;

    private:
        // member variables
        int m_maxPayload;
        int m_maxCargoCapacity;     // cubic feet
};
