/*
	- App vai ter várias opções
		-- 1 Escolher numero aleatório entre X e Y de acordo com valores inputados pelo user
		-- 2 Escolher nome aleatorio em lista fornecida pelo user
		-- 3 Escolher numero aleatorio dentre numeros fornecidos pelo user

	- Ter opção de dar exit no app em qualquer momento apertando alguma tecla especifica
	- Ter opção de voltar ao menu do app em qualquer momento apertando alguma tecla especifica
*/

#include <iostream>

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

int main() {
	printAppTitle();

	int optionSelected{};
	
	while (optionSelected == 0) {
		std::cout << R"(
	Select an option:
	1 - Gan
	2 - Gar
	3 - GarandThumb
	)";

		std::cin >> optionSelected;

		if (std::cin.fail()) {
			std::cin.clear();
			std::cin.ignore(256, '\n');
		}

		switch (optionSelected) {
			case 1:
				// Go to option
				break;
			case 2:
				// Go to option
				break;
			case 3:
				// Go to option
				break;
			default:
				printAppTitle();

				std::cout << "-- INVALID OPTION --";

				optionSelected = 0;
				break;
		}
	}

	return 0;
}
