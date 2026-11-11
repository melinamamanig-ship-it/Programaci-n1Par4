// Materia: Programación I, Paralelo 4
// Autor: Melina Mamani
// Fecha creación: 30/10/2026

#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

struct Estudiante
{
    string nombres;
    int notaFinal;
};

// Genera N estudiantes con nombres fijos (Estudiante1, Estudiante2...) y nota aleatoria
void generarEstudiantes(vector<Estudiante> &estudiantes, int n)
{
    for (int i = 0; i < n; i++)
    {
        estudiantes[i].nombres = "Estudiante" + to_string(i + 1);
        estudiantes[i].notaFinal = rand() % 101;   // nota entre 0 y 100
    }
}

// Recorre el vector y separa los nombres en dos listas segun la nota
void mostrarAprobadosYReprobados(vector<Estudiante> estudiantes)
{
    cout << "\n--- Aprobados (nota >= 60) ---" << endl;
    for (int i = 0; i < estudiantes.size(); i++)
    {
        if (estudiantes[i].notaFinal >= 60)
        {
            cout << "- " << estudiantes[i].nombres << " (" << estudiantes[i].notaFinal << ")" << endl;
        }
    }

    cout << "\n--- Reprobados (nota < 60) ---" << endl;
    for (int i = 0; i < estudiantes.size(); i++)
    {
        if (estudiantes[i].notaFinal < 60)
        {
            cout << "- " << estudiantes[i].nombres << " (" << estudiantes[i].notaFinal << ")" << endl;
        }
    }
}

int main()
{
    int n;

    srand(time(0));

    cout << "Ingrese la cantidad de estudiantes: ";
    cin >> n;

    vector<Estudiante> estudiantes(n);

    generarEstudiantes(estudiantes, n);

    mostrarAprobadosYReprobados(estudiantes);

    return 0;
}