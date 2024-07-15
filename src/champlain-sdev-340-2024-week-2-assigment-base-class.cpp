// champlain-sdev-340-2024-week-2-assignment-base-class.cpp

#include "../include/champlain-sdev-340-week-2-assignment/champlain-sdev-340-2024-week-2-assigment-base-class.h"


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

        // VIN will be used to dominate the friend function
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

        // display info member function
        virtual void displayInfo() const {
            std::cout << "Make: " << make << std::endl;
            std::cout << "Model: " << model << std::endl;
            std::cout << "Year: " << *year << std::endl;
        }

};

// friend function definition
std::string getVIN(Automobile &automobile) {
    return automobile.VIN;
}


