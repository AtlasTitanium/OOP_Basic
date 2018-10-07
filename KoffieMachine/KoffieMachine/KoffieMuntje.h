#pragma once
#include "Munten.h"

class KoffieMuntje : public Munten
{
private:
	float value = 2.0f;
public:
	float insertCoin();
};
