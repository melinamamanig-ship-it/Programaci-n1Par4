// Materia: Programacion I, Paralelo 4
// Autor: Melina Mamani
// Carrera del estudiante: Ing biomedica
// Fecha creacion: 28/08/2026

#include <iostream>
using namespace std;

// Recibe tres enteros y devuelve el mayor de ellos
int obtenerMayor(int a, int b, int c)
{
    int mayor;
    mayor = a;
    if (b > mayor)
    {
        mayor = b;
    }
    if (c > mayor)
    {
        mayor = c;
    }

    return mayor;
}

int main()
{
    int num1;
    int num2;
    int num3;
    int mayorNumero;

    cout << "Ingrese el primer numero: ";
    cin >> num1;

    cout << "Ingrese el segundo numero: ";
    cin >> num2;

    cout << "Ingrese el tercer numero: ";
    cin >> num3;

    mayorNumero = obtenerMayor(num1, num2, num3);

    cout << "El numero mayor es: " << mayorNumero << endl;

    return 0;
}