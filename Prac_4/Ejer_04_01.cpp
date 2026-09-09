// Materia: Programacion I, Paralelo 4
// Autor: Melina Mamani
// Carrera del estudiante: Ing. Biomedica
// Fecha creacion: 28/08/2026

#include <iostream>
using namespace std;

// Declaramos la funcion(float), devuelve el area (float)
float calcularArea(float base, float altura)
{
    float area;
    area = (base * altura) / 2;
    return area;
}
int main()
{
    float base;
    float altura;
    float resultado;

    cout << "Ingrese la base del triangulo: ";
    cin >> base;

    cout << "Ingrese la altura del triangulo: ";
    cin >> altura;
    // Llamamos a la funcion y guardamos lo que retorna
    resultado = calcularArea(base, altura);
    cout << "El area del triangulo es: " << resultado << endl;

    return 0;
}