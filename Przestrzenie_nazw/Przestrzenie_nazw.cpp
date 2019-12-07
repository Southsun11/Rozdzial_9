#include <iostream>
#include "namespace.h"

void other(void);
void another(void);
int main()
{
    debt::Debt golf{ {"Jacek","Klopotek"},120.0 };
    debt::showDebt(golf);
    other();
    another();
    return 0;

}


void other(void)
{
    pers::Person dg{ "Daria","Graczyk" };
    pers::showPerson(dg);
    std:: cout << std::endl;
    debt::Debt zippy[3];
    int i;
    for (i = 0; i < 3; i++)
        debt::getDebt(zippy[i]);
    for (i = 0; i < 3; i++)
        debt::showDebt(zippy[i]);
    std::cout << "Kwota laczna " << debt::sumDebts(zippy, 3) << std::endl;
    return;

}


void another(void)
{
    pers::Person collector = { "Zibby","Windykator" };
    pers::showPerson(collector);
    std::cout << std::endl;
}