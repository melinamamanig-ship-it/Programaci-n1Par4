// Materia: Programación I, Paralelo 4
// Autor: Melina Mamani
// Fecha creación: 
// Número de ejercicio: 6

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void LlenarTemperaturas(int temperaturas[4][7]);
void MostrarTemperaturas(int temperaturas[4][7]);
void DiaMasCaluroso(int temperaturas[4][7]);
void PromedioSemanal(int temperaturas[4][7]);
int DiasMayoresA30(int temperaturas[4][7]);

int main() {
    srand(time(0));
    int temperaturas[4][7];
    LlenarTemperaturas(temperaturas);
    cout << "Temperaturas (filas = semanas, columnas = dias):\n";
    MostrarTemperaturas(temperaturas);
    cout << "\n";
    DiaMasCaluroso(temperaturas);
    PromedioSemanal(temperaturas);
    cout << "Dias que superaron los 30 grados: " << DiasMayoresA30(temperaturas) << "\n";
    return 0;
}

// Funcion para llenar con temperaturas entre 5 y 35
void LlenarTemperaturas(int temperaturas[4][7])
{
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 7; j++)
            temperaturas[i][j] = 5 + rand() % 31;
    }
}

// Funcion para mostrar las temperaturas
void MostrarTemperaturas(int temperaturas[4][7])
{
    for (int i = 0; i < 4; i++)
    {
        cout << "Semana " << i + 1 << ": ";
        for (int j = 0; j < 7; j++)
            cout << temperaturas[i][j] << "\t";
        cout << "\n";
    }
}

// Funcion que busca el dia y la semana mas calurosos
void DiaMasCaluroso(int temperaturas[4][7])
{
    int mayor = temperaturas[0][0];
    int semana = 0;
    int dia = 0;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 7; j++)
        {
            if (temperaturas[i][j] > mayor)
            {
                mayor = temperaturas[i][j];
                semana = i;
                dia = j;
            }
        }
    }
    cout << "El dia mas caluroso fue el dia " << dia + 1 << " de la semana " << semana + 1
         << " con " << mayor << " grados\n";
}

// Funcion que calcula el promedio de cada semana
void PromedioSemanal(int temperaturas[4][7])
{
    for (int i = 0; i < 4; i++)
    {
        int suma = 0;
        for (int j = 0; j < 7; j++)
            suma = suma + temperaturas[i][j];
        cout << "Promedio de la semana " << i + 1 << ": " << suma / 7.0 << "\n";
    }
}

// Funcion que cuenta los dias con mas de 30 grados
int DiasMayoresA30(int temperaturas[4][7])
{
    int contador = 0;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 7; j++)
        {
            if (temperaturas[i][j] > 30)
                contador++;
        }
    }
    return contador;
}
