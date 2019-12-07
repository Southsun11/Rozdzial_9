#include <iostream>
extern double warming;
//double warming = 0.3;
void update(double dt);
void local();

void update(double dt)
{
	extern double warming;
	warming += dt;
	std::cout << "Zwiekszam parametr ocieleniea do " << warming << " stopni" << std::endl;

}

void local(){
	double warming = 0.8;
	std::cout << "localne ocieplenie wynosi " << warming << " stopni" << std::endl;
	std::wcout << "ale globalne ocieplenie ma wartosc " << ::warming << " stopni" << std::endl;
}