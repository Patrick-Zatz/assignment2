//
// Created by Patrick Zatz on 10/4/19.
//

#include "Skateboard.h"


Skateboard::Skateboard(string brand, string model) {
    setBrand(brand);
    setModel(model);
}

Skateboard::~Skateboard() = default;

double Skateboard::mileageEstimate(double time) {
	// this code was taken from: http://forums.codeguru.com/showthread.php?351834-how-do-i-generate-a-random-float-between-0-and-1
    double mileage;
    srand(unsigned)(time(NULL));
    mileage = (float) rand()/(RAND_MAX/2);
    if(time > 25 && time < 250){
    	mileage += (rand()%(time/3))+1;
    }
    return mileage;
}