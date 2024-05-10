#include <iostream>
#include <vector>
#include <string>
#include <random>
#include "printAppTitle.h"

void option4() {
	printAppTitle();

	std::cout << "-- List shuffle --" << '\n';
	std::cout << "Input items using ENTER:" << '\n';

	[[maybe_unused]] std::vector<std::string> list{};
	[[maybe_unused]] std::string item{};

	while (true) {
		std::getline(std::cin >> std::ws, item);

		if (item == "stop") {
			std::cin.clear();

			break;
		}

		list.push_back(item);
	}

	printAppTitle();

	std::cout << "Input list: " << '\n';

	for (std::string element : list) {
		std::cout << element << '\n';
	}

	std::random_device randomDevice;
	auto rng = std::default_random_engine{ randomDevice() };
	std::shuffle(std::begin(list), std::end(list), rng);

	std::cout << '\n' << "Shuffled list: " << '\n';

	for (std::string element : list) {
		std::cout << element << '\n';
	}
}