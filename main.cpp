#include <iostream>
#include "laboratorio.h"
using namespace std;

int main(){

    Computadora c1 = Computadora("hp", "windows", 3.5, 4);

    Computadora c2;
    c2.setMarca("lenovo");
    c2.setSisop("windows");
    c2.setPeso(3.33);
    c2.setRam(8);

    Laboratorio lab;
    //lab.agregarFinal(c1);
    //lab.agregarFinal(c2);
    lab << c1 << c2;
    

    //cout << c1;
    Computadora c3;
    cin >> c3;
    lab << c3;

    lab.mostrar();
    

    return 0;
}