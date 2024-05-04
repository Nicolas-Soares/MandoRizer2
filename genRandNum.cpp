#include <random>

int genRandNum(int minRange, int maxRange) {
	std::random_device randomDevice;
	std::mt19937 gen(randomDevice());
	std::uniform_int_distribution<> dis(minRange, maxRange);

	[[maybe_unused]] int randomIndex{ dis(gen) };

	return randomIndex;
}