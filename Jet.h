//
// Created by Patrick Zatz on 10/4/19
//

#ifndef DRIVINGSIMULATOR_JET_H
#define DRIVINGSIMULATOR_JET_H

#include "PoweredVehicle.h"
#include <cstdlib>

class Jet : public PoweredVehicle {

private:
    int numberOfEngines;

public:
    Jet();

    virtual ~Jet();
    int getNumEngines();
    void setNumEngines(int numEngines);
    virtual double mileageEstimate(double time);
    virtual string toString();
};


#endif //DRIVINGSIMULATOR_JET_H
