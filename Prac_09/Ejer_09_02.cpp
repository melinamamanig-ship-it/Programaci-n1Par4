// Materia: Programación I, Paralelo 4
// Autor: Melina Mamani
// Fecha creación: 
// Número de ejercicio: 2

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void LlenarMatriz(int m[10][10], int N, int A, int B);
void MostrarMatriz(int m[10][10], int N);
int SumaUltimaColumna(int m[10][10], int N);
long long ProductoUltimaFila(int m[10][10], int N);
void MayorValor(int m[10][10], int N);
double PromedioGeneral(int m[10][10], int N);

int main() {
    srand(time(0));
    int m[10][10];
    int N, A, B;
    do
    {
        cout << "Ingrese el orden N de la matriz (1 a 10): ";
        cin >> N;
    } while (N < 1 || N > 10);
    do
    {
        cout << "Ingrese el valor minimo A y el valor maximo B (A <= B): ";
        cin >> A >> B;
    } while (A > B);
    LlenarMatriz(m, N, A, B);
    cout << "\nMatriz generada:\n";
    MostrarMatriz(m, N);
    cout << "\nSuma de la ultima columna: " << SumaUltimaColumna(m, N) << "\n";
    cout << "Producto de la ultima fila: " << ProductoUltimaFila(m, N) << "\n";
    MayorValor(m, N);
    cout << "Promedio general: " << PromedioGeneral(m, N) << "\n";
    return 0;
}

// Funcion para llenar la matriz con numeros al azar entre A y B
void LlenarMatriz(int m[10][10], int N, int A, int B)
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
            m[i][j] = A + rand() % (B - A + 1);
    }
}

// Funcion para mostrar la matriz
void MostrarMatriz(int m[10][10], int N)
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
            cout << m[i][j] << "\t";
        cout << "\n";
    }
}

// Funcion que suma la ultima columna
int SumaUltimaColumna(int m[10][10], int N)
{
    int suma = 0;
    for (int i = 0; i < N; i++)
        suma = suma + m[i][N - 1];
    return suma;
}

// Funcion que multiplica los elementos de la ultima fila
long long ProductoUltimaFila(int m[10][10], int N)
{
    long long producto = 1;
    for (int j = 0; j < N; j++)
        producto = producto * m[N - 1][j];
    return producto;
}

// Funcion que busca el mayor valor y muestra su posicion
void MayorValor(int m[10][10], int N)
{
    int mayor = m[0][0];
    int filaMayor = 0;
    int columnaMayor = 0;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (m[i][j] > mayor)
            {
                mayor = m[i][j];
                filaMayor = i;
                columnaMayor = j;
            }
        }
    }
    cout << "Mayor valor: " << mayor << " en la posicion [" << filaMayor + 1 << "][" << columnaMayor + 1 << "]\n";
}

// Funcion que calcula el promedio de todos los elementos
double PromedioGeneral(int m[10][10], int N)
{
    int suma = 0;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
            suma = suma + m[i][j];
    }
    return (double)suma / (N * N);
}
