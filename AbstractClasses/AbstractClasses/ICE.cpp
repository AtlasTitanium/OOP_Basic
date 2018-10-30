#include "pch.h"
#include "ICE.h"


ICE::ICE()
{
}

ICE::ICE(float ppk, float map, float extrPrice)
{
	pricePerKilometer = ppk;
	maxAmountPassengers = map;
	extraPrice = extrPrice;
}

ICE::~ICE()
{
}

float ICE::calculateIncome(float kilometersDriven) {
	return (maxAmountPassengers * extraPrice) + ((kilometersDriven * pricePerKilometer) * maxAmountPassengers);

}
