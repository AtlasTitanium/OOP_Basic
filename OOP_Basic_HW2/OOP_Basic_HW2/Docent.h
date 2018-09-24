#pragma once
#include "Persoon.h"
#include <string>

class Docent : public Persoon {
private:
	int teacherID;
public:
	Docent(int ID, std::string name, int age);
	int getID();
};

