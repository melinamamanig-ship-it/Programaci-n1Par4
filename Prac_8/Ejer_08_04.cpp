// Materia: Programación I, Paralelo 4
// Autor: Melina Mamani
// Fecha creación: 
// Número de ejercicio: 4

#include <iostream>
#include <string>
using namespace std;

string ReemplazarSiProhibida(string palabra, string prohibidas[10], int cantidad);
string FiltrarMensaje(string mensaje, string prohibidas[10], int cantidad);

int main() {
    string mensaje;
    string prohibidas[10];
    int cantidad;
    cout << "Ingrese el mensaje: ";
    getline(cin, mensaje);
    do
    {
        cout << "Cuantas palabras prohibidas hay (max 10): ";
        cin >> cantidad;
    } while (cantidad < 1 || cantidad > 10);
    for (int i = 0; i < cantidad; i++)
    {
        cout << "Palabra prohibida " << i + 1 << ": ";
        cin >> prohibidas[i];
    }
    cout << "Mensaje filtrado: " << FiltrarMensaje(mensaje, prohibidas, cantidad) << "\n";
    return 0;
}

// Si la palabra esta en la lista devuelve asteriscos del mismo largo
string ReemplazarSiProhibida(string palabra, string prohibidas[10], int cantidad)
{
    for (int i = 0; i < cantidad; i++)
    {
        if (palabra == prohibidas[i])
        {
            string asteriscos = "";
            for (int j = 0; j < palabra.length(); j++)
                asteriscos += '*';
            return asteriscos;
        }
    }
    return palabra;
}

// Recorre el mensaje separando palabra por palabra
string FiltrarMensaje(string mensaje, string prohibidas[10], int cantidad)
{
    string resultado = "";
    string palabra = "";
    for (int i = 0; i <= mensaje.length(); i++)
    {
        if (i == mensaje.length() || mensaje[i] == ' ')
        {
            resultado += ReemplazarSiProhibida(palabra, prohibidas, cantidad);
            if (i < mensaje.length())
                resultado += ' ';
            palabra = "";
        }
        else
            palabra += mensaje[i];
    }
    return resultado;
}
