#include "phonebook.hpp"

std::string truncate(std::string s)
{
    size_t index = 0;
    std::string tmp;
   while (index < 9 &&  s[index] != '\0')
   {
       tmp.push_back(s[index]);
       index++;
   }
   tmp.push_back('.');
   return tmp;
}



