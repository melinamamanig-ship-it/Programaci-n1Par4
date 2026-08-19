// Materia: Programación I, Paralelo 4
// Autor: Melina Mamani
// Carrera del estudiante: Ing Biomedica..
// Fecha creación: 10/08/2026

#include <iostream>
using namespace std;

int main()
{
    int numero;
    int numeroOriginal;
    int digito;
    int cantidadDigitos = 0;
    int sumaDigitos = 0;
    cout << "Ingrese un numero entero positivo: ";
    cin >> numero;

    numeroOriginal = numero;
    while (numero != 0)
    {
        digito = numero % 10;
        sumaDigitos = sumaDigitos + digito;
        cantidadDigitos = cantidadDigitos + 1;

        numero = numero / 10;
    }

    cout << "El numero " << numeroOriginal << " tiene " << cantidadDigitos << " digitos." << endl;
    cout << "La suma de sus digitos es: " << sumaDigitos << endl;

    return 0;
}