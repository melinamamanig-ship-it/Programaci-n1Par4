// Materia: Programación I, Paralelo 4
// Autor: Melina Mamani
// Carrera del estudiante: Ing Biomedica..
// Fecha creación: 10/08/2026

#include <iostream>
using namespace std;

int main()
{
    int numero;
    cout << "Ingrese un numero entero: ";
    cin >> numero;

    // Si el resto es 0, es par
    if (numero % 2 == 0)
    {
        cout << numero << " es PAR." << endl;
    }
    else
    {
        cout << numero << " es IMPAR." << endl;
    }

    return 0;
}