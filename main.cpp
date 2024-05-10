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
#include "printAppTitle.h"
#include "option1.h"
#include "option3.h"
#include "option2.h"
#include "option4.h"

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
			case 4: // WIP
				option4();
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
