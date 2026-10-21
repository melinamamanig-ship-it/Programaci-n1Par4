// Materia: Programación I, Paralelo 4
// Autor: Melina Mamani
// Fecha creación: 
// Número de ejercicio: 3

#include <iostream>
using namespace std;

void GenerarMatriz(int m[10][10], int n);
void MostrarMatriz(int m[10][10], int n);

int main() {
    int m[10][10];
    int n;
    do
    {
        cout << "Ingrese el orden de la matriz (1 a 10): ";
        cin >> n;
    } while (n < 1 || n > 10);
    GenerarMatriz(m, n);
    cout << "\n";
    MostrarMatriz(m, n);
    return 0;
}

// La fila i empieza en 1 + 2*i y aumenta de uno en uno
void GenerarMatriz(int m[10][10], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            m[i][j] = 1 + 2 * i + j;
    }
}

// Funcion para mostrar la matriz
void MostrarMatriz(int m[10][10], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            cout << m[i][j] << "\t";
        cout << "\n";
    }
}
