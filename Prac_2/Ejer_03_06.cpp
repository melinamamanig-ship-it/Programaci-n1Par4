// Materia: Programacion I, Paralelo 4
// Autor: Melina Mamani
// Carrera del estudiante: Ing. Biomedica
// Fecha creacion: 21/08/2026

#include <iostream>
using namespace std;

int main()
{
    int numero1;
    int numero2;

    cout << "Ingrese el primer numero entero";
    cin >> numero1;

    cout << "Ingrese el segundo numero entero (distinto al primero)";
    cin >> numero2;

    cout << "\nSerie: ";

    if (numero1 > numero2)
    {
        // Serie descendente: de numero1 hasta numero2, restando 1
        for (int i = numero1; i >= numero2; i--)
        {
            cout << i << " ";
        }
    }
    else
    {
        // Serie ascendente: de numero1 hasta numero2, sumando 1
        for (int i = numero1; i <= numero2; i++)
        {
            cout << i << " ";
        }
    }

    cout << endl;

    return 0;
}