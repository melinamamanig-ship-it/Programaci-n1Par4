// Materia: Programacion I, Paralelo 4
// Autor: Melina Mamani
// Carrera del estudiante: Ing. Biomedica
// Fecha creacion: 28/08/2026

#include <iostream>
using namespace std;

// const define un valor que no puede cambiar durante el programa
// (equivalente a una "constante")
const float PI = 3.1416;

float calcularVolumenCilindro(float radio, float altura)
{
    float volumen;
    volumen = PI * radio * radio * altura;
    return volumen;
}

int main()
{
    float radio;
    float altura;
    float volumen;

    cout << "Ingrese el radio del cilindro: ";
    cin >> radio;

    cout << "Ingrese la altura del cilindro: ";
    cin >> altura;

    volumen = calcularVolumenCilindro(radio, altura);

    cout << "El volumen del cilindro es: " << volumen << endl;

    return 0;
}