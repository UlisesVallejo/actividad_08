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

void Laboratorio::respaldar_tabla()
{
    ofstream archivo("computadoras_tabla.txt");
    if(archivo.is_open()){
        archivo << left;
        archivo << setw(10) << "Marca";
        archivo << setw(12) << "Sistema O.";
        archivo << setw(8) << "Peso";
        archivo << setw(8) << "Ram";
        archivo << endl;
        for(size_t i = 0; i < cont; i++)
        {
            Computadora &c = arreglo[i];
            archivo << c;
        }
    }
    archivo.close();
}


void Laboratorio::respaldar()
{
    ofstream archivo("computadoras.txt");
    if(archivo.is_open()){
        for(size_t i = 0; i < cont; i++)
        {
            Computadora &c = arreglo[i];
            archivo << c.getMarca()<<endl;
            archivo << c.getSisop()<<endl;
            archivo << c.getPeso()<<endl;
            archivo << c.getRam()<<endl;
        }
    }
    archivo.close();
}


void Laboratorio::recuperar()
{
    ifstream archivo("computadoras.txt");
    if (archivo.is_open()){
        string temp;
        float peso;
        int ram;
        Computadora c;

        while (true)
        {
            getline(archivo, temp);
            if(archivo.eof())
            {
                break;
            }
            c.setMarca(temp);

            getline(archivo, temp);
            c.setSisop(temp);

            getline(archivo, temp);
            peso = stof(temp);
            c.setPeso(peso);

            getline(archivo, temp);
            ram = stoi(temp);
            c.setRam(ram);

            agregarFinal(c);

        }
        
    }
    archivo.close();
}