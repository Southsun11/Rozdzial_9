#include <iostream>

double warming = 0.3;
void update(double dt);
void local();
int main()
{
    std::cout << "Globalne ocieplenie " << warming << " stopni " << std::endl;
    update(0.1);
    std::cout << "Globalne ocieplenie wynosi " << warming << " stopni" << std::endl;
    local();
    std::cout << "Globalne ocieplenie wynosi " << warming << " stopni" << std::endl;
    return 0;
}

