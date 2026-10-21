// Materia: Programación I, Paralelo 4
// Autor: Melina Mamani
// Fecha creación: 
// Número de ejercicio: 1

#include <iostream>
using namespace std;

void LeerMatriz(int m[10][10], int n);
void MostrarMatriz(int m[10][10], int n);
void IntercambiarFilas(int m[10][10], int n);

int main() {
    int m[10][10];
    int n;
    do
    {
        cout << "Ingrese el orden de la matriz (1 a 10): ";
        cin >> n;
    } while (n < 1 || n > 10);
    LeerMatriz(m, n);
    cout << "\nMatriz original:\n";
    MostrarMatriz(m, n);
    IntercambiarFilas(m, n);
    cout << "\nMatriz con la primera y ultima fila intercambiadas:\n";
    MostrarMatriz(m, n);
    return 0;
}

// Funcion para leer la matriz
void LeerMatriz(int m[10][10], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "Elemento [" << i + 1 << "][" << j + 1 << "]: ";
            cin >> m[i][j];
        }
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

// Funcion que intercambia la primera fila con la ultima
void IntercambiarFilas(int m[10][10], int n)
{
    for (int j = 0; j < n; j++)
    {
        int auxiliar = m[0][j];
        m[0][j] = m[n - 1][j];
        m[n - 1][j] = auxiliar;
    }
}
