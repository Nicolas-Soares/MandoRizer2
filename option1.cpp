#include <iostream>
#include "printAppTitle.h"
#include "genRandNum.h"

void option1() {
	printAppTitle();

	std::cout << "-- Pick random NUMBER between MIN and MAX --" << '\n';

	std::cout << "Input MIN: ";
	[[maybe_unused]] int numX{};
	std::cin >> numX;

	[[maybe_unused]] int numY{ numX - 1 };

	while (numY <= numX) {
		std::cout << "Input MAX: ";
		std::cin >> numY;
	}

	[[maybe_unused]] int randomNum{ genRandNum(numX, numY) };

	std::cout << "Output: " << randomNum;
}