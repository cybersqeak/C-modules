
#include "phonebook.hpp"

class Contact
{
    public:
        std::string first_name;
        std::string last_name;
        std::string nick_name;
        std::string phone_num;
        std::string dark_secret;
        int stored ;
        Contact()
        {
            stored = 0;
        }
     void ADD(void)
     {
         std::cout <<"Enter first name ";
         std::cin >> first_name;
         
         std::cout <<"Enter last name ";
         std::cin >> last_name;

         std::cout <<"Enter nick name ";
         std::cin >> nick_name;

         std::cout <<"Enter Phone number ";
         std::cin >> phone_num;

         std::cout <<"Enter darksecret ";
         std::cin >> dark_secret;
         stored = 1;
     }
};


int print_contact(Contact *con,int index)
{
    if (con->stored)
    {
        std::cout << "index: " << index;
        std::cout << "|First Name: " << con->first_name;
        std::cout << "|Last Name : " << con->last_name;
        std::cout << "|nick name : " << con->nick_name << std::endl;

        return 1;
    }
    return 0;
}

int main(void)
{
    std::string incomand;
    Contact contact[8]; 
    // for initializing
    int i = 0;
    while(1)
    {
        std::cout << "Enter the command (ADD, SEARCH, EXIT): ";
        std::cin >> incomand;
        if (std::operator==(incomand, "ADD")) /* same as incomand == "ADD" */
        {
            contact[i].ADD();
            std::cout << "ADD command successful" << std::endl;
            i = (i + 1) % 8; 
        }
        else if (std::operator==(incomand, "SEARCH"))
        {
            int j = 0;
            while (j < 8)
            {
                if(!print_contact(&contact[j],j))
                {
                    //std::cout << "No contact" << std::endl;
                    break;
                }
                j++;
            }
        }
            
        else if (std::operator==(incomand, "EXIT"))
            break;
    }
    std::cout << "program successfully finished!" << std::endl;

    return 0;
}

        




