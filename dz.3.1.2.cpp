#include <iostream>
#include <string>

struct bank {
	int bankNumber{};
	std::string name{};
	double balance{};
};

static double new_balance(int s, bank& number) {
	std::cout << "Enter new balance: " << std::endl;
	std::cin >> s;
	number.balance = s;
	return s;
}

int main()
{
	int x{};
	std::string d{};
	double s{};
	std::cout << "Enter account number: " << std::endl;
	std::cin >> x;
	std::cout << "Enter owner name: " << std::endl;
	std::cin >> d;
	std::cout << "Enter balance: " << std::endl;
	std::cin >> s;

	bank number = { x, d, s };
	std::cout << number.bankNumber << " " << number.name << " " << number.balance << std::endl;
	new_balance(s, number);
	std::cout << "Your new account: " << number.bankNumber << " " << number.name << " " << number.balance;

	return 0;
}

