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
                std::cout << "Ignition is 'ON'." << std::endl;
                break;
            case false:
                std::cout << "Ignition is 'ON'." << std::endl;
                break;
        }
    }

    // Method to turn on the backup lights
    void backupLights(bool lights) {
        switch (lights) {
            case true:
                std::cout << "Backup lights are 'ON'." << std::endl;
                break;
            case false:
                std::cout << "Backup lights are 'OFF'." << std::endl;
                break;
        }
    }


    // Method to turn on the headlights
    void headlights(bool lights) {
        switch (lights) {
            case true:
                std::cout << "Headlights are 'ON'." << std::endl;
                break;
            case false:
                std::cout << "Headlights are 'OFF'." << std::endl;
                break;
        }
    }

    // Method to turn on the windshield wipers
    void windshieldWipers(bool wipers) {
        switch (wipers) {
            case true:
                std::cout << "Windshield wipers are 'ON'." << std::endl;
                headlights(true);
                break;
            case false:
                std::cout << "Windshield wipers are 'OFF'." << std::endl;
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
            case 'R':
                std::cout << "Automatic transmission is in 'REVERSE'." << std::endl;
                backupLights(true);
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
    myCar.automaticTransmission('r');
    myCar.windshieldWipers(true);

    return 0;
}