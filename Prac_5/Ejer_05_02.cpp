// Materia: Programacion I, Paralelo 4
// Autor: Melina Mamani
// Carrera del estudiante: Ing. BIomedica
// Fecha creacion: 03/09/2026

#include <iostream>
using namespace std;

void modificarValores(int valor, int &referencia)
{
    valor = valor * 2;
    referencia = referencia + 10;

    cout << "Dentro de la funcion -> valor: " << valor << ", referencia: " << referencia << endl;
}

int main()
{
    int numeroValor;
    int numeroReferencia;

    cout << "Ingrese un numero (se pasara por valor): ";
    cin >> numeroValor;

    cout << "Ingrese otro numero (se pasara por referencia): ";
    cin >> numeroReferencia;

    cout << "\nAntes de llamar a la funcion:" << endl;
    cout << "numeroValor: " << numeroValor << ", numeroReferencia: " << numeroReferencia << endl;

    modificarValores(numeroValor, numeroReferencia);

    cout << "\nDespues de llamar a la funcion:" << endl;
    cout << "numeroValor: " << numeroValor << ", numeroReferencia: " << numeroReferencia << endl;

    return 0;
}