// Materia: Programación I, Paralelo 4
// Autor: Melina Mamani
// Carrera del estudiante: Ing. Biomedica
// Fecha creación: 21/08/2026

#include <iostream>
using namespace std;

int main()
{
    int numero;

    cout << "Ingrese un numero entero (1 al 10)";
    cin >> numero;

    cout << "\nTabla de multiplicar del " << numero << ":" << endl;

    // Repetimos la multiplicacion desde 1 hasta 10
    for (int i = 1; i <= 10; i++)
    {
        cout << numero << " x " << i << " = " << (numero * i) << endl;
    }

    return 0;
}