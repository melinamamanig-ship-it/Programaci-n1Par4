// Materia: Programacion I, Paralelo 4
// Autor: Melina Mamani
// Carrera del estudiante: Ing. Biomedica
// Fecha creacion: 28/08/2026

#include <iostream>
using namespace std;

// Movimiento Rectilineo Uniforme: distancia = velocidad * tiempo
float calcularDistancia(float velocidad, float tiempo)
{
    float distancia;
    distancia = velocidad * tiempo;
    return distancia;
}

int main()
{
    float velocidad;
    float tiempo;
    float distancia;

    cout << "Ingrese la velocidad constante (m/s): ";
    cin >> velocidad;
    cout << "Ingrese el tiempo (s): ";
    cin >> tiempo;
    distancia = calcularDistancia(velocidad, tiempo);
    cout << "La distancia recorrida es: " << distancia << " metros" << endl;
    return 0;
}