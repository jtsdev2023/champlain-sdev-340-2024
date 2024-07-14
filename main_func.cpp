// main.cpp

#include "class-automobile.h"

int main() {
    
    // create an instance of Automobile
    Automobile myCar("Toyota", "Corolla", 2024);
    myCar.displayInfo();

    std::cout << std::endl;

    // sports car instance
    SportsCar mySportsCar1("Tesla", "Model S Plaid", 2024, 200, 2.4);
    mySportsCar1.displayInfo();

    std::cout << std::endl;
    
    SportsCar mySportsCar2("Corvette", "E-Ray", 0, 0, 0.0);
    mySportsCar2.setTopSpeed(183);
    mySportsCar2.setZeroToSixty(2.5);
    mySportsCar2.displayInfo();

    std::cout << std::endl;

    // truck instance
    // bed 54 x 45.5
    // can't find depth/height of the bed... make up a number - 24"
    Truck myTruck1("Rivian", "R1T", 2024, 34.2, 1764);
    printModel(myTruck1);

    std::cout << std::endl;

    // internet search on values
    // cargo size 52.8 cubic feet
    // payload 1,775 lbs
    Truck myTruck2("Ford", "F-150", 0, 0, 0);
    myTruck2.setCargoCapacity(52.8);
    myTruck2.setPayload(1775);
    printModel(myTruck2);

    return 0;
};
