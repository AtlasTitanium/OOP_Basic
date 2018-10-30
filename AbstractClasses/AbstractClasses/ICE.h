#pragma once
#include "Train.h"

class ICE : public Train
{
private:
	float pricePerKilometer = 0.5;
	float maxAmountPassengers = 200;
	float extraPrice = 20;
public:
	ICE();
	ICE(float ppk, float map, float extrPrice);
	~ICE();
	float calculateIncome(float kilometersDriven) override;
};

