#include "laboratorio.h"

Laboratorio::Laboratorio()
{
    cont = 0;
}

void Laboratorio::agregarFinal(const Computadora &c)
{
    if (cont < 5)
    {
        arreglo[cont] = c;
        cont++;
    }
    else
    {
        cout<<"Arreglo lleno"<<endl;
    }
}

void Laboratorio::mostrar()
{
    for(size_t i = 0; i < cont; i++)
    {
        Computadora &c = arreglo[i];
        cout<<"Marca: "<<c.getMarca()<<endl;
        cout<<"Sistema operativo: "<<c.getSisop()<<endl;
        cout<<"Peso: "<<c.getPeso()<<endl;
        cout<<"Ram: "<<c.getRam()<<endl;
        cout<<endl;
    }
}