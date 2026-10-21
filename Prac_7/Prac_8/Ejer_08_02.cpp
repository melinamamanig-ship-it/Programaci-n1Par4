// Materia: Programación I, Paralelo 4
// Autor: Melina Mamani
// Fecha creación: 
// Número de ejercicio: 2

#include <iostream>
#include <string>
using namespace std;

bool EsSegura(string contrasena);

int main() {
    string contrasena;
    cout << "Ingrese una contrasena: ";
    cin >> contrasena;
    if (EsSegura(contrasena))
        cout << "La contrasena es segura\n";
    else
        cout << "La contrasena NO es segura\n";
    return 0;
}

// Funcion que verifica si la contrasena es segura
bool EsSegura(string contrasena)
{
    bool mayuscula = false;
    bool minuscula = false;
    bool numero = false;
    bool especial = false;
    if (contrasena.length() < 8)
        return false;
    for (int i = 0; i < contrasena.length(); i++)
    {
        char c = contrasena[i];
        if (c >= 'A' && c <= 'Z')
            mayuscula = true;
        else if (c >= 'a' && c <= 'z')
            minuscula = true;
        else if (c >= '0' && c <= '9')
            numero = true;
        else
            especial = true; // cualquier otro caracter se considera especial
    }
    return mayuscula && minuscula && numero && especial;
}
