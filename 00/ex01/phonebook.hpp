#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP
#include <iostream>
#include <string.h>
#include <limits>
#include <iomanip>
#include <cstdlib>

class Contact
{
    public:
        std::string first_name;
        std::string last_name;
        std::string nick_name;
        std::string phone_num;
        std::string dark_secret;
        int stored ;

        Contact();

     void ADD(void);
};


int print_contact(Contact *con, int index);
std::string truncate(std::string s);
void print_full_contact(Contact *con);
#endif
