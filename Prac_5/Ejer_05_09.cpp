// Materia: Programacion I, Paralelo 4
// Autor: Melina Mamani
// Carrera del estudiante: Ing. BIomedica
// Fecha creacion: 03/09/2026

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

// Calcula el factorial de "n"
long long calcularFactorial(int n)
{
    long long resultado = 1;

    for (int i = 1; i <= n; i++)
    {
        resultado = resultado * i;
    }

    return resultado;
}

int main()
{
    int numero;
    long long factorial;

    srand(time(0));

    // Numero aleatorio entre 1 y 10
    numero = (rand() % 10) + 1;

    factorial = calcularFactorial(numero);

    cout << "Numero generado: " << numero << endl;
    cout << "El factorial de " << numero << " es: " << factorial << endl;

    return 0;
}