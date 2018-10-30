#include "pch.h"
#include "Boek.h"


Boek::Boek() {
}
Boek::~Boek() {
}

Boek::Boek(const Boek& boek) {
	std::cout << "Boek: copy-ctor" << std::endl;
	naam = boek.naam;
}
Boek& Boek::operator=(const Boek& anderBoek) {
	std::cout << "Broodmandje: assignment-oper" << std::endl;
	if (this != &anderBoek) {
		naam = anderBoek.naam;
	}
	return *this;
}


Boek::Boek(std::string type) {
	naam = type;
	status = "in";
}

void Boek::setStatus(std::string state) {
	status = state;
}
