#include <iostream>

namespace Room1 
{
    void greet(void)
    {
        std::cout << "Hello from Room1" << std::endl;
    }
}

/*
namespace Room2 
{
    void greet(void)
    {
        std::cout << "Hello from Room2" << std::endl;
    }
}
*/
using namespace Room1;

int main(void)
{
    greet();
    return 0;
}
