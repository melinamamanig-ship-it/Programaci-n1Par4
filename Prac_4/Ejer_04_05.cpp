// Materia: Programacion I, Paralelo 4
// Autor: Melina Mamani
// Carrera del estudiante: Ing. Biomedica
// Fecha creacion: 28/08/2026

#include <iostream>
using namespace std;

// Una funcion "bool" solo puede devolver true o false
// Es como una funcion en Python que hace "return numero % 2 == 0"
bool esPar(int numero)
{
    if (numero % 2 == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int numero;

    cout << "Ingrese un numero entero: ";
    cin >> numero;

    // Como es par devuelve true/false
    if (esPar(numero))
    {
        cout << numero << " es PAR." << endl;
    }
    else
    {
        cout << numero << " es IMPAR." << endl;
    }

    return 0;
}