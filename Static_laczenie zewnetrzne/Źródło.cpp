#include <iostream>
extern int tom;
static int dick = 10;
int harry = 200;

void remote_controle()
{
    std::cout << "funckja remote_controle " << std::endl;
    std::cout << "tom = " << tom << " &tom " << &tom << std::endl;
    std::cout << "dick = " << dick << " &dick " << &dick << std::endl;
    std::cout << "harry " << harry << " &harry " << &harry << std::endl;
}