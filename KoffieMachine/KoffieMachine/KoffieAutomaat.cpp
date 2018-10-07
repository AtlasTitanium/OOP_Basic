#include "pch.h"
#include "KoffieAutomaat.h"
#include <iostream>

void KoffieAutomaat::coinInsert(float insertedPrice)
{
	inDeMachine += insertedPrice;
	std::cout << "U can buy: " << std::endl;
	if (inDeMachine >= 0.5f) {
		std::cout << "1. Hot Choco" << std::endl;
	}
	if (inDeMachine >= 1.0f) {
		std::cout << "2. Cup a Caffee" << std::endl;
	}
	if (inDeMachine >= 2.0f) {
		std::cout << "3. Cup o soup" << std::endl;
	}
	std::cout << std::endl;
}

void KoffieAutomaat::buyDrink(int selection)
{
	switch (selection) {
		case 1: 
			if (inDeMachine >= 0.5f) {
				inDeMachine -= 0.5f;
				std::cout << "Thank you for your purchase" << std::endl;
				break;
			} 
			else {
				std::cout << "Insufficient Funds" << std::endl;
				break;
			}
		case 2: 
			if (inDeMachine >= 1.0f) {
				inDeMachine -= 1.0f;
				std::cout << "Thank you for your purchase" << std::endl;
				break;
			}
			else {
				std::cout << "Insufficient Funds" << std::endl;
				break;
			}
		case 3: 
			if (inDeMachine >= 2.0f) {
				inDeMachine -= 2.0f;
				std::cout << "Thank you for your purchase" << std::endl;
				break;
			}
			else {
				std::cout << "Insufficient Funds" << std::endl;
				break;
			}
		default: 
			std::cout << "Insufficient choice" << std::endl;
			break;
	}
}

