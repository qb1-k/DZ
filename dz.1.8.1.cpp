#include <iostream>

void counting_function() 
{
    static int counter{};
    std::cout << "Number of calls to counting_function(): " << ++counter << std::endl;
};

int main(int argc, char** argv)
{
    for (int i = 0; i < 15; i++)
    {   
        counting_function();
    }

return 0;
}