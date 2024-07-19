// classes.cpp

#include "classes.h"


// class Automobile constructor
AutomobileChassis::AutomobileChassis(std::string type, std::string doors)
    : m_type(type), m_doors(doors)
{
    // std::cout << "Automobile Constructor Called" << std::endl;
};

// method to print the make, model, and year of the automobile
// void AutomobileChassis::displayInfo()
// {
//     std::cout << "Type: " << m_type << std::endl;
//     std::cout << "Transmission: " << m_transmission << std::endl;
//     std::cout << "Drivetrain: " << m_drivetrain << std::endl;
//     std::cout << "Engine: " << m_engine << std::endl;
//     std::cout << "Fuel: " << m_fuel << std::endl;
//     std::cout << "Doors: " << m_doors << std::endl;
//     std::cout << "Wheels: " << m_wheels << std::endl;
//     std::cout << "Battery: " << m_battery << std::endl;
// };


// class Automobile destructor
AutomobileChassis::~AutomobileChassis()
{
    // std::cout << "Automobile Destructor Called" << std::endl;
};


// powertrain
PowerTrain::PowerTrain(
    std::string transmission,
    std::string drivetrain,
    std::string engine,
    std::string fuel,
    std::string wheels,
    std::string battery
)
{
    std::string m_transmission = transmission;
    std::string m_drivetrain = drivetrain;
    std::string m_engine = engine;
    std::string m_fuel = fuel;
    std::string m_wheels = wheels;
    std::string m_battery = battery;
};

// powertrain destructor
PowerTrain::~PowerTrain()
{
    // std::cout << "PowerTrain Destructor Called" << std::endl;
};


// class Sedan constructor
Sedan::Sedan(
    std::string type,
    std::string transmission,
    std::string drivetrain,
    std::string engine,
    std::string fuel,
    std::string doors,
    std::string wheels,
    std::string battery)
    :   AutomobileChassis(type, doors),
        PowerTrain(transmission, drivetrain, engine, fuel, wheels, battery)
{
    std::string m_type = type;
    std::string m_transmission = transmission;
    std::string m_drivetrain = drivetrain;
    std::string m_engine = engine;
    std::string m_fuel = fuel;
    std::string m_doors = doors;
    std::string m_wheels = wheels;
    std::string m_battery = battery;
};

// dispaly info
void Sedan::displayInfo()
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
) :     AutomobileChassis(type, doors), 
        PowerTrain(transmission, drivetrain, engine, fuel, wheels, battery)
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

// dispaly info
void Truck::displayInfo()
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

// class Truck destructor
Truck::~Truck()
{
    // std::cout << "Truck Destructor Called" << std::endl;
};


