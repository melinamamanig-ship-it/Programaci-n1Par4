// Materia: Programación I, Paralelo 4
// Autor: Melina Mamani
// Carrera del estudiante: Ing Biomedica
// Fecha creación: 10/08/2026

#include <iostream>
using namespace std;

int main()
{
    int anio;

    cout << "Ingrese un anio (4 digitos): ";
    cin >> anio;

    // Regla del año bisiesto:
    // - divisible entre 4 Y no divisible entre 100
    // - O divisible entre 400
    if ((anio % 4 == 0 && anio % 100 != 0) || (anio % 400 == 0))
    {
        cout << "El anio " << anio << " ES bisiesto." << endl;
    }
    else
    {
        cout << "El anio " << anio << " NO es bisiesto." << endl;
    }

    return 0;
}