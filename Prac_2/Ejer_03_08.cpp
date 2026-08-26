// Materia: Programacion I, Paralelo 4
// Autor: Melina Mamani
// Carrera del estudiante: Ing. Biomedica
// Fecha creacion: 21/08/2026

#include <iostream>
#include <cstdlib>  // para rand()
#include <ctime>    // para time()
using namespace std;

int main()
{
    int n;
    float precioBase;      // precio total del producto (incluye utilidad + IVA), antes de descuento
    float utilidad;
    float impuestoIVA;
    float descuento;
    float precioFinal;     // lo que realmente paga el cliente (con descuento si aplica)

    float sumaTotalDinero = 0;   // suma de lo que realmente ingreso (precios finales)
    float sumaIVA = 0;           // IVA acumulado a declarar
    float sumaDescuentos = 0;    // total descontado a los clientes

    float precioMasCaro = 0;
    float precioMasBarato = 0;

    srand(time(0));

    cout << "Ingrese la cantidad de productos vendidos en el dia: ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        // Generamos el precio base del producto entre 10 y 10000 Bs
        precioBase = (rand() % 9991) + 10;

        // Descomponemos el precio en utilidad (87%) e impuesto (13%)
        utilidad = precioBase * 0.87;
        impuestoIVA = precioBase * 0.13;

        // Si el precio supera los 2500 Bs, se aplica un descuento del 5%
        if (precioBase > 2500)
        {
            descuento = precioBase * 0.05;
        }
        else
        {
            descuento = 0;
        }

        precioFinal = precioBase - descuento;

        cout << "Producto " << i << " -> Precio base: " << precioBase
             << " | Descuento: " << descuento
             << " | Precio final: " << precioFinal << endl;

        // Acumulamos los totales del dia
        sumaTotalDinero = sumaTotalDinero + precioFinal;
        sumaIVA = sumaIVA + impuestoIVA;
        sumaDescuentos = sumaDescuentos + descuento;

        // En el primer producto inicializamos el maximo y el minimo,
        // en los siguientes solo los actualizamos si corresponde
        if (i == 1)
        {
            precioMasCaro = precioFinal;
            precioMasBarato = precioFinal;
        }
        else
        {
            if (precioFinal > precioMasCaro)
            {
                precioMasCaro = precioFinal;
            }

            if (precioFinal < precioMasBarato)
            {
                precioMasBarato = precioFinal;
            }
        }
    }

    cout << "\n--- Reporte del dia ---" << endl;
    cout << "Total de dinero ingresado: " << sumaTotalDinero << " Bs" << endl;
    cout << "Total de IVA a declarar: " << sumaIVA << " Bs" << endl;
    cout << "Total descontado a clientes: " << sumaDescuentos << " Bs" << endl;
    cout << "Producto mas caro vendido: " << precioMasCaro << " Bs" << endl;
    cout << "Producto mas barato vendido: " << precioMasBarato << " Bs" << endl;

    return 0;
}