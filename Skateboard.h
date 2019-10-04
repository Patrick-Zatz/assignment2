//
// Created by Patrick Zatz on 10/4/19.
//

#ifndef DRIVINGSIMULATOR_SKATEBOARD_H
#define DRIVINGSIMULATOR_SKATEBOARD_H

#include "Vehicle.h"
#include <stdlib.h>
#include <stdlib>
#include <time.h>

class Skateboard : public Vehicle {

public:
    explicit Skateboard(string brand, string model);

    virtual ~Skateboard();
    virtual double mileageEstimate(double time);

    virtual string toString();
};


#endif //DRIVINGSIMULATOR_SKATEBOARD_H
