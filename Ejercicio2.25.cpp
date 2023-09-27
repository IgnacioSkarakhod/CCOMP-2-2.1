#include <iostream>
using namespace std;

int main()
{
    int numero1;
    std::cout << "Ingrese el primer numero: ";
    std::cin >> numero1;

    int numero2;
    std::cout << "Ingrese el segundo numero: ";
    std::cin >> numero2;

    int numero3;
    std::cout << "Ingrese el tercer numero: ";
    std::cin >> numero3;

    if(numero3 % numero1 == 0 && numero3 % numero2 == 0)
    {
        std::cout << numero1 << " y " << numero2 << " son factores de " << numero3 << endl;
    }
    else
    {
        std::cout << numero1 << " y " << numero2 << " no son factores de " << numero3 << endl;
    }
}