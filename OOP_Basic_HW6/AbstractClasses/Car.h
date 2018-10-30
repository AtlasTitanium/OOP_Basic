#pragma once

class Car
{
private:
	float pricePerKilometer = 1.0;
	float maxAmountPassengers = 5;
	float entryPrice = 0;
public:
	virtual float calculateIncome(float kilometersDriven) = 0;
};

