// Materia: Programacion I, Paralelo 4
// Autor: Melina Mamani
// Carrera del estudiante: Ing. BIomedica
// Fecha creacion: 03/09/2026

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int calcularPaniales(int ninios1anio, int ninios2anios, int ninios3anios)
{
    int total;
    total = (ninios1anio * 6) + (ninios2anios * 3) + (ninios3anios * 2);
    return total;
}

int main()
{
    int n;
    int ninios1anio;
    int ninios2anios;
    int ninios3anios;

    srand(time(0));

    cout << "Ingrese la cantidad total de ninios (N): ";
    cin >> n;

    // Cantidad de ninios de 1 anio (numero entre 0 y n)
    ninios1anio = rand() % (n + 1);

    // De los que quedan (N - ninios1anio), generamos los que tienen 2 anios
    ninios2anios = rand() % (n - ninios1anio + 1);

    // Los que quedan al final tienen 3 anios (asi la suma nunca pasa de n)
    ninios3anios = rand() % (n - ninios1anio - ninios2anios + 1);

    int totalPaniales = calcularPaniales(ninios1anio, ninios2anios, ninios3anios);

    cout << "\nNinios de 1 anio: " << ninios1anio << endl;
    cout << "Ninios de 2 anios: " << ninios2anios << endl;
    cout << "Ninios de 3 anios: " << ninios3anios << endl;
    cout << "(Total de ninios contados: " << (ninios1anio + ninios2anios + ninios3anios) << " de " << n << ")" << endl;
    cout << "\nConsumo total de paniales por dia: " << totalPaniales << endl;

    return 0;
}