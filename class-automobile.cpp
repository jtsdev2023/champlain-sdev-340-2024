// class-automobile.cpp

#include "class-automobile.h"


// constructor
Automobile::Automobile(string make, string model, int year) : 
    m_make(make), m_model(model), m_year(year)
{
    this->m_make = make;
    this->m_model = model;
    this->m_year = year;

};



// destructor
Automobile::~Automobile() {
    // cout << "destructor called" << endl;
};

// display info method
void Automobile::displayInfo() {
    cout << "Make: " << m_make << endl;
    cout << "Model: " << m_model << endl;
    cout << "Year: " << m_year << endl;
};

///////////////////////////////////////////////////////////////////////////////////////////////////

// sports car constructor
SportsCar::SportsCar(string make, string model, int year, int topSpeed, float zeroToSixty) : 
    Automobile(make, model, year), m_topSpeed(topSpeed), m_zeroToSixty(zeroToSixty)
{
    this->m_topSpeed = topSpeed;
    this->m_zeroToSixty = zeroToSixty;
};

// desconstrutor
SportsCar::~SportsCar() {
    // cout << "sports car destructor called" << endl;
};

// method to display sports car info
void SportsCar::displayInfo() {
    Automobile::displayInfo();
    cout << "Top Speed: " << *topSpeedPointer << endl;
    cout << "0-60 Time: " << m_zeroToSixty << endl;
};



///////////////////////////////////////////////////////////////////////////////////////////////////

// truck constructor
Truck::Truck(string make, string model, int year, int towingCapacity, int payload) : 
    Automobile(make, model, year), m_maxCargoCapacity(towingCapacity), m_maxPayload(payload)
{
    this->m_maxCargoCapacity = towingCapacity;
    this->m_maxPayload = payload;
};

// truck destructor
Truck::~Truck() {
    // cout << "truck destructor called" << endl;
};

// method to display truck info
void Truck::displayInfo() {
    cout << "Model: " << m_model << endl;
    cout << "Towing Capacity: " << m_maxCargoCapacity << endl;
    cout << "Payload: " << m_maxPayload << endl;
};
