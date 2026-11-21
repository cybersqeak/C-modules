#include <iostream>

namespace print_name
{
    void print(std::string name)
    {
        std::cout << "hello " ;
        std::cout << name << std::endl;
    }
    void hello(void)
    {
        std::cout << "goodbye" << std::endl;
    }
}

using namespace print_name;
int main(void)
{
    print("sqeak");
    hello();
    return 0;
}

