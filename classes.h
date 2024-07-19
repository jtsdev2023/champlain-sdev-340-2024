// classes.h

#pragma once


#include <string>
#include <iostream>


// class AutomobileChassis
class AutomobileChassis
{
    public:
    // member variables
    std::string m_type;
    std::string m_doors;

    // constructor
    AutomobileChassis(
        std::string type,
        std::string doors
    );
    // destructor
    ~AutomobileChassis();
};

class PowerTrain
{
    public:
    // member variables
    std::string m_transmission;
    std::string m_drivetrain;
    std::string m_engine;
    std::string m_fuel;
    std::string m_wheels;
    std::string m_battery;
    
    // constructor
    PowerTrain(
        std::string transmission,
        std::string drivetrain,
        std::string engine,
        std::string fuel,
        std::string wheels,
        std::string battery
    );
    // destructor
    ~PowerTrain();

};


// class sedan
class Sedan : public AutomobileChassis, public PowerTrain
{
    public:
    // constructor
    Sedan(
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
    ~Sedan();

    // display info
    void displayInfo();
};


// class truck
class Truck : public AutomobileChassis, public PowerTrain
{
    public:
    // constructor
    Truck(
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
    ~Truck();

    // display info
    void displayInfo();
};
