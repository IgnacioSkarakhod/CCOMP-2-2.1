#include <iostream>

int main() {
    int suma = 0;

    for(int x = 1; x < 1000; ++x) {
        if(x % 3 == 0 || x % 5 == 0) {
            suma += x;
        }
    }

    std::cout << "La suma de los multipos de 3 y 5 menores que 1000 es: " << suma << std::endl; 

    return 0;
}
