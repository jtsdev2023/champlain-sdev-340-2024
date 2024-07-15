// main.cpp

#include "champlain-sdev-340-2024-week-2-assigment-base-class.cpp"
#include "champlain-sdev-340-2024-week-2-assigment-sports-car-class.cpp"
#include "champlain-sdev-340-2024-week-2-assigment-truck-class.cpp"


// main
int main()
{
    std::cout << std::endl;

    // base class object
    Automobile car("Honda", "Accord", 2024);
    car.displayInfo();

    std::cout << std::endl;

    // derived class object - sports car
    SportsCar sportsCar1("Tesla", "Model S Plaid", 2023, 200, 2.3);
    sportsCar1.displayInfo();

    std::cout << std::endl;

    // setter and getter
    SportsCar sportsCar2("Corvette", "E-Ray", 2025, 183, 2.4);
    sportsCar2.setTopSpeed(220);
    sportsCar2.setZeroToSixty(2.7);
    sportsCar2.displayInfo();

    std::cout << std::endl;

    // derived class object - truck
    Truck truck1("Ford", "F-150", 2023, 52.8, 2000);
    truck1.displayInfo();

    std::cout << std::endl;

    // setter and getter
    Truck truck2("Chevrolet", "Silverado", 2024);
    truck2.setCargoSize(53.8);
    truck2.setPayload(2100);
    truck2.displayInfo();

    std::cout << std::endl;

    // using friend function
    std::cout << "Sports Car 1 VIN: " << getVIN(sportsCar1) << std::endl;
    std::cout << "Sports Car 2 VIN: " << getVIN(sportsCar2) << std::endl;
    std::cout << "Truck 1 VIN: " << getVIN(truck1) << std::endl;
    std::cout << "Truck 2 VIN: " << getVIN(truck2) << std::endl;

    std::cout << std::endl;
    
    return 0;
};
