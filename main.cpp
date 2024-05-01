/*
	- App vai ter várias opções
		-- Escolher numero aleatório entre X e Y de acordo com valores inputados pelo user
		-- Escolher nome aleatorio em lista fornecida pelo user
		-- Escolher numero aleatorio dentre numeros fornecidos pelo user

	- Ter opção de dar exit no app em qualquer momento apertando alguma tecla especifica
	- Ter opção de voltar ao menu do app em qualquer momento apertando alguma tecla especifica
*/

#include <iostream>

void printAppTitle() {
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
	
	return 0;
}
