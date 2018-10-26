#include "pch.h"
#include "Bibliotheek.h"


Bibliotheek::Bibliotheek()
{
	boek = NULL;
	std::cout << "   Een nieuwe bibliotheek is gemaakt!" << std::endl;
}

void Bibliotheek::toon() {
	if (boek != NULL) {
		std::cout << "   Bibliotheek bevat: " << boek->naam << "		Status: " << boek->status << std::endl;
	}
	else {
		std::cout << "There are no books currently in the Library." << std::endl;
	}
	
}

void Bibliotheek::voegToe(std::string type) {
	std::cout << std::endl << "Add Book : ";
	if (boek != NULL) {
		if (boek->status == "out") {
			std::cout << "Book has been lend, please return the book and destroy it before inserting a new one" << std::endl;
		}
		else {
			std::cout << "There's already a book in the library, please destroy the book before inserting a new one." << std::endl;
		}
	}
	else {
		boek = new Boek(type);
		std::cout << "Book added!" << std::endl;
	}
}

void Bibliotheek::leenUit() {
	std::cout << std::endl << "Lend Out Book : ";
	if (boek != NULL) {
		if (boek->status == "out") {
			std::cout << "Book is already out of the Library." << std::endl;
		}
		else {
			boek->setStatus("out");
			std::cout << "Book has been lend!" << std::endl;
		}
	}
	else {
		std::cout << "There are no books currently in the Library." << std::endl;
	}
	
}

void Bibliotheek::brengTerug() {
	std::cout << std::endl << "Return Book : ";
	if (boek != NULL) {
		if (boek->status == "in") {
			std::cout << "   Book is already in the Library." << std::endl;
		}
		else {
			boek->setStatus("in");
			std::cout << "Book is back!" << std::endl;
		}
	}
	else {
		std::cout << "There are no books currently in the Library." << std::endl;
	}
}

void Bibliotheek::destroyBook() {
	std::cout << std::endl << "Destroy Book : ";
	if (boek != NULL && boek->status == "in") {
		boek = NULL;
		std::cout << "Book has been destroyed!" << std::endl;
	}
	else {
		std::cout << "There are no books currently in the Library." << std::endl;
	}
}


