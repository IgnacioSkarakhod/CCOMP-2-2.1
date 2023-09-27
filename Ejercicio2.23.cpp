#include <iostream>
using namespace std;

int main()
{
    int numero1;
    int numero2;
    int numero3;
    int numero4;
    int numero5;

    std::cout << "Ingrese el primer numero: ";
    std::cin >> numero1;

    std::cout << "Ingrese el segundo numero: ";
    std::cin >> numero2;

    std::cout << "Ingrese el tercer numero: ";
    std::cin >> numero3;

    std::cout << "Ingrese el cuarto numero: ";
    std::cin >> numero4;

    std::cout << "Ingrese el quinto numero: ";
    std::cin >> numero5;

    if((numero1 > numero2) && (numero1 > numero3) && (numero1 > numero4) && (numero1 > numero5))
    {
        std::cout << "El mayor es: " << numero1;
    }

    if((numero2 > numero1) && (numero2 > numero3) && (numero2 > numero4) && (numero2 > numero5))
    {
        std::cout << "El mayor es: " << numero2;
    }

    if((numero3 > numero1) && (numero3 > numero2) && (numero3 > numero4) && (numero3 > numero5))
    {
        std::cout << "El mayor es: " << numero3;
    }

    if((numero4 > numero1) && (numero4 > numero2) && (numero4 > numero3) && (numero4 > numero5))
    {
        std::cout << "El mayor es: " << numero4;
    }

    if((numero5 > numero1) && (numero5 > numero2) && (numero5 > numero3) && (numero5 > numero4))
    {
        std::cout << "El mayor es: " << numero5;
    }
}