// Materia: Programacion I, Paralelo 4
// Autor: Melina Mamani
// Carrera del estudiante: Ing. Biomedica
// Fecha creacion: 28/08/2026

#include <iostream>
using namespace std;

// Recibe el monto en bolivianos y el tipo de cambio, devuelve el monto en dolares
float convertirADolares(float montoBs, float tipoCambio)
{
    float montoUsd;
    montoUsd = montoBs / tipoCambio;
    return montoUsd;
}

int main()
{
    float montoBs;
    float tipoCambioOficial;
    float tipoCambioParalelo;

    float dolaresOficial;
    float dolaresParalelo;

    cout << "Ingrese el monto en bolivianos: ";
    cin >> montoBs;

    cout << "Ingrese el tipo de cambio oficial: ";
    cin >> tipoCambioOficial;

    cout << "Ingrese el tipo de cambio paralelo: ";
    cin >> tipoCambioParalelo;

    // Llamamos a la misma funcion dos veces, con distinto tipo de cambio
    dolaresOficial = convertirADolares(montoBs, tipoCambioOficial);
    dolaresParalelo = convertirADolares(montoBs, tipoCambioParalelo);

    cout << "\nMonto en dolares (tipo oficial): " << dolaresOficial << endl;
    cout << "Monto en dolares (tipo paralelo): " << dolaresParalelo << endl;

    return 0;
}