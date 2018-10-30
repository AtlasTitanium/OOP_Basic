#pragma once
#include <string>
#include <iostream>

class Boek
{
public:
	Boek();
	virtual ~Boek();
	Boek(const Boek& b);
	Boek& operator=(const Boek& b);
	
	Boek(std::string type);
	void setStatus(std::string status);
	std::string naam = "onbekend";
	std::string status = "onbekend";
};

