#include <iostream>
#include <random>
#include "printAppTitle.h"

void option1() {
	printAppTitle();

	std::cout << "-- Pick random NUMBER between MIN and MAX --" << '\n';

	std::cout << "Input MIN: ";
	[[maybe_unused]] int numX{};
	std::cin >> numX;

	std::cout << "Input MAX: ";
	[[maybe_unused]] int numY{};
	std::cin >> numY;

	// Gera num aleatorio ---
	std::random_device randomDevice;
	std::mt19937 gen(randomDevice());
	std::uniform_int_distribution<> dis(numX, numY);

	[[maybe_unused]] int randomNum{ dis(gen) };
	// Gera num aleatorio ---

	std::cout << "Output: " << randomNum;
}