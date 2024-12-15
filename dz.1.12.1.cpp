#include <iostream>
#include <string>
#include <fstream>

int main()
{
	std::fstream file{};
	// write to file.
	file.open("in.txt", std::fstream::out | std::fstream::app);
	if (file.is_open())
	{
		file << "Potatoes cabbage\nRaspberries strawberries cherries\nApple pear orange";
	}
	file.close();

	// read from file.
	file.open("in.txt", std::fstream::in);
	if (file.is_open())
	{
		std::string text{};
		while (file >> text)
		{
			std::cout << text << std::endl;
		}
	}
	file.close();
	return 0;
}