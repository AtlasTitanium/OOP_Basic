#pragma once

class Train
{
private:
	float pricePerKilometer = 1.0;
	float maxAmountPassengers = 5;
	float extraPrice = 0;
public:
	virtual float calculateIncome(float kilometersDriven) = 0;
};

