#include "pch.h"
#include "Bus.h"


Bus::Bus()
{
}

Bus::Bus(float ppk, float map, float entrPrice)
{
	pricePerKilometer = ppk;
	maxAmountPassengers = map;
	entryPrice = entrPrice;
}

Bus::~Bus()
{
}

float Bus::calculateIncome(float kilometersDriven) {
	return (maxAmountPassengers * entryPrice) + ((kilometersDriven * pricePerKilometer) * maxAmountPassengers);
}
