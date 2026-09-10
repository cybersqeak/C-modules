#include <iostream>
#include <cctype>

void chunk(char *argv)
{
    int i = 0;
    char c;
    while (argv[i])
    {
        if (97 <= argv[i] && argv[i] <= 122)
        {
            c = std::toupper(argv[i]);
         // c = argv[i] - 32;
          std::cout << c;
        }
        else
            std::cout << argv[i];
    i++;
    }

}
void ft_megaphone(int argc, char **argv)
{
    int i = 1;
    while (i <= argc - 1)
    {
        chunk(argv[i]);
        i++;
    }
    
}



int main(int argc, char **argv)
{

    if (argc < 2)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
        return 1;
    }

    ft_megaphone(argc, argv);
    std::cout << std::endl;
    return 0;
}
