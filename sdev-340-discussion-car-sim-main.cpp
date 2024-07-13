// sdev-340-discussion-car-sim.cpp

#include "sdev-340-discussion-car-sim-class-automobile.h"


int main() {
    // Create a Car object
    Automobile myJeep("Jeep", "Wrangler", "Rubicon", "JL 392", 2021);

    // print the myJeep object
    cout << myJeep << endl;
    
    // Display car information
    myJeep.displayInfo();
    myJeep.ignition(false);
    myJeep.automaticTransmission('p');
    myJeep.windshieldWipers(false);

    return 0;
}