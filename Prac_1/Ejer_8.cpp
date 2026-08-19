// Materia: Programación I, Paralelo 4
// Autor: Melina Mamani
// Carrera del estudiante: ing Biomedica..
// Fecha creación: 10/08/2026

#include <iostream>
using namespace std;

int main()
{
    float nota;
    cout << "Ingrese una nota (0 a 100): ";
    cin >> nota;
    while (nota < 0 || nota > 100)
    {
        cout << "Nota invalida. Ingrese una nota (0 a 100): ";
        cin >> nota;
    }

    cout << "Nota registrada correctamente" << endl;

    return 0;
}