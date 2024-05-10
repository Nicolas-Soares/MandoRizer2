#include <iostream>
#include <vector>
#include <string>
#include "printAppTitle.h"
#include "genRandNum.h"

void option2() {
	printAppTitle();

	std::cout << "-- Pick random NAME within list --" << '\n';
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

	std::cout << "Complete list: ";

	for (std::string element : list) {
		std::cout << element << " ";
	}

	[[maybe_unused]] int randomIndex{ genRandNum(0, (list.size() - 1)) };

	std::cout << '\n' << "Output: " << list[randomIndex];
}