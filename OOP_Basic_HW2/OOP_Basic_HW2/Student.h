#pragma once
#include "Persoon.h"
#include <string>

class Student : public Persoon {
private:
	int studentID;
public:
	Student(int ID, std::string name, int age);
	int getID();
};

