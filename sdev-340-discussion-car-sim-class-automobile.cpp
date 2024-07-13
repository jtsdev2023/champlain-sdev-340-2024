// sdev-340-discussion-car-sim-class-automobile.cpp

#include <string>
#include <iostream>

using namespace std;


// Define the Car class
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
        // Constructor
        Automobile(string make, string model, string trim, string edition, int year)
        {
            // Initialize member variables... like self.make = make in Python class
            this->make = make;
            this->model = model;
            this->trim = trim;
            this->edition = edition;
            this->year = year;
        }

        // Getter for Make
        string getMake() const
        {
            return make;
        }

        // Getter for Model
        string getModel() const
        {
            return model;
        }

        // Getter for Year
        int getYear() const
        {
            return year;
        }

        // Method to turn on the ignition
        void ignition(bool ignition)
        {
            switch (ignition)
            {
                case true:
                    cout << "Ignition is 'ON'." << endl;
                    break;
                case false:
                    cout << "Ignition is 'ON'." << endl;
                    break;
            }
        }

        // Method to turn on the backup lights
        void backuplights(bool lights)
        {
            switch (lights)
            {
                case true:
                    cout << "Backuplights are 'ON'." << endl;
                    break;
                case false:
                    cout << "Backuplights are 'OFF'." << endl;
                    break;
            }
        }


        // Method to turn on the headlights
        void headlights(bool lights)
        {
            switch (lights)
            {
                case true:
                    cout << "Headlights are 'ON'." << endl;
                    break;
                case false:
                    cout << "Headlights are 'OFF'." << endl;
                    break;
            }
        }

        // Method to turn on the windshield wipers
        void windshieldWipers(bool wipers)
        {
            switch (wipers)
            {
                case true:
                    cout << "Windshield wipers are 'ON'." << endl;
                    headlights(true);
                    break;
                case false:
                    cout << "Windshield wipers are 'OFF'." << endl;
                    break;
            }
        }

        // Method for automatic transmission
        void automaticTransmission(char gear)
        {
            gear = toupper(gear);
            switch (gear)
            {
                case 'P':
                    cout << "Automatic transmission is in 'PARK'." << endl;
                    break;
                case 'N':
                    cout << "Automatic transmission is in 'NEUTRAL'." << endl;
                    break;
                case 'D':
                    cout << "Automatic transmission is in 'DRIVE'." << endl;
                    break;
                case 'R':
                    cout << "Automatic transmission is in 'REVERSE'." << endl;
                    backuplights(true);
                    break;
            }
        }

        // Display car information
        void displayInfo() const
        {
            cout << "Vehicle Information: " << endl;
            cout << "Make: " << make << endl;
            cout << "Model: " << model << endl;
            cout << "Trim: " << trim << endl;
            cout << "Edition: " << edition << endl;
            cout << "Year: " << year << endl;
        }

        // Looking to implement something similar to Python __reper__() and __str__()
        // magic methods in C++ to display the object information
        // found some examples using friend ostream& operator<<
        // not sure this even makes sense in C++ because it seems like
        // you just manual code a method to provide the same functionality
        friend ostream& operator<<(ostream& automobileOsStream, const Automobile& automobile)
        {
            automobileOsStream << "Class: Represents an automobile object" << endl;
            automobileOsStream << "       " << automobile.make;
            automobileOsStream << " / " << automobile.model;
            automobileOsStream << " / " << automobile.trim;
            automobileOsStream << " / " << automobile.edition;
            automobileOsStream << " / " << automobile.year << endl;
            return automobileOsStream;
        };
};