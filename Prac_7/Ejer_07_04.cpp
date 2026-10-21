// Materia: Programación I, Paralelo 4
// Autor: Melina Mamani
// Fecha creación: 24/09/2026
// Número de ejercicio: 4

#include <iostream>
using namespace std;

const int MAX = 100;

void leerVector(int vector[], int n, string nombre)
{
    for (int i = 0; i < n; i++)
    {
        cout << "Ingrese el elemento " << (i + 1) << " de " << nombre << ": ";
        cin >> vector[i];
    }
}

// Multiplica elemento por elemento: resultado[i] = vector1[i] * vector2[i]
void multiplicarVectores(int vector1[], int vector2[], int resultado[], int n)
{
    for (int i = 0; i < n; i++)
    {
        resultado[i] = vector1[i] * vector2[i];
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
    int vector1[MAX];
    int vector2[MAX];
    int resultado[MAX];
    int n;

    cout << "Ingrese la dimension N de los vectores: ";
    cin >> n;

    leerVector(vector1, n, "vector1");
    leerVector(vector2, n, "vector2");

    multiplicarVectores(vector1, vector2, resultado, n);

    cout << "\nVector1: ";
    mostrarVector(vector1, n);

    cout << "Vector2: ";
    mostrarVector(vector2, n);

    cout << "Resultado (multiplicacion): ";
    mostrarVector(resultado, n);

    return 0;
}