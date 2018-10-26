#pragma once

#include "vervoermiddel.h"

class Car : public vervoermiddel
{
public:
	Car();
	float setPricePerKilometer(int ppk) override;
	float setMaxAmountPassengers(int amount) override;
	float calculateIncome(int price, int passengers) override;
};

