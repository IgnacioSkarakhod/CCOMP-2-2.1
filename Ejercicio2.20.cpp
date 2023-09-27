#include <iostream>
using namespace std;

int main() 
{
    float Pi = 3.14159;

    int Radio;
    std::cout << "Ingrese su radio: ";
    std::cin >> Radio;

    int Diametro = 2*Radio;

    int Area = Pi*Radio*Radio;

    int Circunferencia = Pi*Diametro;
    
    std::cout << "El diametro es: " << Diametro << endl;
    std::cout << "El area es: " << Area << endl;
    std::cout << "La circunferencia es: " << Circunferencia << endl;

}