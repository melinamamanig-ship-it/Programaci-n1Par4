// Materia: Programacion I, Paralelo 4
// Autor: Melina Mamani
// Carrera del estudiante: Ing. Biomedica
// Fecha creacion: 21/08/2026

#include <iostream>
using namespace std;

int main()
{
    int n;
    long long sumaFactoriales = 0;   // long long porque crecen muy rapido
    long long factorialActual;

    cout << "Ingrese un numero entero positivo (n)";
    cin >> n;

    // Por cada numero i de 1 a n, calculamos su factorial y lo sumamos
    for (int i = 1; i <= n; i++)
    {
        factorialActual = 1;

        // Factorial de i = 1 * 2 * 3 * ... * i
        for (int j = 1; j <= i; j++)
        {
            factorialActual = factorialActual * j;
        }

        sumaFactoriales = sumaFactoriales + factorialActual;
    }

    cout << "La suma 1!+2!+3!+...+" << n << "! es: " << sumaFactoriales << endl;

    return 0;
}