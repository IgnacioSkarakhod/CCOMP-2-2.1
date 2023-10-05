#include <iostream>
using namespace std;

class Enemigo{
    private: // Atributos
        int velocidad;
        string estado;
        string direccion;

    public:  // Metodos
        Enemigo(int,string,string);
        void mover_enemigo();
        void matar_jugador();
        void morir_enemigo();
}; 

Enemigo::Enemigo(int _velocidad, string _estado, string _direccion){
    velocidad = _velocidad;
    estado = _estado;
    direccion = _direccion; 
}

void Enemigo::mover_enemigo(){
    cout << "Se mueve el enemigo a la velocidad " << velocidad << " con su direccion a " << direccion << endl;
}

void Enemigo::matar_jugador(){
    if(estado == "Tocar") {
        cout << "El enemigo mato al jugador" << endl;
    } else {
        cout << "El enemigo no mato al jugador" << endl;
    }
} 

void Enemigo::morir_enemigo(){
    estado = "Muerto";
    cout << "El enemigo murio" << endl;
}

int main(){
    Enemigo p1 = Enemigo(7,"Vivo","Izquierda");

    p1.mover_enemigo();
    p1.matar_jugador();
    p1.morir_enemigo();

    return 0
}
