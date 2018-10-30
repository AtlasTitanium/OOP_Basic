#include "pch.h"
#include "Taxi.h"


Taxi::Taxi()
{
}

Taxi::Taxi(float ppk, float map, float entrPrice)
{
	pricePerKilometer = ppk;
	maxAmountPassengers = map;
	entryPrice = entrPrice;
}

Taxi::~Taxi()
{
}

float Taxi::calculateIncome(float kilometersDriven) {
	return (maxAmountPassengers * entryPrice) + ((kilometersDriven * pricePerKilometer) * maxAmountPassengers);
}
