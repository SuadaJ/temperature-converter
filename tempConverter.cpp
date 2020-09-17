#include <iostream>
int main()
{
	int upperC;
	int lowerC;
	int step;
	int difference;
	const int lowerLimit = 0;
	const int upperLimit = 50000;
	//asks for lower level limit
	std::cout << "Please give the lower limit, this must be greater than 0 and less than 50000: ";
	std::cin >> lowerC;
	//catches input not within the range and forces a valid entry
	while ((lowerC < 0) || (lowerC > 50000)) {
		std::cout << "Please give the lower limit, this must be greater than 0 and less than 50000: ";
		std::cin >> lowerC;
	}
	//asks for upper level limit
	std::cout << "\nPlease give the upper limit, this must be greater than " << lowerC << " and lower than or equal to 50000\n";
	std::cin >> upperC;
	//catches input not within the range and forces a valid entry
	while ((upperC < lowerC) || (upperC > 50000)) {
		std::cout << "\nPlease give the upper limit, this must be greater than " << lowerC << " and lower than or equal to 50000\n";
		std::cin >> upperC;
	}
	//interval to increment by must be less than the difference between upper and lower limit
	difference = upperC - lowerC;
	std::cout << "Please enter a step interval: ";
	std::cin >> step;
	//catches step value larger than the difference and forces a valid entry
	while (step >= difference) {
		std::cout << "Please enter a step interval (cannot be greater than difference between upper and lower limit): ";
		std::cin >> step;
	}
	//prints out table with relevant values
	std::cout << "Celsius     Fahrenheit\n";
	std::cout << "___________________________\n";
	while (lowerC <= upperC) {
		//calculates fahrenheit from celsius value without need for a separate value
		std::cout << lowerC << "       " << ((lowerC * 1.8) + 32) << "\n";
		lowerC += step;
	}
}
