#include "pch.h"
#include "Docent.h"
#include "Persoon.h"

Docent::Docent(int ID, std::string name, int age) : Persoon(age, name)
{
	teacherID = ID;
}

int Docent::getID() {
	return teacherID;
}
