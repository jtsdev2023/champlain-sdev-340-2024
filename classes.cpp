// classes.cpp

#include "classes.h"


// class Automobile constructor
Automobile::Automobile(
    std::string type,
    std::string transmission,
    std::string drivetrain,
    std::string engine,
    std::string fuel,
    std::string doors,
    std::string wheels,
    std::string battery
)
    : m_type(type),
        m_transmission(transmission),
        m_drivetrain(drivetrain),
        m_engine(engine),
        m_fuel(fuel),
        m_doors(doors),
        m_wheels(wheels),
        m_battery(battery)
{

    // std::cout << "Automobile Constructor Called" << std::endl;

};

// method to print the make, model, and year of the automobile
void Automobile::displayInfo()
{
    std::cout << "Type: " << m_type << std::endl;
    std::cout << "Transmission: " << m_transmission << std::endl;
    std::cout << "Drivetrain: " << m_drivetrain << std::endl;
    std::cout << "Engine: " << m_engine << std::endl;
    std::cout << "Fuel: " << m_fuel << std::endl;
    std::cout << "Doors: " << m_doors << std::endl;
    std::cout << "Wheels: " << m_wheels << std::endl;
    std::cout << "Battery: " << m_battery << std::endl;
};


// class Automobile destructor
Automobile::~Automobile()
{
    // std::cout << "Automobile Destructor Called" << std::endl;
};


// class Sedan constructor
Sedan::Sedan(std::string type, std::string transmission, std::string drivetrain, std::string engine, std::string fuel, std::string doors, std::string wheels, std::string battery) : Automobile(type, transmission, drivetrain, engine, fuel, doors, wheels, battery)
{
    std::string m_type = type;
    std::string m_transmission = transmission;
    std::string m_drivetrain = drivetrain;
    std::string m_engine = engine;
    std::string m_fuel = fuel;
    std::string m_wheels = wheels;
    std::string m_battery = battery;
};


// class Sedan destructor
Sedan::~Sedan()
{
    // std::cout << "Sedan Destructor Called" << std::endl;
};


// class Truck constructor
Truck::Truck(
    std::string type,
    std::string transmission,
    std::string drivetrain,
    std::string engine,
    std::string fuel,
    std::string doors,
    std::string wheels,
    std::string battery
) : Automobile(type, transmission, drivetrain, engine, fuel, doors, wheels, battery)
{
    std::string m_type = type;
    std::string m_transmission = transmission;
    std::string m_drivetrain = drivetrain;
    std::string m_engine = engine;
    std::string m_fuel = fuel;
    std::string m_doors = doors;
    std::string m_wheels = wheels;
    std::string m_battery = battery;

    // std::cout << "Truck Constructor Called" << std::endl;
};


// class Truck destructor
Truck::~Truck()
{
    // std::cout << "Truck Destructor Called" << std::endl;
};


