#include <iostream>
int tom = 3;
int dick = 30;
static int harry = 300;
void remote_controle();
int main()
{
    std::cout << "funckja main " << std::endl;
    std::cout << "tom = " << tom << " &tom " << &tom << std::endl;
    std::cout << "dick = " << dick << " &dick " << &dick << std::endl;
    std::cout << "harry " << harry << " &harry " << &harry << std::endl;
    remote_controle();
}

