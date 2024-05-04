#include <iostream>
#include <vector>
#include "printAppTitle.h"
#include "genRandNum.h"

void option2() {
	printAppTitle();

	std::cout << "-- Pick random NAME within list --" << '\n';
	std::cout << "Input items using ENTER:" << '\n';

	[[maybe_unused]] std::vector<std::string_view> list{};
	[[maybe_unused]] std::string item{};

	while (true) {
		// (std::cin >> std::ws, item); TEM Q USAR A MERDA DO GETLINE MAS N LEMBRO COMO FAZ E TA SEM INTERNET

		if (item == "stop") {
			std::cin.clear();
			std::cin.ignore(256, '\n');

			break;
		}

		list.push_back(item);
	}

	printAppTitle();

	std::cout << "Complete list: ";

	for (std::string_view element : list) {
		std::cout << element << " ";
	}

	[[maybe_unused]] int randomIndex{ genRandNum(0, (list.size() - 1)) };

	std::cout << '\n' << "Output: " << list[randomIndex];
}