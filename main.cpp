// main.cpp

#include <string>
#include <iostream>

// base class
class Automobile
{
    // friend std::string getModel(Automobile &);

    private:


    public:
        // declare variables
        std::string make;
        std::string model;
        int year;

        // constructor
        Automobile(std::string make, std::string model, int year) :
            make(make), model(model), year(year) {}

        // display info member function
        virtual void displayInfo() const {
            std::cout << "Make: " << make << std::endl;
            std::cout << "Model: " << model << std::endl;
            std::cout << "Year: " << year << std::endl;
        }
};

// friend function

std::string getModel(Automobile &automobile) {
    return automobile.model;
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

        // display info member function
        void displayInfo() const override {
            Automobile::displayInfo();
            std::cout << "Top Speed: " << topSpeed << " MPH" << std::endl;
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
    SportsCar sportsCar1("Ferrari", "F8 Tributo", 2022, 211, 2.9);
    sportsCar1.displayInfo();

    std::cout << std::endl;
    
    // setter and getter
    SportsCar sportsCar2("Lamborghini", "Aventador", 2023, 217, 2.8);
    sportsCar2.setTopSpeed(220);
    sportsCar2.setZeroToSixty(2.7);
    sportsCar2.displayInfo();

    std::cout << std::endl;

    // derived class object - truck
    Truck truck1("Ford", "F-150", 2023, 52.8, 2000);
    truck1.displayInfo();

    std::cout << std::endl;
    
    return 0;
};
