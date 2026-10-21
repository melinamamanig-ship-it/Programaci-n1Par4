// Materia: Programación I, Paralelo 4
// Autor: Melina Mamani
// Fecha creación: 24/09/2026
// Número de ejercicio: 6

#include <iostream>
using namespace std;

const int TAMANIO = 5;

void leerVector(int vector[], int n, string nombre)
{
    for (int i = 0; i < n; i++)
    {
        cout << "Ingrese el elemento " << (i + 1) << " de " << nombre << ": ";
        cin >> vector[i];
    }
}

void sumarVectores(int vector1[], int vector2[], int vector3[], int n)
{
    for (int i = 0; i < n; i++)
    {
        vector3[i] = vector1[i] + vector2[i];
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
    int vector1[TAMANIO];
    int vector2[TAMANIO];
    int vector3[TAMANIO];

    leerVector(vector1, TAMANIO, "vector1");
    leerVector(vector2, TAMANIO, "vector2");

    sumarVectores(vector1, vector2, vector3, TAMANIO);

    cout << "\nvector3 (vector1 + vector2): ";
    mostrarVector(vector3, TAMANIO);

    return 0;
}