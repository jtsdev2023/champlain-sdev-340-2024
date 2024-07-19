// read-yaml.cpp

#include <fstream>
#include <iostream>

#include "yaml-cpp/yaml.h"


// function to read input from yaml file
void readYamlFile(const std::string& filename) {
    try 
    {
        YAML::Node config = YAML::LoadFile(filename);

        // // check if the file is empty
        // if (config.IsNull()) {
        //     std::cout << "File is empty" << std::endl;
        //     return;
        // }

        // // check if the file is a map
        // if (!config.IsMap()) {
        //     std::cout << "File is not a map" << std::endl;
        //     return;
        // }

        // Assuming the root is a list of maps
        for (const auto& map : config) {
            if (map.IsMap()) {
                std::cout << std::endl;
                for (const auto& pair : map) {
                    std::string key = pair.first.as<std::string>();
                    std::string value = pair.second.as<std::string>(); // Assuming all values are strings for simplicity
                    std::cout << key << ": " << value << std::endl;
                }
                std::cout << std::endl;
            }
        }


        // // this worked for the test
        // // iterate over the list
        // for (const auto& item : config) {
        //     std::cout << item.as<std::string>() << std::endl;
        // }
    } 
    catch (const YAML::ParserException& e) 
    {
        std::cout << "Parser Exception: " << e.what() << std::endl;
    }
    catch (const YAML::RepresentationException& e) 
    {
        std::cout << "Representation Exception: " << e.what() << std::endl;
    }
    catch (const YAML::Exception& e) 
    {
        std::cout << "Exception: " << e.what() << std::endl;
    }
};


// main
int main()
{
    // read the YAML file
    readYamlFile("test.yaml");

    return 0;
}