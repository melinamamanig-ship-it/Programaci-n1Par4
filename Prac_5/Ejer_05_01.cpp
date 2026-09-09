// Materia: Programacion I, Paralelo 4
// Autor: Melina Mamani
// Carrera del estudiante: Ing. BIomedica
// Fecha creacion: 03/09/2026

#include <iostream>
using namespace std;

void intercambiarValores(int &a, int &b)
{
    int temporal;
    temporal = a;
    a = b;
    b = temporal;
}

int main()
{
    int numero1;
    int numero2;

    cout << "Ingrese el primer numero: ";
    cin >> numero1;

    cout << "Ingrese el segundo numero: ";
    cin >> numero2;

    cout << "\nAntes del intercambio:" << endl;
    cout << "numero1 = " << numero1 << ", numero2 = " << numero2 << endl;

    intercambiarValores(numero1, numero2);
    
    cout << "\nDespues del intercambio:" << endl;
    cout << "numero1 = " << numero1 << ", numero2 = " << numero2 << endl;

    return 0;
}