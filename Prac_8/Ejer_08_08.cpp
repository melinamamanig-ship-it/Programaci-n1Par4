// Materia: Programación I, Paralelo 4
// Autor: Melina Mamani
// Fecha creación: 
// Número de ejercicio: 8

#include <iostream>
#include <string>
#include <vector>
using namespace std;

vector<string> DividirPalabras(string oracion);
bool HayPlagio(string oracion1, string oracion2);

int main() {
    string oracion1, oracion2;
    cout << "Ingrese la primera oracion: ";
    getline(cin, oracion1);
    cout << "Ingrese la segunda oracion: ";
    getline(cin, oracion2);
    if (HayPlagio(oracion1, oracion2))
        cout << "true: hay sospecha de plagio\n";
    else
        cout << "false: no hay sospecha de plagio\n";
    return 0;
}

// Funcion que divide una oracion en palabras
vector<string> DividirPalabras(string oracion)
{
    vector<string> palabras;
    string palabra = "";
    for (int i = 0; i <= oracion.length(); i++)
    {
        if (i == oracion.length() || oracion[i] == ' ')
        {
            if (palabra.length() > 0)
                palabras.push_back(palabra);
            palabra = "";
        }
        else
            palabra += oracion[i];
    }
    return palabras;
}

// Cuenta las palabras de la primera oracion que aparecen en la segunda
bool HayPlagio(string oracion1, string oracion2)
{
    vector<string> palabras1 = DividirPalabras(oracion1);
    vector<string> palabras2 = DividirPalabras(oracion2);
    int coincidencias = 0;
    for (int i = 0; i < palabras1.size(); i++)
    {
        for (int j = 0; j < palabras2.size(); j++)
        {
            if (palabras1[i] == palabras2[j])
            {
                coincidencias++;
                break; // ya se encontro, pasa a la siguiente palabra
            }
        }
    }
    cout << "Coincidencias: " << coincidencias << "\n";
    return coincidencias > 3;
}
