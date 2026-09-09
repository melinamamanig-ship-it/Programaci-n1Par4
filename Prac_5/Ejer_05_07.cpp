// Materia: Programacion I, Paralelo 4
// Autor: Melina Mamani
// Carrera del estudiante: Ing. BIomedica
// Fecha creacion: 03/09/2026

#include <iostream>
using namespace std;

void agregarNota(double &sumaTotal, int &cantidadNotas, double nuevaNota)
{
    sumaTotal = sumaTotal + nuevaNota;
    cantidadNotas = cantidadNotas + 1;
}

int main()
{
    int n;
    double sumaTotal = 0;
    int cantidadNotas = 0;
    double nota;

    cout << "Ingrese la cantidad de notas a registrar: ";
    cin >> n;

    // Llamamos a agregarNota() N veces, una por cada nota ingresada
    for (int i = 1; i <= n; i++)
    {
        cout << "Ingrese la nota " << i << ": ";
        cin >> nota;
        agregarNota(sumaTotal, cantidadNotas, nota);
    }

    double promedio = sumaTotal / cantidadNotas;

    cout << "\nSuma total de notas: " << sumaTotal << endl;
    cout << "Cantidad de notas: " << cantidadNotas << endl;
    cout << "Promedio: " << promedio << endl;

    return 0;
}