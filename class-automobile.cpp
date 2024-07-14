// class-automobile.cpp

#include "class-automobile.h"


// constructor
Automobile::Automobile(string make, string model, int year, string color) : make(make), model(model), year(year), color(color)
{
    this->make = make;
    this->model = model;
    this->year = year;
    this->color = color;
};

// destructor
Automobile::~Automobile() {
    cout << "Automobile object destroyed" << endl;
};

// member functions
void Automobile::displayInfo() {
    cout << "Make: " << make << endl;
    cout << "Model: " << model << endl;
    cout << "Year: " << year << endl;
    cout << "Color: " << color << endl;
};
