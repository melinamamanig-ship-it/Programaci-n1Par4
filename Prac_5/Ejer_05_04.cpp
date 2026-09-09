// Materia: Programacion I, Paralelo 4
// Autor: Melina Mamani
// Carrera del estudiante: Ing. BIomedica
// Fecha creacion: 03/09/2026

#include <iostream>
using namespace std;

double calcularPrecioTotal(double precioBase, double porcentajeImpuesto = 0.13)
{
    double precioTotal;
    precioTotal = precioBase + (precioBase * porcentajeImpuesto);
    return precioTotal;
}

int main()
{
    double precio;
    double totalConIvaPorDefecto;
    double totalConOtroImpuesto;

    cout << "Ingrese el precio base del producto: ";
    cin >> precio;

    totalConIvaPorDefecto = calcularPrecioTotal(precio);
    totalConOtroImpuesto = calcularPrecioTotal(precio, 0.20);

    cout << "Precio total con el 13% (IVA por defecto): " << totalConIvaPorDefecto << endl;
    cout << "Precio total con el 20% (impuesto indicado): " << totalConOtroImpuesto << endl;

    return 0;
}