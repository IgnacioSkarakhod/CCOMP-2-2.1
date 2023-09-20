#include <iostream>

int main(){
    int suma = 0;

    for(int x = 2; x < 2000000; ++x){
        bool primo = true;

        for(int y = 2; y * y <= x; ++y){
            if (x % y == 0){
                primo = false; 
            }
        }

        if(primo){
            suma += x;
        }
    }

    std::cout << "La suma de los numeros primos es: " << suma << std::endl;

    return 0;
}
