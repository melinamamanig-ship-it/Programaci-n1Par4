// Materia: Programación I, Paralelo 4
// Autor: Melina Mamani
// Fecha creación: 
// Número de ejercicio: 3

#include <iostream>
#include <string>
using namespace std;

bool Tiene16Digitos(string tarjeta);
bool ValidarLuhn(string tarjeta);

int main() {
    string tarjeta;
    cout << "Ingrese los 16 digitos de la tarjeta (sin espacios): ";
    cin >> tarjeta;
    if (!Tiene16Digitos(tarjeta))
        cout << "Debe ingresar exactamente 16 digitos\n";
    else if (ValidarLuhn(tarjeta))
        cout << "La tarjeta es valida\n";
    else
        cout << "La tarjeta NO es valida\n";
    return 0;
}

// Funcion para verificar que sean 16 caracteres y todos digitos
bool Tiene16Digitos(string tarjeta)
{
    if (tarjeta.length() != 16)
        return false;
    for (int i = 0; i < 16; i++)
    {
        if (tarjeta[i] < '0' || tarjeta[i] > '9')
            return false;
    }
    return true;
}

// Algoritmo de Luhn: desde la derecha se duplica un digito si y otro no
bool ValidarLuhn(string tarjeta)
{
    int suma = 0;
    int posicion = 0; // 0 es el digito de mas a la derecha
    for (int i = 15; i >= 0; i--)
    {
        int digito = tarjeta[i] - '0';
        if (posicion % 2 == 1)
        {
            digito = digito * 2;
            if (digito > 9)
                digito = digito - 9;
        }
        suma = suma + digito;
        posicion++;
    }
    return suma % 10 == 0;
}
