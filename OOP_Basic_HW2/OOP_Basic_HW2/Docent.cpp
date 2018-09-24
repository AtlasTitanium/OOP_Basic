#include "pch.h"
#include "Docent.h"
#include "Persoon.h"

Docent::Docent(int ID, std::string name, int age)
{
	naam = name;
	leeftijd = age;
	teacherID = ID;
}

int Docent::getID() {
	return teacherID;
}
