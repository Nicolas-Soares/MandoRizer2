#include <iostream>
#include <random>
#include <vector>
#include "printAppTitle.h"

void option3() {
	printAppTitle();

	std::cout << "-- Pick random NUMBER within list --" << '\n';
	std::cout << "Input numbers using ENTER:" << '\n';

	[[maybe_unused]] std::vector<int> numList{};
	[[maybe_unused]] int num{};

	while (true) {
		std::cin >> num;

		if (std::cin.fail()) {
			std::cin.clear();
			std::cin.ignore(256, '\n');

			break;
		}

		numList.push_back(num);
	}

	printAppTitle();

	std::cout << "Complete list: ";

	for (int element : numList) {
		std::cout << element << " ";
	}

	// Gera num aleatorio ---
	std::random_device randomDevice;
	std::mt19937 gen(randomDevice());
	std::uniform_int_distribution<> dis(0, (numList.size() - 1));

	[[maybe_unused]] int randomIndex{ dis(gen) };
	// Gera num aleatorio ---

	std::cout << '\n' << "Output: " << numList[randomIndex];
}