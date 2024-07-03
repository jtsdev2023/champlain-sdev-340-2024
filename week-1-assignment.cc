#include <iostream>
#include <string>

// Define the Car class
class Car {
private:
    std::string make;
    std::string model;
    std::string edition;
    int year;

public:
    // Constructor
    Car(std::string make, std::string model, std::string edition, int year) {
        this->make = make;
        this->model = model;
        this->edition = edition;
        this->year = year;
    }

    // Getter for Make
    std::string getMake() const {
        return make;
    }

    // Getter for Model
    std::string getModel() const {
        return model;
    }

    // Getter for Year
    int getYear() const {
        return year;
    }

    // Method to turn on the ignition
    void carIgnition(bool ignition) {
        switch (ignition) {
            case true:
                std::cout << "Ignition is on." << std::endl;
                break;
            case false:
                std::cout << "Ignition is off." << std::endl;
                break;
        }
    }

    // Method for automatic transmission
    void automaticTransmission(char gear) {
        gear = toupper(gear);
        switch (gear) {
            case 'P':
                std::cout << "Automatic transmission is in 'PARK'." << std::endl;
                break;
            case 'N':
                std::cout << "Automatic transmission is in 'NEUTRAL'." << std::endl;
                break;
            case 'D':
                std::cout << "Automatic transmission is in 'DRIVE'." << std::endl;
                break;
        }
    }

    // Display car information
    void displayInfo() const {
        std::cout << "Vehicle Information: " << std::endl;
        std::cout << "Make: " << make << std::endl;
        std::cout << "Model: " << model << std::endl;
        std::cout << "Edition: " << edition << std::endl;
        std::cout << "Year: " << year << std::endl;
    }
};

int main() {
    // Create a Car object
    Car myCar("Jeep", "Wrangler", "JK 392", 2020);

    // Display car information
    myCar.displayInfo();
    myCar.carIgnition(true);
    myCar.automaticTransmission('d');

    return 0;
}