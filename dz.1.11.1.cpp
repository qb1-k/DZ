#include <iostream>
#include <string>

int main()
{
	std::string firstName{};
	std::string lastName{};
	std::cout << "Enter your last name: ";
	std::getline(std::cin >> std::ws, lastName);
	std::cout << "Enter your name:: ";
	std::getline(std::cin >> std::ws, firstName);

	std::string fullName = firstName + " " + lastName;
	std::cout << "Hi " << fullName;

	return 0;
}