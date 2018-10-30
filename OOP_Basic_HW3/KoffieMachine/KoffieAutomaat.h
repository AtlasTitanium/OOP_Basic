#pragma once
#include "Munten.h"

class KoffieAutomaat
{
private:
	float inDeMachine;
public:
	void coinInsert(float insertedPrice);
	void buyDrink(int selection);
};

