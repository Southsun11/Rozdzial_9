#include <iostream>
const int Arsize = 10;
int  strsize(const char* str);
int main()
{
    char tab[Arsize];
    int number;
    std::cout << "Podaj wiersz" << std::endl;
    while (std::cin.get(tab, Arsize))
    {
        while (std::cin.get() != '\n')
            continue;
        number = strsize(tab);
        std::cout << "obecny ciag ma " << number << " znakow " << std::endl;
        std::cout << "Podaj wiersz" << std::endl;

    }
    return 0;
    
}

int strsize(const char* str)
{
    int counter = 0;
    static int how_many;
    while (*str)
    {
        counter++;
        how_many++;
        str++;
    }
    std::cout << "ciag " << str << " ma " << counter << " znakow " << std::endl;
    std::cout << "Ogolnie podano juz " << how_many << " znakow " << std::endl;
    return counter;
}