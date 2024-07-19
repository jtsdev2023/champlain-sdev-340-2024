// read-yaml.cpp

#include <fstream>
#include <iostream>

#include "yaml-cpp/yaml.h"


// read yaml file
YAML::Node readYamlFile(const std::string& filename)
{
    YAML::Node yamlObject = YAML::LoadFile(filename);
    return yamlObject;
};