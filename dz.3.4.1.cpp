#include <iostream>
#include <string>
#include <fstream>
#include <Windows.h>

class Address {
	std::string city;
	std::string street;
	int num_home;
	int num_apart;
public:
	Address() {
		city = {"No information"};
		street = {"No information"};
		num_home = 0;
		num_apart = 0;
	}
	
    void set_address(std::string city, std::string street, int num_home, int num_apart) {
        this->city = city;
        this->street = street;
        this->num_home = num_home;
        this->num_apart = num_apart;
    }

    int converting(std::string x) {
        int y = 0;
        y = std::stoi(x);
        return y;
    }

    std::string get_city() const {
        std::string v = city;
        return v;
    }

    std::string get_street() const {
        std::string v = street;
        return v;
    }

    int get_num_home() const {
        int v = num_home;
        return v;
    }

    int get_num_apartments() const {
        int v = num_apart;
        return v;
    }
};


int main() {
    
    setlocale(LC_ALL, "Russian");
    SetConsoleCP(1251);

    std::ifstream list("in.txt");
    if (list.is_open()) {


        int a{};
        list >> a;

        Address* A = new Address[a];

        for (int i = 0; i < a; i++) {
            std::string b1, b2, b3, b4;
            int b5 = 0, b6 = 0;
            list >> b1 >> b2 >> b3 >> b4;

            b5 = A[i].converting(b3);
            b6 = A[i].converting(b4);

            A[i].set_address(b1, b2, b5, b6);
        }

        std::ofstream list_off("out.txt");
        if (list_off.is_open()) {


            list_off << a << std::endl;
            for (int i = a - 1; i > -1; i--) {
                list_off << A[i].get_city() << ", " << A[i].get_street() << ", " << A[i].get_num_home() << ", " << A[i].get_num_apartments() << "\n";
                std::cout << A[i].get_city() << ", " << A[i].get_street() << ", " << A[i].get_num_home() << ", " << A[i].get_num_apartments() << "\n";

            }
        }
        delete[]A;
        list_off.close();
    }
    list.close();
   
	return 0;
};
