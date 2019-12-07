#include <iostream>
#include <new>
const int Size = 512;
const int N = 5;
char Buffer[Size];

int main()
{
    double* pd1, *pd2;
    pd1 = new double[N];
    pd2 = new (Buffer) double[N];
    std::cout << "Pierwsze wywolanie " << "\n\n\n\n";
    for (int i = 0; i < N; i++)
    {
        pd1[i] = pd2[i] = 1000 * i;
    }
    std::cout << "Adres pamieci new " << pd1 << std::endl;
    std::cout << "Adres miejscowego new " << (void *)pd2 << std::endl;
    for (int i = 0; i < N; i++)
    {
        
        std::cout << "Adres new " << &pd1[i] << " wartosc = " << pd1[i];
        std::cout << "  Adres miejscowego new " << &pd2[i] << " wartosc =  " << pd2[i] << std::endl;
    }

    double* pd3, * pd4;
    pd3 = new double[N];
    pd4 = new(Buffer) double[N];
    std::cout << "\n\n\n\nDrugie wywolanie ";
    std::cout << "Adres pamieci new " << pd3 << std::endl;
    std::cout << "Adres miejscowego new " << (void*)pd4 << std::endl;
    for (int i = 0; i < N; i++)
    {

        std::cout << "Adres new " << &pd3[i] << " wartosc = " << pd3[i] ;
        std::cout << "  Adres miejscowego new " << &pd4[i] << " wartosc =  " << pd4[i] << std::endl;
    }
    delete[] pd1;
    pd1 = new double[N];
    std::cout << "\n\n\n\nTrzecie wywolanie ";
    pd2 = new (Buffer + N * sizeof(double)) double[N];
    std::cout << "Adtes pamieci new " << pd1 << std::endl;
    std::cout << "Adres miejscowego " << (void*)pd2 << std::endl;                                  
    for (int i = 0; i < N; i++)
    {

        std::cout << "Adres new " << &pd1[i] << " wartosc = " << pd1[i] ;
        std::cout << "  Adres miejscowego new " << &pd2[i] << " wartosc =  " << pd2[i] << std::endl;
    }
}
