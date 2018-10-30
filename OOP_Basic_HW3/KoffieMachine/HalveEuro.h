#pragma once
#include "Munten.h"

class HalveEuro : public Munten
{
private:
	float value = 0.5f;
public:
	float insertCoin();
};

