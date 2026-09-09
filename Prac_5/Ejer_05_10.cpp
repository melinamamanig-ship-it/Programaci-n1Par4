// Materia: Programacion I, Paralelo 4
// Autor: Melina Mamani
// Carrera del estudiante: Ing. BIomedica
// Fecha creacion: 03/09/2026

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

// Determina si un numero es primo
bool esPrimo(int numero)
{
    if (numero < 2)
    {
        return false;
    }

    for (int i = 2; i < numero; i++)
    {
        if (numero % i == 0)
        {
            return false;
        }
    }

    return true;
}

int main()
{
    int n;
    int numero;
    int cantidadPrimos = 0;

    srand(time(0));

    cout << "Ingrese la cantidad de numeros a generar (N): ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        // Numero aleatorio entre 1 y 10000
        numero = (rand() % 10000) + 1;

        cout << "Numero generado: " << numero;

        if (esPrimo(numero))
        {
            cout << " -> es PRIMO" << endl;
            cantidadPrimos = cantidadPrimos + 1;
        }
        else
        {
            cout << endl;
        }
    }

    cout << "\nCantidad de numeros primos generados: " << cantidadPrimos << endl;

    return 0;
}