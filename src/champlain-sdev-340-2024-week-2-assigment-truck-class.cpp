// champlain-sdev-340-2024-week-2-assigment-truck-class.cpp

#include "../include/champlain-sdev-340-week-2-assignment/champlain-sdev-340-2024-week-2-assigment-truck-class.h"


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

        // display info member function
        void displayInfo() const override {
            std::cout << "Model: " << Truck::model << std::endl;
        }

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
