// Materia: Programación I, Paralelo 4
// Autor: Melina Mamani
// Carrera del estudiante: Ing Biomedica..
// Fecha creación: 10/08/2026

#include <iostream>
using namespace std;

int main()
{
    int numero;
    int numeroOriginal;
    int digito;

    cout << "Ingrese un numero entero positivo: ";
    cin >> numero;

    numeroOriginal = numero;

    // Recorremos cada digito del numero (de derecha a izquierda)
    while (numero != 0)
    {
        digito = numero % 10;
        cout << "\nCuadricula para el digito " << digito << ":" << endl;
        for (int fila = 0; fila < digito; fila++)
        {
            for (int columna = 0; columna < digito; columna++)
            {
                cout << "* ";
            }
            cout << endl;
        }

        numero = numero / 10;
    }

    return 0;
}