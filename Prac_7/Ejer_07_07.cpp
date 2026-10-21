// Materia: Programación I, Paralelo 4
// Autor: Melina Mamani
// Fecha creación: 24/09/2026
// Número de ejercicio: 7

#include <iostream>
using namespace std;

const int TAMANIO = 100;

// Llena el vector mientras no este lleno Y el usuario no ingrese un negativo.
// Devuelve cuantos elementos REALMENTE se llegaron a ingresar.
int llenarVector(int vector[], int tamanioMaximo)
{
    int cantidadIngresada = 0;
    int numero;
    bool detener = false;

    while (cantidadIngresada < tamanioMaximo && !detener)
    {
        cout << "Ingrese un numero (negativo para detener): ";
        cin >> numero;

        if (numero < 0)
        {
            detener = true;
        }
        else
        {
            vector[cantidadIngresada] = numero;
            cantidadIngresada = cantidadIngresada + 1;
        }
    }

    return cantidadIngresada;
}

void mostrarVector(int vector[], int cantidad)
{
    cout << "Elementos ingresados: ";

    for (int i = 0; i < cantidad; i++)
    {
        cout << vector[i] << " ";
    }
    cout << endl;
}

int main()
{
    int vector[TAMANIO];
    int cantidad;

    cantidad = llenarVector(vector, TAMANIO);

    mostrarVector(vector, cantidad);

    return 0;
}