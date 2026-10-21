// Materia: Programación I, Paralelo 4
// Autor: Melina Mamani
// Fecha creación: 24/09/2026
// Número de ejercicio: 5

#include <iostream>
using namespace std;

const int MAX = 200;  // el vector combinado puede llegar a ser 2 * N

void leerVector(int vector[], int n, string nombre)
{
    for (int i = 0; i < n; i++)
    {
        cout << "Ingrese el elemento " << (i + 1) << " de " << nombre << ": ";
        cin >> vector[i];
    }
}

// Copia primero todo vector1 y despues todo vector2 dentro de "combinado"
void combinarVectores(int vector1[], int vector2[], int combinado[], int n)
{
    for (int i = 0; i < n; i++)
    {
        combinado[i] = vector1[i];
    }

    for (int i = 0; i < n; i++)
    {
        combinado[n + i] = vector2[i];
    }
}

void mostrarVector(int vector[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << vector[i] << " ";
    }
    cout << endl;
}

int main()
{
    int vector1[MAX / 2];
    int vector2[MAX / 2];
    int combinado[MAX];
    int n;

    cout << "Ingrese la dimension N de los vectores: ";
    cin >> n;

    leerVector(vector1, n, "vector1");
    leerVector(vector2, n, "vector2");

    combinarVectores(vector1, vector2, combinado, n);

    cout << "\nVector combinado: ";
    mostrarVector(combinado, n * 2);

    return 0;
}