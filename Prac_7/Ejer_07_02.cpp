// Materia: Programación I, Paralelo 4
// Autor: Melina Mamani
// Fecha creación: 24/09/2026
// Número de ejercicio: 2

#include <iostream>
#include <iomanip>
using namespace std;

// Muestra el arreglo de 3 en 3 por linea
void mostrarVoltios(double voltios[], int tamanio)
{
    for (int i = 0; i < tamanio; i++)
    {
        cout << voltios[i] << "\t";

        // Cada 3 elementos saltamos de linea
        // "(i + 1) % 3 == 0" es verdadero cuando ya mostramos el 3er, 6to, 9no... elemento
        if ((i + 1) % 3 == 0)
        {
            cout << endl;
        }
    }
}

int main()
{
    const int TAMANIO = 9;

    // Inicializamos el arreglo directamente con los valores dados
    double voltios[TAMANIO] = {11.95, 16.32, 12.15, 8.22, 15.98, 26.22, 13.54, 6.45, 17.59};

    cout << fixed << setprecision(2);

    mostrarVoltios(voltios, TAMANIO);

    return 0;
}