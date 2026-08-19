// Materia: Programación I, Paralelo 4
// Autor: Melina Mamani
// Carrera del estudiante: Ing Biomedica..
// Fecha creación: 10/08/2026

#include <iostream>
using namespace std;

int main()
{
    int edad;
    char sexo;
    float altura;
    cout << "Ingrese su edad: ";
    cin >> edad;
    cout << "Ingrese su sexo (M/F): ";
    cin >> sexo;
    cout << "Ingrese su altura en metros: ";
    cin >> altura;

    // Mostramos los datos leidos
    cout << "\n--- Datos ingresados ---" << endl;
    cout << "Edad: " << edad << " anios" << endl;
    cout << "Sexo: " << sexo << endl;
    cout << "Altura: " << altura << " m" << endl;

    return 0;
}