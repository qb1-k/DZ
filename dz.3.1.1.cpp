#include <iostream>
enum Months {
	January = 1,
	February,
	March,
	April,
	May,
	June,
	July,
	August,
	September,
	October,
	November,
	December
};

int main()
{
	int number{};
	do {
		std::cout << "Enter month number: " << std::endl;
		std::cin >> number;
		switch (number) {
		case January:
			std::cout << "January" << std::endl;
			break;
		case February:
			std::cout << "February" << std::endl;
			break;
		case March:
			std::cout << "March" << std::endl;
			break;
		case April:
			std::cout << "April" << std::endl;
			break;
		case May:
			std::cout << "May" << std::endl;
			break;
		case June:
			std::cout << "June" << std::endl;
			break;
		case July:
			std::cout << "July" << std::endl;
			break;
		case August:
			std::cout << "August" << std::endl;
			break;
		case September:
			std::cout << "September" << std::endl;
			break;
		case October:
			std::cout << "October" << std::endl;
			break;
		case November:
			std::cout << "November" << std::endl;
			break;
		case December:
			std::cout << "December" << std::endl;
			break;

		};
	} while (number != 0);

	std::cout << "Goodbye";
}
