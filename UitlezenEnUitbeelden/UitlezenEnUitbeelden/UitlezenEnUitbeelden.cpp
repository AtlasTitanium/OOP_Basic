// UitlezenEnUitbeelden.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <fstream>
#include <string>

int main()
{
	std::ifstream in_stream;

	in_stream.open("C:/Users/Pepijn/Desktop/File.txt");

	if (!in_stream) {
		std::cout << "Probleem met openen buddy" << std::endl;
		exit(1);
	}
	
	std::string data;
	char ch;
	
	while (!in_stream.eof()) {
		getline(in_stream, data);
		std::cout << data << std::endl;
	}


	in_stream.close();
	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
