#include <iostream>
#include "Punto.h"

using namespace std;

int main(){
    Punto p;
    p.setX(12);
    p.setY(60);
    p.print();

    Punto *ptr;
    ptr = &p;
    ptr->setX(5);
    ptr->setY(30);
    ptr->print();

    return 0;
}
