#pragma once
#include <string>

class Persoon
{
private:
	int leeftijd;
	std::string naam;
public:
	Persoon();
	int getAge();
	std::string getName();
};

