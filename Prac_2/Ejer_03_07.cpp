// Materia: Programacion I, Paralelo 4
// Autor: Melina Mamani
// Carrera del estudiante: Ing. Biomedica
// Fecha creacion: 21/08/2026

#include <iostream>
using namespace std;

int main()
{
    int numero;
    int sumaDivisores = 0;

    cout << "Ingrese un numero entero positivo";
    cin >> numero;

    // Buscamos todos los divisores de "numero" (sin incluirlo a el mismo)
    // Un divisor es cualquier numero que lo divide exactamente (resto 0)
    for (int i = 1; i < numero; i++)
    {
        if (numero % i == 0)
        {
            sumaDivisores = sumaDivisores + i;
        }
    }

    cout << "La suma de los divisores es: " << sumaDivisores << endl;

    if (sumaDivisores == numero)
    {
        cout << numero << " ES un numero perfecto" << endl;
    }
    else
    {
        cout << numero << " NO es un numero perfecto" << endl;
    }

    return 0;
}