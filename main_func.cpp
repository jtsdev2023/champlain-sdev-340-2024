// main.cpp

#include "class-automobile.h"

int main() {
    
    // create an instance of Automobile
    Automobile myCar("Toyota", "Corolla", 2024);
    myCar.displayInfo();

    // sports car instance
    SportsCar mySportsCar("Tesla", "Model S Plaid", 2024, 200, 2.4);
    mySportsCar.displayInfo();

    return 0;
};
