// Materia: Programación I, Paralelo 4
// Autor: Melina Mamani
// Fecha creación: 30/10/2026

#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct Producto
{
    string nombre;
    string codigo;
    double precio;
};

void ingresarProductos(vector<Producto> &productos, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "\nPRODUCTO " << (i + 1) << ": " << endl;

        cout << "Nombre: ";
        cin >> productos[i].nombre;

        cout << "Codigo: ";
        cin >> productos[i].codigo;

        cout << "Precio: ";
        cin >> productos[i].precio;
    }
}

// Recorre el vector comparando contra el mayor/menor encontrado hasta el momento
void mostrarMasCaroYMasBarato(vector<Producto> productos)
{
    int indiceMasCaro = 0;
    int indiceMasBarato = 0;

    for (int i = 1; i < productos.size(); i++)
    {
        if (productos[i].precio > productos[indiceMasCaro].precio)
        {
            indiceMasCaro = i;
        }

        if (productos[i].precio < productos[indiceMasBarato].precio)
        {
            indiceMasBarato = i;
        }
    }

    cout << "\nProducto mas caro: " << productos[indiceMasCaro].nombre << " ($" << productos[indiceMasCaro].precio << ")" << endl;
    cout << "Producto mas barato: " << productos[indiceMasBarato].nombre << " ($" << productos[indiceMasBarato].precio << ")" << endl;
}

int main()
{
    int n;

    cout << "Ingrese la cantidad de productos: ";
    cin >> n;

    vector<Producto> productos(n);

    ingresarProductos(productos, n);

    mostrarMasCaroYMasBarato(productos);

    return 0;
}