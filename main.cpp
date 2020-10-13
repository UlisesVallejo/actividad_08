#include <iostream>
#include "laboratorio.h"
using namespace std;

int main(){

    Computadora c1 = Computadora("hp", "windows", 3.5, 4);
    /*cout << c1.getMarca()<<endl;
    cout << c1.getSisop()<<endl;
    cout << c1.getPeso()<<endl;
    cout << c1.getRam()<<endl<<endl;*/


    Computadora c2;
    c2.setMarca("lenovo");
    c2.setSisop("windows");
    c2.setPeso(3.33);
    c2.setRam(8);

    Laboratorio lab;
    lab.agregarFinal(c1);
    lab.agregarFinal(c2);

    lab.mostrar();

    /*cout << c2.getMarca()<<endl;
    cout << c2.getSisop()<<endl;
    cout << c2.getPeso()<<endl;
    cout << c2.getRam()<<endl<<endl;*/


    return 0;
}