#include <iostream>
using namespace std;

int main()
{
    int numero1;
    std::cout << "Ingresa el primer numero: ";
    std::cin >> numero1;

    int numero2;
    std::cout << "Ingrese el segundo numero: ";
    std::cin >> numero2;

    int numero3 = numero1 + numero2;
    if(numero3%2 == 0)
    {
        std::cout << "No es un numero impar" << endl;   
    }
    else 
    {
        std::cout << "Es impar" << endl;
    }
    
}