#include "pch.h"
#include "Student.h"

Student::Student(int ID, std::string name, int age)
{
	naam = name;
	leeftijd = age;
	studentID = ID;
}

int Student::getID() { 
	return studentID;
}