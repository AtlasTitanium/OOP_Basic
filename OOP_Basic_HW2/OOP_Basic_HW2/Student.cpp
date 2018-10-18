#include "pch.h"
#include "Student.h"

Student::Student(int ID, std::string name, int age) : Persoon(age,name)
{
	studentID = ID;
}

int Student::getID() { 
	return studentID;
}