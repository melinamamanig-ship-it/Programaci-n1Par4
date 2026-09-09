// Materia: Programacion I, Paralelo 4
// Autor: Melina Mamani
// Carrera del estudiante: Ing. BIomedica
// Fecha creacion: 03/09/2026

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

bool esPar(int numero)
{
    return (numero % 2 == 0);
}

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
    int sumaPares = 0;
    int sumaImpares = 0;
    int cantidadImpares = 0;
    int mayorPrimo = 0;   // 0 significa que no se encontro ningun primo

    srand(time(0));
    cout << "Ingrese la cantidad de numeros a generar (N): ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        numero = (rand() % 1000) + 1;
        cout << "Numero generado: " << numero << endl;

        if (esPar(numero))
        {
            sumaPares = sumaPares + numero;
        }
        else
        {
            sumaImpares = sumaImpares + numero;
            cantidadImpares = cantidadImpares + 1;
        }

        if (esPrimo(numero) && numero > mayorPrimo)
        {
            mayorPrimo = numero;
        }
    }

    cout << "\n--- Resultados ---" << endl;
    cout << "a) Sumatoria de numeros pares: " << sumaPares << endl;

    if (cantidadImpares > 0)
    {
        float promedioImpares = float(sumaImpares) / cantidadImpares;
        cout << "b) Promedio de numeros impares: " << promedioImpares << endl;
    }
    else
    {
        cout << "b) No se genero ningun numero impar." << endl;
    }

    if (mayorPrimo > 0)
    {
        cout << "c) Mayor numero primo generado: " << mayorPrimo << endl;
    }
    else
    {
        cout << "c) No se genero ningun numero primo." << endl;
    }

    return 0;
}