#include "laboratorio.h"
#include <fstream>

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
    cout << left;
    cout << setw(10) << "Marca";
    cout << setw(12) << "Sistema O.";
    cout << setw(8) << "Peso";
    cout << setw(8) << "Ram";
    cout << endl;

    for(size_t i = 0; i < cont; i++)
    {
        Computadora &c = arreglo[i];
        cout << c;
        /*cout<<"Marca: "<<c.getMarca()<<endl;
        cout<<"Sistema operativo: "<<c.getSisop()<<endl;
        cout<<"Peso: "<<c.getPeso()<<endl;
        cout<<"Ram: "<<c.getRam()<<endl;
        cout<<endl;*/
    }
}

void Laboratorio::respaldar()
{
    ofstream archivo("computadoras.txt");
    if(archivo.is_open()){
        for(size_t i = 0; i < cont; i++)
        {
            Computadora &c = arreglo[i];
            archivo << c;
        }
    }
    archivo.close();
}