#pragma once
#include "Car.h"

class Bus : public Car
{
private:
	float pricePerKilometer = 1.0;
	float maxAmountPassengers = 40;
	float entryPrice = 0;
public:
	Bus();
	Bus(float ppk, float map, float entrPrice);
	~Bus();
	float calculateIncome(float kilometersDriven) override;
};

