// Materia: Programación I, Paralelo 4
// Autor: Melina Mamani
// Fecha creación: 
// Número de ejercicio: 7

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

void GenerarNotas(int notas[5][3]);
void CalcularPromedios(int notas[5][3], double promedios[5]);
void OrdenarPorNombre(string nombres[5], int notas[5][3], double promedios[5]);
void MostrarBoletin(string nombres[5], int notas[5][3], double promedios[5]);

int main() {
    srand(time(0));
    string nombres[5] = {"Carlos", "Ana", "Beatriz", "Elena", "Daniel"};
    int notas[5][3];
    double promedios[5];
    GenerarNotas(notas);
    CalcularPromedios(notas, promedios);
    cout << "Boletin antes de ordenar:\n";
    MostrarBoletin(nombres, notas, promedios);
    OrdenarPorNombre(nombres, notas, promedios);
    cout << "\nBoletin ordenado alfabeticamente:\n";
    MostrarBoletin(nombres, notas, promedios);
    return 0;
}

// Funcion que genera notas al azar entre 40 y 100
void GenerarNotas(int notas[5][3])
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 3; j++)
            notas[i][j] = 40 + rand() % 61;
    }
}

// Funcion que calcula el promedio de cada alumno
void CalcularPromedios(int notas[5][3], double promedios[5])
{
    for (int i = 0; i < 5; i++)
    {
        int suma = 0;
        for (int j = 0; j < 3; j++)
            suma = suma + notas[i][j];
        promedios[i] = suma / 3.0;
    }
}

// Metodo de seleccion: al mover un nombre tambien se mueven sus notas y su promedio
void OrdenarPorNombre(string nombres[5], int notas[5][3], double promedios[5])
{
    for (int i = 0; i < 4; i++)
    {
        int posMenor = i;
        for (int j = i + 1; j < 5; j++)
        {
            if (nombres[j] < nombres[posMenor])
                posMenor = j;
        }
        if (posMenor != i)
        {
            string auxNombre = nombres[i];
            nombres[i] = nombres[posMenor];
            nombres[posMenor] = auxNombre;
            for (int k = 0; k < 3; k++)
            {
                int auxNota = notas[i][k];
                notas[i][k] = notas[posMenor][k];
                notas[posMenor][k] = auxNota;
            }
            double auxPromedio = promedios[i];
            promedios[i] = promedios[posMenor];
            promedios[posMenor] = auxPromedio;
        }
    }
}

// Funcion que imprime el boletin
void MostrarBoletin(string nombres[5], int notas[5][3], double promedios[5])
{
    cout << "Alumno\t\tNota 1\tNota 2\tNota 3\tPromedio\n";
    cout << "-------------------------------------------------\n";
    for (int i = 0; i < 5; i++)
    {
        cout << nombres[i] << "\t\t";
        for (int j = 0; j < 3; j++)
            cout << notas[i][j] << "\t";
        cout << promedios[i] << "\n";
    }
}
