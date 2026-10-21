// Materia: Programación I, Paralelo 4
// Autor: Melina Mamani
// Fecha creación: 
// Número de ejercicio: 5

#include <iostream>
#include <string>
using namespace std;

string CrearAnagrama(string palabra);

int main() {
    string palabra;
    cout << "Ingrese una palabra (en minusculas): ";
    cin >> palabra;
    cout << "Caracteres ordenados alfabeticamente: " << CrearAnagrama(palabra) << "\n";
    return 0;
}

// Funcion que ordena los caracteres de la palabra (metodo de burbuja)
string CrearAnagrama(string palabra)
{
    int n = palabra.length();
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (palabra[j] > palabra[j + 1])
            {
                char auxiliar = palabra[j];
                palabra[j] = palabra[j + 1];
                palabra[j + 1] = auxiliar;
            }
        }
    }
    return palabra;
}
