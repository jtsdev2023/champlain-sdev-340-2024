// sdev-340-discussion-car-sim-class-automobile-derived-class.cpp

#pragma once

#include "sdev-340-discussion-car-sim-class-automobile.h"

// Derived class of Automobile
class JeepWranglerRubicon392 : public Automobile
{
    public:
        JeepWranglerRubicon392(
            string make, string model, string trim, string edition, int year);
        
        virtual ~JeepWranglerRubicon392()
        {
            cout << "JeepWranglerRubicon392 destructor called." << endl;
        };

        void automaticTransmission(char gear);
        void windshieldWipers(bool wipers);
};
