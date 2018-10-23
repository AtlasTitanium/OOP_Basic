#pragma once
#include "Boek.h"

class Bibliotheek
{
public:
	Bibliotheek();

	void toon();
	void voegToe(std::string type);
	void leenUit();
	void brengTerug();
	void destroyBook();
private:
	Boek* boek = new Boek();
};

