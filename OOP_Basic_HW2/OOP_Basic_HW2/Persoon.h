#pragma once
#include <string>

class Persoon
{
public:
	int leeftijd;
	std::string naam;

	Persoon(int age, std::string name);
	int getAge();
	std::string getName();
	virtual int getID();
};

