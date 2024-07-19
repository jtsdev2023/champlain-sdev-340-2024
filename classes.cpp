// classes.cpp

#include "classes.h"


// class Automobile constructor
Automobile::Automobile(std::string make, std::string model, int year)
    : m_make(make), m_model(model), m_year(year)
{

    // std::cout << "Automobile Constructor Called" << std::endl;

};

// method to print the make, model, and year of the automobile
void Automobile::displayInfo()
{
    std::cout << "Make: " << m_make << std::endl;
    std::cout << "Model: " << m_model << std::endl;
    std::cout << "Year: " << m_year << std::endl;
};


// class Automobile destructor
Automobile::~Automobile()
{
    // std::cout << "Automobile Destructor Called" << std::endl;
};


// class Sedan constructor
Sedan::Sedan(std::string make, std::string model, int year) : Automobile(make, model, year)
{
    std::string m_make = make;
    std::string m_model = model;
    int m_year = year;

    // std::cout << "Sedan Constructor Called" << std::endl;
};


// class Sedan destructor
Sedan::~Sedan()
{
    // std::cout << "Sedan Destructor Called" << std::endl;
};


// class Truck constructor
Truck::Truck(std::string make, std::string model, int year) : Automobile(make, model, year)
{
    std::string m_make = make;
    std::string m_model = model;
    int m_year = year;

    // std::cout << "Truck Constructor Called" << std::endl;
};


// class Truck destructor
Truck::~Truck()
{
    // std::cout << "Truck Destructor Called" << std::endl;
};


