#include <iostream>
#include <string>

int main()
{
	std::string word{ "apple" };
	std::string enteredWord{};

	do
	{
		std::cout << "Guess the fruit!" << std::endl;
		std::getline(std::cin >> std::ws, enteredWord);
		if (word != enteredWord)
		{
			std::cout << "Wrong!" << std::endl;
		}
	} while (word != enteredWord);

	std::cout << "Right! You have won! Hidden word - " << word << std::endl;


	return 0;
}