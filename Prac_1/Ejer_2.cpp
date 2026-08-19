// Materia: Programación I, Paralelo 4
// Autor: Melina Mamani
// Carrera del estudiante: Ing Biomedica..
// Fecha creación: 10/08/2026

#include <iostream>
using namespace std;

int main()
{
    float precio;
    float iva;
    float precioFinal;
    cout << "Ingrese el precio del producto: ";
    cin >> precio;

    // IVA = 13% del precio
    iva = precio * 0.13;
    precioFinal = precio + iva;
    cout << "Precio con IVA incluido: " << precioFinal << endl;

    return 0;
}