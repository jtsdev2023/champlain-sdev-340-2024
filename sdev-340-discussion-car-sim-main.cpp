// sdev-340-discussion-car-sim.cpp

#include "sdev-340-discussion-car-sim-class-automobile.h"
#include "sdev-340-discussion-car-sim-class-automobile-derived-class.h"


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

    cout << endl;
    cout << endl;

    // Create an instance of the derived class JeepWranglerRubicon392
    JeepWranglerRubicon392 myJeepWrangler("Jeep", "Wrangler", "Rubicon", "JL 392", 2021);

    // Print the myJeepWrangler object
    cout << myJeepWrangler << endl;

    // Display car information
    myJeepWrangler.displayInfo();
    myJeepWrangler.ignition(false);
    myJeepWrangler.automaticTransmission('p');
    myJeepWrangler.windshieldWipers(false);

    return 0;
};
