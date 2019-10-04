//
// Created by Esteban Parra on 9/5/19.
//

#include "Jet.h"

Jet::Jet() {
    numberOfEngines = 1;
}

Jet::~Jet() = default;

int Jet::getNumEngines() {
    return numberOfEngines;
}

void Jet::setNumEngines(int numEngines){
    if(numEngines > 1)
        numberOfEngines = numEngines;
    else if(numEngines <= 0)
        numberOfEngines = 0;
}


double Jet::mileageEstimate(double time) {
    if(numberOfEngines > 2)
        setFuelType("Rocket");
    double mileage = (rand()%61)+40;
    if (fuelType == "Rocket") {
        mileage += mileage * (0.055 * numberOfEngines);
    }
    return mileage;
}