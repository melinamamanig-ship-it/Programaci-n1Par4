// Materia: Programación I, Paralelo 4
// Autor: Melina Mamani
// Fecha creación: 
// Número de ejercicio: 6

#include <iostream>
#include <string>
using namespace std;

string LimpiarEspacios(string texto);

int main() {
    string texto;
    cout << "Ingrese un texto: ";
    getline(cin, texto);
    cout << "Texto limpio: [" << LimpiarEspacios(texto) << "]\n";
    return 0;
}

// Funcion que deja un solo espacio entre palabras y quita los de los extremos
string LimpiarEspacios(string texto)
{
    string resultado = "";
    for (int i = 0; i < texto.length(); i++)
    {
        if (texto[i] != ' ')
            resultado += texto[i];
        else if (resultado.length() > 0 && resultado[resultado.length() - 1] != ' ')
            resultado += ' '; // solo se agrega si el anterior no era espacio
    }
    // si quedo un espacio al final, se quita
    if (resultado.length() > 0 && resultado[resultado.length() - 1] == ' ')
        resultado = resultado.substr(0, resultado.length() - 1);
    return resultado;
}
