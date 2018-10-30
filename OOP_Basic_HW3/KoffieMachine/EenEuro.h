#pragma once
#include "Munten.h"

class EenEuro : public Munten
{
private:
	float value = 1.0f;
public:
	float insertCoin();
};

