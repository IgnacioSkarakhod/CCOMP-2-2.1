#include <iostream>
using namespace std;

int main()
{
    int numero1;
    std::cout << "Ingrese un numero con 4 digitos: ";
    std::cin >> numero1; 

    if(numero1 <= 9999 && numero1 >= 1000)
    {
        int primer_numero = numero1 / 1000;
        int segundo_numero = (numero1 % 1000) / 100;
        int tercer_numero = (numero1 %100) / 10;
        int cuarto_numero = numero1 % 10;

        std::cout << cuarto_numero << tercer_numero << segundo_numero << primer_numero << endl;      
    }
}