// class-automobile.cpp

#include "class-automobile.h"


// constructor
Automobile::Automobile(std::string make, std::string model, int year) : 
    m_make(make), m_model(model), m_year(year)
{
    this->m_make = make;
    this->m_model = model;
    this->m_year = year;

};

// destructor
Automobile::~Automobile() {
    // std::cout << "destructor called" << std::endl;
};

// display info method
void Automobile::displayInfo() const {
    std::cout << "Make: " << m_make << std::endl;
    std::cout << "Model: " << m_model << std::endl;
    std::cout << "Year: " << m_year << std::endl;
};

// friend function
// void printPrivateDetails(const Automobile& myVehicle) {
//     std::cout << "Make: " << myVehicle.m_make << std::endl;
//     std::cout << "Model: " << myVehicle.m_model << std::endl;
//     std::cout << "Year: " << myVehicle.m_year << std::endl;
// };
void printModel(Automobile &object) {
    std::cout << "Model: " << object.m_model << std::endl;
};

///////////////////////////////////////////////////////////////////////////////////////////////////

// sports car constructor
SportsCar::SportsCar(
    std::string make, std::string model, int year, int topSpeed, float zeroToSixty) : 
    Automobile(make, model, year), m_topSpeed(topSpeed), m_zeroToSixty(zeroToSixty)
{
    this->m_topSpeed = topSpeed;
    this->m_zeroToSixty = zeroToSixty;
};

// desconstrutor
SportsCar::~SportsCar() {
    // std::cout << "sports car destructor called" << std::endl;
};

// method to display sports car info
void SportsCar::displayInfo() const {
    Automobile::displayInfo();
    std::cout << "Top Speed: " << *topSpeedPointer << std::endl;
    std::cout << "0-60 Time: " << m_zeroToSixty << std::endl;
};

// setter and getter methods
void SportsCar::setTopSpeed(int topSpeed) {
    *topSpeedPointer = topSpeed;
};
int SportsCar::getTopSpeed() const {
    return *topSpeedPointer;
};

void SportsCar::setZeroToSixty(float zeroToSixty) {
    this->m_zeroToSixty = zeroToSixty;
};
float SportsCar::getZeroToSixty() const {
    return m_zeroToSixty;
};



///////////////////////////////////////////////////////////////////////////////////////////////////

// truck constructor
Truck::Truck(std::string make, std::string model, int year, int towingCapacity, int payload) : 
    Automobile(make, model, year), m_maxCargoCapacity(towingCapacity), m_maxPayload(payload)
{
    this->m_maxCargoCapacity = towingCapacity;
    this->m_maxPayload = payload;
};

// truck destructor
Truck::~Truck() {
    // std::cout << "truck destructor called" << std::endl;
};

// method to display truck info
void Truck::displayInfo() const {
    std::cout << "Model: " << "TEMP" << std::endl;
};

// setter and getter methods
void Truck::setPayload(int payload) {
    this->m_maxPayload = payload;
};
int Truck::getPayload() const {
    return m_maxPayload;
};

void Truck::setCargoCapacity(int cargoCapacity) {
    this->m_maxCargoCapacity = cargoCapacity;
};
float Truck::getCargoCapacity() const {
    return m_maxCargoCapacity;
};

// print info
void Truck::printInfo() const {
    std::cout << "Max Cargo Capacity: " << m_maxCargoCapacity << std::endl;
    std::cout << "Max Payload: " << m_maxPayload << std::endl;
};
