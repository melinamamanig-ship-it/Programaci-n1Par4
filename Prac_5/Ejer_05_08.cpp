// Materia: Programacion I, Paralelo 4
// Autor: Melina Mamani
// Carrera del estudiante: Ing. BIomedica
// Fecha creacion: 03/09/2026

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

// Simula un lanzamiento, 0 (cara) o 1 (cruz)
int lanzarMoneda()
{
    return rand() % 2;
}

// Repite el lanzamiento "n" veces y va acumulando caras/cruces 
void simularLanzamientos(int n, int &caras, int &cruces)
{
    for (int i = 1; i <= n; i++)
    {
        int resultado = lanzarMoneda();

        if (resultado == 0)
        {
            caras = caras + 1;
        }
        else
        {
            cruces = cruces + 1;
        }
    }
}

int main()
{
    int n;
    int caras = 0;
    int cruces = 0;

    srand(time(0));

    cout << "Ingrese cuantas veces se lanzara la moneda: ";
    cin >> n;

    simularLanzamientos(n, caras, cruces);

    float porcentajeCaras = (float(caras) / n) * 100;
    float porcentajeCruces = (float(cruces) / n) * 100;

    cout << "\nCaras: " << caras << " (" << porcentajeCaras << "%)" << endl;
    cout << "Cruces: " << cruces << " (" << porcentajeCruces << "%)" << endl;

    return 0;
}