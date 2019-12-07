#include "namespace.h"
#include <iostream>
void pers::getPerson(Person& p)
{
	std::cout << "Podaj imie" << std::endl;
	std::getline(std::cin, p.fname);
	std::cout << "Podaj nazwisko " << std::endl;
	std::getline(std::cin, p.lname);
}

void pers::showPerson(const Person& p1) 
{
	std::cout << p1.fname << " " << p1.lname << std::endl;
}

void debt::getDebt(Debt& d1)
{
	pers::getPerson(d1.name);
	std::cout << "Podaj sume pozyczki " << std::endl;
	std::cin >> d1.amount;
	std::cin.get();
}

double debt::sumDebts(const Debt d1 [],int n)
{
	double suma = 0;
	for (int i = 0; i < n; i++)
		suma += d1[i].amount;
	return suma;

}

void debt::showDebt(const Debt& d1)
{
	pers::showPerson(d1.name);
	std::cout << "Kwota " << d1.amount << std::endl;
}