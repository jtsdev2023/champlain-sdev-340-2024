// main.cpp

#include <string>
#include <iostream>

// base class
class Automobile
{
    private:
        std::string make;
        std::string model;
        int year;

    public:
        Automobile(std::string make, std::string model, int year) :
            make(make), model(model), year(year) {}

        virtual void displayInfo() const {
            std::cout << "Make: " << make << std::endl;
            std::cout << "Model: " << model << std::endl;
            std::cout << "Year: " << year << std::endl;
        }

};

// sports car derived class
class SportsCar : public Automobile
{
    private:
        double topSpeed;
        double zeroToSixty;

    public:
        SportsCar(std::string make, std::string model, int year, double topSpeed, double zeroToSixty) :
            Automobile(make, model, year), topSpeed(topSpeed), zeroToSixty(zeroToSixty) {}

        void displayInfo() const override {
            Automobile::displayInfo();
            std::cout << "Top Speed: " << topSpeed << " MPH" << std::endl;
            std::cout << "Zero to Sixty: " << zeroToSixty << " seconds" << std::endl;
        }
};

// truck class
class Truck : public Automobile
{
    private:
        double cargoSize;
        double payload;

    public:
        Truck(std::string make, std::string model, int year, double cargoSize, double payload) :
            Automobile(make, model, year), cargoSize(cargoSize), payload(payload) {}

        void displayInfo() const override {
            Automobile::displayInfo();
            std::cout << "Cargo Size: " << cargoSize << " cubic feet" << std::endl;
            std::cout << "Payload: " << payload << " lbs" << std::endl;
        }
};


// main
int main()
{
    std::cout << std::endl;

    // base class object
    Automobile car("Honda", "Accord", 2024);
    car.displayInfo();

    std::cout << std::endl;

    // derived class object - sports car
    SportsCar sportsCar("Ferrari", "F8 Tributo", 2022, 211, 2.9);
    sportsCar.displayInfo();

    std::cout << std::endl;

    // derived class object - truck
    Truck truck("Ford", "F-150", 2023, 52.8, 2000);
    truck.displayInfo();

    std::cout << std::endl;
    
    return 0;
};
