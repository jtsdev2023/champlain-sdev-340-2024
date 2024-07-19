// main.cpp

#include <fstream>
#include <iostream>

#include "yaml-cpp/yaml.h"
#include "classes.h"


// read yaml file
YAML::Node readYamlFile(const std::string& filename)
{
    YAML::Node yamlObject = YAML::LoadFile(filename);
    return yamlObject;
};

// main
int main()
{
    auto yamlObject = readYamlFile("test.yaml");

    for (const auto& dict : yamlObject)
    {
        for (const auto& kvpair : dict) 
        {
            std::string key = kvpair.first.as<std::string>();
            std::string value = kvpair.second.as<std::string>();
            std::cout << key << ": " << value << std::endl;
            
            // switch (key[0])
            // {
            //     case 't':
            //         std::cout << "Type: " << value << std::endl;
            //         break;
            //     case 'e':
            //         std::cout << "Engine: " << value << std::endl;
            //         break;
            //     case 'f':
            //         std::cout << "Fuel: " << value << std::endl;
            //         break;
            //     case 'd':
            //         std::cout << "Doors: " << value << std::endl;
            //         break;
            //     case 'w':
            //         std::cout << "Wheels: " << value << std::endl;
            //         break;
            //     case 'b':
            //         std::cout << "Battery: " << value << std::endl;
            //         break;
            //     case 'm':
            //         std::cout << "Make: " << value << std::endl;
            //         break;
            //     case 'y':
            //         std::cout << "Year: " << value << std::endl;
            //         break;
            //     default:
            //         std::cout << "Unknown key: " << key << std::endl;
            //         break;
        }
    }

    // // create a sedan object
    // Sedan sedan("Toyota", "Camry", 2020);
    // sedan.displayInfo();

    // std::cout << std::endl;

    // // create a truck object
    // Truck truck("Ford", "F-150", 2020);
    // truck.displayInfo();

    // std::cout << std::endl;

    return 0;
};
