#pragma once
#include "Car.h"

class Taxi : public Car
{
private:
	float pricePerKilometer = 0.5;
	float maxAmountPassengers = 5;
	float entryPrice = 5;
public:
	Taxi();
	Taxi(float ppk, float map, float entrPrice);
	~Taxi();
	float calculateIncome(float kilometersDriven) override;
};

