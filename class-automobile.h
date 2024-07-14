// class-automoile.h

#pragma once

#include <string>
#include <memory>
#include <iostream>

// watched a video that suggested using the std namespace is bad practice
// using namespace std;



// declare class Automobile
class Automobile
{
    friend void printModel(Automobile &object);

    public:
        // constructor
        Automobile(std::string make, std::string model, int year);
        // destructor
        ~Automobile();
        // method vs. member function?
        // need to see why online examples of methods to print/display
        // info use "const" keyword
        virtual void displayInfo() const;

    private:
        // member variables
        // seems to be some convention to name member variables with m_ prefix
        // not sure i understand it yet
        std::string m_make;
        std::string m_model;
        int m_year;
};


// sports car derived class
class SportsCar : public Automobile
{
    public:
        // constructor
        SportsCar(std::string make, std::string model, int year, int topSpeed, float zeroToSixty);
        // destructor
        ~SportsCar();
        // method
        void displayInfo() const override;

        // setter and getter methods
        void setTopSpeed(int topSpeed);
        int getTopSpeed() const;
        void setZeroToSixty(float zeroToSixty);
        float getZeroToSixty() const;

    private:
        // member variables
        int m_topSpeed;
        int* topSpeedPointer = &m_topSpeed;
        float m_zeroToSixty;
};


// truck derived class
class Truck : public Automobile
{
    public:
        // constructor
        Truck(std::string make, std::string model, int year, int maxCargoCapacity, int payload);
        // destructor
        ~Truck();
        // method
        void displayInfo() const override;

        // setter and getter methods
        void setPayload(int payload);
        int getPayload() const;
        void setCargoCapacity(int cargoCapacity);
        float getCargoCapacity() const;

        // print info
        void printInfo() const;

    private:
        // member variables
        int m_maxPayload;
        int m_maxCargoCapacity;     // cubic feet

    
};
