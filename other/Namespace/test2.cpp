#include <iostream>

namespace print_name
{
    void print(std::string name)
    {
        std::cout << "hello " ;
        std::cout << name << std::endl;
    }
}

using print_name::print;
int main(void)
{
    print("sqeak");
    return 0;
}

