// main.cpp

#include "classes.h"


// main
int main()
{
    std::cout << std::endl;

    // create a sedan object
    Sedan sedan("Toyota", "Camry", 2020);
    sedan.displayInfo();

    std::cout << std::endl;

    // create a truck object
    Truck truck("Ford", "F-150", 2020);
    truck.displayInfo();

    std::cout << std::endl;

    return 0;
};
