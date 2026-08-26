// Materia: Programacion I, Paralelo 4
// Autor: Melina Mamani
// Carrera del estudiante: Ing. Biomedica
// Fecha creacion: 21/08/2026

#include <iostream>
using namespace std;

int main()
{
    int n;
    int suma = 0;

    cout << "Ingrese un numero entero positivo (n)";
    cin >> n;

    // Vamos sumando cada numero desde 1 hasta n
    for (int i = 1; i <= n; i++)
    {
        suma = suma + i;
    }

    cout << "La suma de 1+2+3+...+" << n << " es: " << suma << endl;

    return 0;
}