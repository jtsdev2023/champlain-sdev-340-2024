// sdev-340-discussion-car-sim.cpp

#include "sdev-340-discussion-car-sim.h"


int main() {
    // Create a Car object
    Automobile myJeep("Jeep", "Wrangler", "Rubicon", "JL 392", 2021);

    // Display car information
    myJeep.displayInfo();
    myJeep.ignition(false);
    myJeep.automaticTransmission('p');
    myJeep.windshieldWipers(false);

    return 0;
}