// classes.h

#pragma once


#include <string>
#include <iostream>


// class automobile
class Automobile
{
    public:
    // constructor
    Automobile(
        std::string type,
        std::string transmission,
        std::string drivetrain,
        std::string engine,
        std::string fuel,
        std::string doors,
        std::string wheels,
        std::string battery
    );
    // destructor
    ~Automobile();

    // method to display the make, model, and year of the automobile
    void displayInfo();

    private:
    // member variables
    std::string m_type;
    std::string m_transmission;
    std::string m_drivetrain;
    std::string m_engine;
    std::string m_fuel;
    std::string m_doors;
    std::string m_wheels;
    std::string m_battery;
};


// class sedan
class Sedan : public Automobile
{
    public:
    // constructor
    Sedan(std::string type, std::string transmission, std::string drivetrain, std::string engine, std::string fuel, std::string doors, std::string wheels, std::string battery);
    // destructor
    ~Sedan();
};


// class truck
class Truck : public Automobile
{
    public:
    // constructor
    Truck(std::string type, std::string transmission, std::string drivetrain, std::string engine, std::string fuel, std::string doors, std::string wheels, std::string battery);
    // destructor
    ~Truck();
};
