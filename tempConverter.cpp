// tempConverter.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
int main()
{
	int upperC;
	int lowerC;
	int step;
	int difference;
	const int lowerLimit = 0;
	const int upperLimit = 50000;
	std::cout << "Please give the lower limit, this must be greater than 0 and less than 50000: ";
	std::cin >> lowerC;
	while ((lowerC < 0) || (lowerC > 50000)) {
		std::cout << "Please give the lower limit, this must be greater than 0 and less than 50000: ";
		std::cin >> lowerC;
	}
	std::cout << "\nPlease give the upper limit, this must be greater than " << lowerC << " and lower than or equal to 50000\n";
	std::cin >> upperC;
	while ((upperC < lowerC) || (upperC > 50000)) {
		std::cout << "\nPlease give the upper limit, this must be greater than " << lowerC << " and lower than or equal to 50000\n";
		std::cin >> upperC;
	}
	difference = upperC - lowerC;
	std::cout << "Please enter a step interval: ";
	std::cin >> step;
	while (step >= difference) {
		std::cout << "Please enter a step interval (cannot be greater than difference between upper and lower limit): ";
		std::cin >> step;
	}
	std::cout << "Celsius     Fahrenheit\n";
	std::cout << "___________________________\n";
	while (lowerC <= upperC) {
		std::cout << lowerC << "       " << ((lowerC * 1.8) + 32) << "\n";
		lowerC += step;
	}
}