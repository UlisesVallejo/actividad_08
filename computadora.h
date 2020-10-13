#ifndef COMPUTADORA_H
#define COMPUTADORA_H
#include <iostream>
using namespace std;

class Computadora
{
    string marca;
    string sisop;
    float peso;
    int ram;

public:
     Computadora();
     Computadora(const string &marca, const string &sisop, float peso, int ram);

     void setMarca(const string &v);
     void setSisop(const string &v);
     void setPeso(float v);
     void setRam(int v);

    string getMarca();
    string getSisop();
    float getPeso();
    int getRam();

};

#endif