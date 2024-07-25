// main.cpp

#include <random>
#include <string>
#include <memory>
#include <sstream>
#include <iostream>


// base class
class Automobile
{
    // friend function declaration
    friend std::string getVIN(Automobile &);

    private:
        // code found online to generate a hex string which be used as a VIN
        std::string generateRandomHexString(size_t length) const {
            std::string hexChars = "0123456789ABCDEF";
            std::stringstream ss;
            std::random_device rd;
            std::mt19937 generator(rd());
            std::uniform_int_distribution<> distribution(0, hexChars.size() - 1);

            for(size_t i = 0; i < length; ++i) {
                ss << hexChars[distribution(generator)];
            }

            return ss.str();
        }

        // VIN will be used to demonstrate the friend function
        std::string VIN = generateRandomHexString(17);

    public:
        // declare variables
        std::string make;
        std::string model;
        // smart pointer for year
        std::unique_ptr <int> year;

        // constructor
        Automobile(std::string make, std::string model, int year) :
            make(make), model(model), year(std::make_unique<int>(year)) {}

        // // display info member function
        // virtual void displayInfo() const {
        //     std::cout << "Make: " << make << std::endl;
        //     std::cout << "Model: " << model << std::endl;
        //     std::cout << "Year: " << *year << std::endl;
        // }

        // UDT attempt
        template <typename T1, typename T2>
        void displayInfo(const T1& x, const T2& y) const {
            std::cout << x << ": " << y << std::endl;
        }

};

// friend function definition
std::string getVIN(Automobile &automobile) {
    return automobile.VIN;
}

// sports car derived class
class SportsCar : public Automobile
{
    private:


    public:
        // declare variables
        double topSpeed;
        double zeroToSixty;

        // constructor
        SportsCar(
            std::string make, std::string model, int year, double topSpeed, double zeroToSixty) :
            Automobile(make, model, year), topSpeed(topSpeed), zeroToSixty(zeroToSixty) {}

        // // display info member function
        // void displayInfo() const override {
        //     Automobile::displayInfo();
        //     // using raw pointer for top speed variable
        //     double* topSpeedPointer = const_cast<double*>(&topSpeed);
        //     std::cout << "Top Speed: " << *topSpeedPointer << " MPH" << std::endl;
        //     std::cout << "Zero to Sixty: " << zeroToSixty << " seconds" << std::endl;
        // }

    public:
        // constructor using mutators setter and getter
        SportsCar(
            std::string make, std::string model, int year) :
            Automobile(make, model, year) {}

        // setter - top speed
        void setTopSpeed(double topSpeed) {
            SportsCar::topSpeed = topSpeed;
        }

        // setter - zero to sixty
        void setZeroToSixty(double zeroToSixty) {
            SportsCar::zeroToSixty = zeroToSixty;
        }

        // getter - top speed
        double getTopSpeed() const {
            return topSpeed;
        }

        // getter - zero to sixty
        double getZeroToSixty() const {
            return zeroToSixty;
        }
};

// truck class
class Truck : public Automobile
{
    private:
        

    public:
        // declare variables
        double cargoSize;
        double payload;

        // constructor
        Truck(std::string make, std::string model, int year, double cargoSize, double payload) :
            Automobile(make, model, year), cargoSize(cargoSize), payload(payload) {}

        // // display info member function
        // void displayInfo() const override {
        //     std::cout << "Model: " << Truck::model << std::endl;
        // }

    public:
        // constructor using mutators setter and getter
        Truck(std::string make, std::string model, int year) :
            Automobile(make, model, year) {}

        // setter - cargo size
        void setCargoSize(double cargoSize) {
            Truck::cargoSize = cargoSize;
        }

        // setter - payload
        void setPayload(double payload) {
            Truck::payload = payload;
        }

        // getter - cargo size
        double getCargoSize() const {
            return cargoSize;
        }

        // getter - payload
        double getPayload() const {
            return payload;
        }
};


// main
int main()
{
    std::cout << std::endl;

    // base class object
    Automobile car("Honda", "Accord", 2024);
    car.displayInfo("key1", "value1");

    std::cout << std::endl;

    // derived class object - sports car
    SportsCar sportsCar1("Tesla", "Model S Plaid", 2023, 200, 2.3);
    // sportsCar1.displayInfo("key2", "value2");

    std::cout << std::endl;

    // setter and getter
    SportsCar sportsCar2("Corvette", "E-Ray", 2025);
    sportsCar2.setTopSpeed(183);
    sportsCar2.setZeroToSixty(2.4);
    // sportsCar2.displayInfo("key 3", "value 3");

    std::cout << std::endl;

    // derived class object - truck
    Truck truck1("Ford", "F-150", 2023, 52.8, 2000);
    // truck1.displayInfo("key4", "value4");

    std::cout << std::endl;

    // setter and getter
    Truck truck2("Chevrolet", "Silverado", 2024);
    truck2.setCargoSize(53.8);
    truck2.setPayload(2100);
    // truck2.displayInfo("key5", "value5");

    std::cout << std::endl;

    // using friend function
    std::cout << "Sports Car 1 VIN: " << getVIN(sportsCar1) << std::endl;
    std::cout << "Sports Car 2 VIN: " << getVIN(sportsCar2) << std::endl;
    std::cout << "Truck 1 VIN: " << getVIN(truck1) << std::endl;
    std::cout << "Truck 2 VIN: " << getVIN(truck2) << std::endl;

    std::cout << std::endl;
    
    return 0;
};
