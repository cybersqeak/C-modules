#include "phonebook.hpp"

Contact::Contact()
{
    stored = 0;
}

void Contact::ADD(void)
{
    std::cout <<"Enter first name ";
    std::cin >> first_name;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
    std::cout <<"Enter last name ";
    std::cin >> last_name;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');

    std::cout <<"Enter nick name ";
    std::cin >> nick_name;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');

    std::cout <<"Enter Phone number ";
    std::cin >> phone_num;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');

    std::cout <<"Enter darksecret ";
    std::getline(std::cin,dark_secret);
    stored = 1;
}

void print_full_contact(Contact *con)
{
    if (con->stored)
    {
        std::cout << "First Name: " << con->first_name << " | ";
        std::cout << "Last Name: " << con->last_name << " | ";
        std::cout <<"nick name: " << con->nick_name << " | ";
        std::cout << "Phone Number: " << con->phone_num << " | ";
        std::cout << "Dark Secret: " <<con->dark_secret << std::endl;
     }
    else 
        std::cout<< "Invalid index...Exiting..." <<std::endl;
}



    
int  print_contact(Contact *con,int index)
{
    if (con->stored)
    {
        std::string tmp;
        std::cout << "index: " << std::setw(10) << index << " | ";
        if (10 < con->first_name.size())
        {
            tmp = truncate(con->first_name);
            std::cout << "First Name: " << std::setw(10) << tmp << " | ";
        }
        else 
            std::cout << "First Name: " << std::setw(10) << con->first_name << " | ";
        if (10 < con->last_name.size())
        {
            tmp = truncate(con->last_name);
            std::cout << "Last Name : " <<std::setw(10)<<  tmp << " | ";
        }
        else   
            std::cout << "Last Name : " <<std::setw(10)<<  con->last_name << " | ";
        if (10 < con->nick_name.size())
        {
            tmp = truncate(con->nick_name);
            std::cout <<"nick name : " << std::setw(10) << tmp << std::endl;
        }
        else 
            std::cout <<"nick name : " << std::setw(10) << con->nick_name << std::endl;
        return 1;
    }
    return 0;
}


