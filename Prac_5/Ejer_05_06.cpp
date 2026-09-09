// Materia: Programacion I, Paralelo 4
// Autor: Melina Mamani
// Carrera del estudiante: Ing. BIomedica
// Fecha creacion: 03/09/2026

#include <iostream>
using namespace std;

void calcularTiempo(int totalSegundos, int &horas, int &minutos, int &segundos)
{
    horas = totalSegundos / 3600;

    // Lo que sobra despues de sacar las horas completas
    int segundosRestantes = totalSegundos % 3600;

    minutos = segundosRestantes / 60;
    segundos = segundosRestantes % 60;
}

int main()
{
    int totalSegundos;
    int horas;
    int minutos;
    int segundos;

    cout << "Ingrese el total de segundos: ";
    cin >> totalSegundos;
    calcularTiempo(totalSegundos, horas, minutos, segundos);

    cout << totalSegundos << " segundos equivalen a: " << endl;
    cout << horas << " horas, " << minutos << " minutos, " << segundos << " segundos." << endl;

    return 0;
}