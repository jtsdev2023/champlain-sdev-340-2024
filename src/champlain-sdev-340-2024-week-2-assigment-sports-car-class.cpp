// champlain-sdev-340-2024-week-2-assigment-sports-car-class.cpp

#include "../include/champlain-sdev-340-week-2-assignment/champlain-sdev-340-2024-week-2-assigment-sports-car-class.h"

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

        // display info member function
        void displayInfo() const override {
            Automobile::displayInfo();
            // using raw pointer for top speed variable
            double* topSpeedPointer = const_cast<double*>(&topSpeed);
            std::cout << "Top Speed: " << *topSpeedPointer << " MPH" << std::endl;
            std::cout << "Zero to Sixty: " << zeroToSixty << " seconds" << std::endl;
        }

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
