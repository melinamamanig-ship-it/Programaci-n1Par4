// Materia: Programacion I, Paralelo 4
// Autor: Melina Mamani
// Carrera del estudiante: Ing. Biomedica
// Fecha creacion: 28/08/2026

#include <iostream>
using namespace std;

// Recibe un numero positivo y devuelve cuantos digitos tiene
int contarDigitos(int numero)
{
    int cantidad = 0;

    // Mientras queden digitos, division entera entre 10
    while (numero != 0)
    {
        numero = numero / 10;
        cantidad = cantidad + 1;
    }
    return cantidad;
}

int main()
{
    int numero;
    int cantidadDigitos;
    cout << "Ingrese un numero entero positivo: ";
    cin >> numero;
    cantidadDigitos = contarDigitos(numero);
    cout << "El numero tiene " << cantidadDigitos << " digitos." << endl;
    return 0;
}