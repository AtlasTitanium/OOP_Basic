#pragma once
#include "Train.h"

class Intercity : public Train
{
private:
	float pricePerKilometer = 1;
	float maxAmountPassengers = 100;
	float extraPrice = 0;
public:
	Intercity();
	Intercity(float ppk, float map, float extrPrice);
	~Intercity();
	float calculateIncome(float kilometersDriven) override;
};

