// classes.h

#pragma once


#include <string>
#include <iostream>



// class automobile
class Automobile
{
    public:
    // constructor
    Automobile(std::string make, std::string model, int year);
    // destructor
    ~Automobile();

    // method to display the make, model, and year of the automobile
    void displayInfo();

    private:
    // member variables
    std::string m_make;
    std::string m_model;
    int m_year;
};


// class sedan
class Sedan : public Automobile
{
    public:
    // constructor
    Sedan(std::string make, std::string model, int year);
    // destructor
    ~Sedan();
};


// class truck
class Truck : public Automobile
{
    public:
    // constructor
    Truck(std::string make, std::string model, int year);
    // destructor
    ~Truck();
};
