#include "phonebook.hpp"

int main(void)
{
    std::string incomand;
    Contact contact[8];
    int i = 0;
    while(1)
    {
        std::cout << "Enter the command (ADD, SEARCH, EXIT): ";
        std::cin >> incomand;
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
        if (std::operator==(incomand, "ADD")) /* same as incomand == "ADD" */
        {
            contact[i].ADD();
            std::cout << "ADD command successful" << std::endl;
            i = (i + 1) % 8; 
        }
        else if (std::operator==(incomand, "SEARCH"))
        {
            int j = 0;
            int index = -1;
            std::string input;
            while (j < 8)
            {
                if(!print_contact(&contact[j],j))
                {
                    //std::cout << "No contact" << std::endl;
                    break;
                }
             
                j++;
            }
            while (1)
            {
                std::cout << "Enter the Index (-1 for EXIT): ";
                std::cin >> input;
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
                index = std::atoi(input.c_str());//it returns 0 if "abd" or string is input. dam!
                if (0 <= index && index < 8)
                {
                    print_full_contact(&contact[index]);
                    break;
                }
                else if (index == -1)
                {
                    std::cout << "Exit selecting index mode..."<<std::endl;
                    break;
                }
            }
                


        }
            
        else if (std::operator==(incomand, "EXIT"))
            break;
    }
    std::cout << "program successfully finished!" << std::endl;

    return 0;
}

        




