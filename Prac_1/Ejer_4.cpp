// Materia: Programación I, Paralelo 4
// Autor: Melina Mamani
// Carrera del estudiante: Ing. Biomedica..
// Fecha creación: 10/08/2026

#include <iostream>
using namespace std;

int main()
{
    float notaPracticas;
    float notaTeorica;
    float notaParticipacion;
    float notaFinal;
    cout << "Ingrese la nota de practicas (30%): ";
    cin >> notaPracticas;
    cout << "Ingrese la nota teorica (60%): ";
    cin >> notaTeorica;
    cout << "Ingrese la nota de participacion (10%): ";
    cin >> notaParticipacion;

    // nota segun su porcentaje
    notaFinal = (notaPracticas * 0.30) + (notaTeorica * 0.60) + (notaParticipacion * 0.10);

    cout << "La nota final es: " << notaFinal << endl;

    return 0;
}