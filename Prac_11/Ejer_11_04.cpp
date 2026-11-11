// Materia: Programación I, Paralelo 4
// Autor: Melina Mamani
// Fecha creación: 30/10/2026

#include <iostream>
#include <string>
#include <cstring>   // para strcpy, necesario porque direccion y estado son char[]
using namespace std;

struct Paquete
{
    string codigoRastreo;
    char direccion[50];
    double pesoKg;
    char estado[20];
};

void ingresarPaquete(Paquete &paquete)
{
    cout << "Ingrese el codigo de rastreo: ";
    cin >> paquete.codigoRastreo;

    cin.ignore();   // limpia el "enter" pendiente antes de usar getline

    cout << "Ingrese la direccion de entrega: ";
    cin.getline(paquete.direccion, 50);

    cout << "Ingrese el peso en Kg: ";
    cin >> paquete.pesoKg;

    // strcpy copia un texto literal dentro de un arreglo de char (no se puede usar "=" como con string)
    strcpy(paquete.estado, "En Transito");
}

// Recibe el paquete por referencia para poder cambiar su estado
void actualizarYMostrarRecibo(Paquete &paquete)
{
    strcpy(paquete.estado, "Entregado");

    cout << "\n--- Recibo de entrega ---" << endl;
    cout << "Codigo de rastreo: " << paquete.codigoRastreo << endl;
    cout << "Direccion: " << paquete.direccion << endl;
    cout << "Peso: " << paquete.pesoKg << " Kg" << endl;
    cout << "Estado: " << paquete.estado << endl;
}

int main()
{
    Paquete paquete;

    ingresarPaquete(paquete);

    cout << "\nEstado inicial: " << paquete.estado << endl;

    actualizarYMostrarRecibo(paquete);

    // sizeof() muestra cuantos bytes ocupa la estructura en memoria
    cout << "\nLa estructura Paquete ocupa " << sizeof(paquete) << " bytes." << endl;

    return 0;
}