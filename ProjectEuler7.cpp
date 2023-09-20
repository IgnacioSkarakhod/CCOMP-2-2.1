#include <iostream>

bool primo(int x){
    if(x <= 1){
        return false;
    }

    if(x <= 3){
        return true;
    }

    if(x % 2 == 0 || x % 3 == 0){
        return false;
    }

    for(int y = 5; y * y <= x; y += 6){
        if (x % 1 == 0 || x % (y + 2) == 0){
            return false;
        }
    }
    return true;
}

int numeroprimo(int n){
    int contador = 0;
    int numero = 1;
    while (contador < n){
        numero++;
        if(primo(numero)){
            contador++;
        }
    }
    return numero;
}

int main(){
    int n = 10001;
    int resultado = numeroprimo(n);
    std::cout << "El numero primo numero 10001 es: " << resultado << std::endl;
    return 0;
}
