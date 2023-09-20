#include <iostream>
using namespace std;

int main(){
    int maximo = 4000000;
    int suma = 0;
    int numero1 = 1;
    int numero2 = 1;

    while(numero1 <= maximo){
        if(numero1 % 2 == 0){
            suma += numero1;
        }
        
        int continuacion = numero1 + numero2;
        numero1 = numero2;
        numero2 = continuacion;
    }

    cout << "La suma de los numeros pares es: " << suma << endl;
    
    return 0;
}
