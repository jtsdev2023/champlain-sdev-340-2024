#include <iostream>
#include <string>

// Define the Car class
class Car {
private:
    std::string make;
    std::string model;
    int year;

public:
    // Constructor
    Car(std::string make, std::string model, int year) {
        this->make = make;
        this->model = model;
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

    // Display car information
    void displayInfo() const {
        std::cout << "Car Information: " << std::endl;
        std::cout << "Make: " << make << std::endl;
        std::cout << "Model: " << model << std::endl;
        std::cout << "Year: " << year << std::endl;
    }
};

int main() {
    // Create a Car object
    Car myCar("Toyota", "Camry", 2022);

    // Display car information
    myCar.displayInfo();

    return 0;
}