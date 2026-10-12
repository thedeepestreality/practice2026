#include <iostream>

int main(){
	std::cout << "Input Fahrenheit temp: ";
	int fahrenheit = 0;
	std::cin >> fahrenheit;
	double celsius = (fahrenheit - 32.0) * 5.0/9.0;
	std::cout << "Celsius = " << celsius << '\n';
	if (celsius < 20)
		std::cout << "cold\n";
	else if (celsius < 40)
		std::cout << "norm\n";
	else
		std::cout << "hot\n";
	return 0;
}