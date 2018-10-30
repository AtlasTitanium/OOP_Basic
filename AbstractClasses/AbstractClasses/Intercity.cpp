#include "pch.h"
#include "Intercity.h"


Intercity::Intercity()
{
}

Intercity::Intercity(float ppk, float map, float extrPrice)
{
	pricePerKilometer = ppk;
	maxAmountPassengers = map;
	extraPrice = extrPrice;
}

Intercity::~Intercity()
{
}

float Intercity::calculateIncome(float kilometersDriven) {
	return (maxAmountPassengers * extraPrice) + ((kilometersDriven * pricePerKilometer) * maxAmountPassengers);
}

