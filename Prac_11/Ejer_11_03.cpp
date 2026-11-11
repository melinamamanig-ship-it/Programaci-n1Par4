// Materia: Programación I, Paralelo 4
// Autor: Melina Mamani
// Fecha creación: 30/10/2026

#include <iostream>
#include <string>
using namespace std;

struct Tiempo
{
    int horas;
    int minutos;
    int segundos;
};

void ingresarTiempo(Tiempo &tiempo, string etiqueta)
{
    cout << "Ingrese horas de " << etiqueta << ": ";
    cin >> tiempo.horas;

    cout << "Ingrese minutos de " << etiqueta << ": ";
    cin >> tiempo.minutos;

    cout << "Ingrese segundos de " << etiqueta << ": ";
    cin >> tiempo.segundos;
}

void mostrarTiempo(Tiempo tiempo)
{
    cout << tiempo.horas << "h " << tiempo.minutos << "m " << tiempo.segundos << "s" << endl;
}

// Recibe los dos tiempos por VALOR (son copias, no se modifican los originales)
// y retorna una nueva estructura Tiempo con la suma ya "normalizada"
Tiempo sumarTiempos(Tiempo t1, Tiempo t2)
{
    Tiempo resultado;

    resultado.segundos = t1.segundos + t2.segundos;
    resultado.minutos = t1.minutos + t2.minutos;
    resultado.horas = t1.horas + t2.horas;

    // Si los segundos pasan de 59, convertimos el excedente en minutos
    if (resultado.segundos > 59)
    {
        resultado.minutos = resultado.minutos + (resultado.segundos / 60);
        resultado.segundos = resultado.segundos % 60;
    }

    // Si los minutos (ya con el ajuste anterior) pasan de 59, convertimos en horas
    if (resultado.minutos > 59)
    {
        resultado.horas = resultado.horas + (resultado.minutos / 60);
        resultado.minutos = resultado.minutos % 60;
    }

    return resultado;
}

int main()
{
    Tiempo tiempo1;
    Tiempo tiempo2;

    ingresarTiempo(tiempo1, "el primer tiempo");
    ingresarTiempo(tiempo2, "el segundo tiempo");

    Tiempo suma = sumarTiempos(tiempo1, tiempo2);

    cout << "\nTiempo 1: ";
    mostrarTiempo(tiempo1);

    cout << "Tiempo 2: ";
    mostrarTiempo(tiempo2);

    cout << "Suma total: ";
    mostrarTiempo(suma);

    return 0;
}