// Materia: Programación I, Paralelo 4
// Autor: Melina Mamani
// Fecha creación: 24/09/2026
// Número de ejercicio: 3

#include <iostream>
#include <iomanip>
using namespace std;

const int MAX = 100;  // tamaño maximo que puede tener el arreglo

// Pide los N numeros y los guarda en el arreglo
void leerCalificaciones(int calificaciones[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "Ingrese la calificacion " << (i + 1) << ": ";
        cin >> calificaciones[i];
    }
}

// Suma todos los elementos del arreglo
int calcularSuma(int calificaciones[], int n)
{
    int suma = 0;

    for (int i = 0; i < n; i++)
    {
        suma = suma + calificaciones[i];
    }

    return suma;
}

double calcularPromedio(int calificaciones[], int n)
{
    int suma = calcularSuma(calificaciones, n);
    return double(suma) / n;
}

// Llena el arreglo "desviacion" con (cada elemento - el promedio)
void calcularDesviaciones(int calificaciones[], double desviacion[], int n, double promedio)
{
    for (int i = 0; i < n; i++)
    {
        desviacion[i] = calificaciones[i] - promedio;
    }
}

void mostrarDesviaciones(int calificaciones[], double desviacion[], int n)
{
    cout << "\nCalificacion\tDesviacion" << endl;

    for (int i = 0; i < n; i++)
    {
        cout << calificaciones[i] << "\t\t" << desviacion[i] << endl;
    }
}

// Varianza = suma de (desviacion al cuadrado) / n
double calcularVarianza(double desviacion[], int n)
{
    double sumaCuadrados = 0;

    for (int i = 0; i < n; i++)
    {
        sumaCuadrados = sumaCuadrados + (desviacion[i] * desviacion[i]);
    }

    return sumaCuadrados / n;
}

int main()
{
    int calificaciones[MAX];
    double desviacion[MAX];
    int n;

    cout << "Ingrese la cantidad de calificaciones (maximo " << MAX << "): ";
    cin >> n;

    leerCalificaciones(calificaciones, n);

    int suma = calcularSuma(calificaciones, n);
    double promedio = calcularPromedio(calificaciones, n);

    calcularDesviaciones(calificaciones, desviacion, n, promedio);

    double varianza = calcularVarianza(desviacion, n);

    cout << fixed << setprecision(2);

    cout << "\nSuma total: " << suma << endl;
    cout << "Promedio: " << promedio << endl;

    mostrarDesviaciones(calificaciones, desviacion, n);

    cout << "\nVarianza: " << varianza << endl;

    return 0;
}