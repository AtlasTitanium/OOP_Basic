#pragma once
class vervoermiddel
{
private:
	float pricePerKilometer;
	float maxAmountPassengers;
public:
	vervoermiddel();
	~vervoermiddel();

	virtual float setPricePerKilometer(int ppk) = 0;
	virtual float setMaxAmountPassengers(int amount) = 0;
	virtual float calculateIncome(int price, int passengers) = 0;
};

