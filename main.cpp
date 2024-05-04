/*
	- App vai ter várias opções
		-- 1 Escolher numero aleatório entre X e Y de acordo com valores inputados pelo user
		-- 2 Escolher numero aleatorio dentre numeros fornecidos pelo user
		-- 3 Escolher nome aleatorio em lista fornecida pelo user
		-- 4 Embaralhar lista
		-- 5 Exit

	- Ter opção de voltar ao menu do app
*/

#include <iostream>
#include <random>
#include <vector>

void printAppTitle() {
	system("cls");

	std::cout << R"(
 ______                  _      ______  _                  
|  ___ \                | |    (_____ \(_)                 
| | _ | | ____ ____   _ | | ___ _____) )_ _____ ____  ____ 
| || || |/ _  |  _ \ / || |/ _ (_____ (| (___  ) _  )/ ___)
| || || ( ( | | | | ( (_| | |_| |    | | |/ __( (/ /| |    
|_||_||_|\_||_|_| |_|\____|\___/     |_|_(_____)____)_|    
                                                           
	)" << '\n';
}

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

	// Gera num aleatorio ---
	std::random_device randomDevice;
	std::mt19937 gen(randomDevice());
	std::uniform_int_distribution<> dis(0, (list.size() - 1));

	[[maybe_unused]] int randomIndex{ dis(gen) };
	// Gera num aleatorio ---

	std::cout << '\n' << "Output: " << list[randomIndex];
}

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

int main() {
	printAppTitle();

	int optionSelected{};
	
	while (optionSelected == 0) {
		std::cout << R"(Select an option:
1 - Pick random NUMBER between MIN and MAX
2 - Pick random NAME within list
3 - Pick random NUMBER within list
4 - List shuffle
5 - Exit
)";

		std::cin >> optionSelected;

		if (std::cin.fail()) {
			std::cin.clear();
			std::cin.ignore(256, '\n');
		}

		switch (optionSelected) {
			case 1:
				option1();
				break;
			case 2:
				option2();
				break;
			case 3:
				option3();
				break;
			case 4:
				break;
			case 5:
				break;
			default:
				printAppTitle();
				std::cout << "-- INVALID OPTION --" << '\n';
				optionSelected = 0;
				break;
		}
	}

	return 0;
}
