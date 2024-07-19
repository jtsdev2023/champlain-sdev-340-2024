// main.cpp


#include <iostream>
#include "classes.h"
#include "read-yaml.cpp"



// main
int main()
{
    auto yamlObject = readYamlFile("test.yaml");

    for (const auto& dict : yamlObject)
    {
        std::cout << std::endl;

        if (dict["type"].as<std::string>() == "sedan")
        {
            Sedan sedan(
                dict["type"].as<std::string>(),
                dict["transmission"].as<std::string>(),
                dict["drivetrain"].as<std::string>(),
                dict["engine"].as<std::string>(),
                dict["fuel"].as<std::string>(),
                dict["doors"].as<std::string>(),
                dict["wheels"].as<std::string>(),
                dict["battery"].as<std::string>()
            );

            sedan.displayInfo();
        }

        else if (dict["type"].as<std::string>() == "truck")
        {
            Truck truck(
                dict["type"].as<std::string>(),
                dict["transmission"].as<std::string>(),
                dict["drivetrain"].as<std::string>(),
                dict["engine"].as<std::string>(),
                dict["fuel"].as<std::string>(),
                dict["doors"].as<std::string>(),
                dict["wheels"].as<std::string>(),
                dict["battery"].as<std::string>()
            );

            truck.displayInfo();
        }

    }

    std::cout << std::endl;

    return 0;
};
