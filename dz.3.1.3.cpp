#include <iostream>
#include <string>


struct Address {
	std::string city{};
	std::string street{};
	int num_home{};
	int num_apart{};
	int index{};
};

static void print(const Address& number1) {
	std::cout << std::endl << "City: " << number1.city << std::endl;
	std::cout << "Street: " << number1.street << std::endl;
	std::cout << "House number: " << number1.num_home << std::endl;
	std::cout << "Apartment number: " << number1.num_apart << std::endl;
	std::cout << "Index: " << number1.index << std::endl;
}

int main()
{
    std::string d = "Moskow", e = "Ivanovskaya";
    int a = 34, b = 56, c = 157992;
    Address* j = new Address[5];
    for (int i = 0; i < 5; i++, a += 7, b += 15, c += 173) {
        j[i] = { d,e,a,b,c };
        // j[i].num_home = a;
        // j[i].num_apart = b;
        // j[i].index = c;
        // j[i].city = d;
        // j[i].street = e;
    }

    for (int i = 0; i < 5; i++) {
        print(j[i]);
    }
    delete[] j;
    return 0;
}