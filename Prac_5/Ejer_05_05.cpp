// Materia: Programacion I, Paralelo 4
// Autor: Melina Mamani
// Carrera del estudiante: Ing. BIomedica
// Fecha creacion: 03/09/2026

#include <iostream>
using namespace std;

// 1 parametro double -> area de un cuadrado
double calcularArea(double lado)
{
    return lado * lado;
}

// 2 parametros double -> area de un rectangulo
double calcularArea(double base, double altura)
{
    return base * altura;
}

// 2 parametros float -> area de un circulo (radio y PI)
float calcularArea(float radio, float pi)
{
    return pi * radio * radio;
}

int main()
{
    double lado;
    double base;
    double altura;
    float radio;
    const float PI = 3.1416f;

    cout << "--- Area de un cuadrado ---" << endl;
    cout << "Ingrese el lado: ";
    cin >> lado;
    cout << "Area del cuadrado: " << calcularArea(lado) << endl;

    cout << "\n--- Area de un rectangulo ---" << endl;
    cout << "Ingrese la base: ";
    cin >> base;
    cout << "Ingrese la altura: ";
    cin >> altura;
    cout << "Area del rectangulo: " << calcularArea(base, altura) << endl;

    cout << "\n--- Area de un circulo ---" << endl;
    cout << "Ingrese el radio: ";
    cin >> radio;
    cout << "Area del circulo: " << calcularArea(radio, PI) << endl;

    return 0;
}