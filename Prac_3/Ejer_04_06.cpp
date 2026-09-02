// Materia: Programacion I, Paralelo 4
// Autor: Melina Mamani
// Carrera del estudiante: Ing. Biomedica
// Fecha creacion: 28/08/2026

#include <iostream>
using namespace std;

// Recibe N y devuelve la suma de 1 hasta N usando un ciclo
int sumarNaturales(int n)
{
    int suma = 0;

    for (int i = 1; i <= n; i++)
    {
        suma = suma + i;
    }
    return suma;
}

int main()
{
    int n;
    int resultado;
    cout << "Ingrese un numero entero positivo (N): ";
    cin >> n;
    resultado = sumarNaturales(n);
    cout << "La suma de 1 hasta " << n << " es: " << resultado << endl;
    return 0;
}