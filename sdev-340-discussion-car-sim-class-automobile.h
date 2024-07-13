// sdev-340-discussion-car-sim.h

#pragma once
#include "sdev-340-discussion-car-sim-class-automobile.cpp"

// Define the Automobile class
// this program compiles and runs with just the Automobile class
// why do i see some examples similar to the BaseVehicle class below?
// it seems unnecessary to have a BaseVehicle class declared like below
class Automobile
{
    private:
        // Member variables
        string make;
        string model;
        string trim;
        string edition;
        int year;

    public:
        Automobile(string make, string model, string trim, string edition, int year)
        {};

        virtual ~Automobile()
        {};

        // Getter for Make
        string getMake() const
        {};

        // Getter for Model
        string getModel() const
        {};

        // Getter for Year
        int getYear() const
        {};

        // Method to turn on the ignition
        void ignition(bool ignition)
        {};

        // Method to shift the transmission
        void automaticTransmission(char gear)
        {};

        // Method to turn on the windshield wipers
        void windshieldWipers(bool wipers)
        {};

        // Method to display car information
        void displayInfo() const
        {};
};

// Derived class
// this isn't working
// class JeepWranglerRubicon392;

// Define the BaseVehicle class
// class BaseVehicle : public Automobile
// {
//     public:
//         BaseVehicle(string make, string model, string trim, string edition, int year);
//         virtual ~BaseVehicle();

//         void accelerate();
//         void brake();
//         void displayInfo() const;

//     private:
//         string make;
//         string model;
//         string trim;
//         string edition;
//         int year;
        
// };
