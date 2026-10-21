// Materia: Programación I, Paralelo 4
// Autor: Melina Mamani
// Fecha creación: 
// Número de ejercicio: 7

#include <iostream>
#include <string>
#include <vector>
using namespace std;

vector<string> ExtraerHashtags(string texto);

int main() {
    string texto;
    cout << "Ingrese un texto: ";
    getline(cin, texto);
    vector<string> hashtags = ExtraerHashtags(texto);
    if (hashtags.size() == 0)
        cout << "No se encontraron hashtags\n";
    else
    {
        cout << "Hashtags encontrados:\n";
        for (int i = 0; i < hashtags.size(); i++)
            cout << i + 1 << ". " << hashtags[i] << "\n";
    }
    return 0;
}

// Funcion que guarda en un vector las palabras que empiezan con #
vector<string> ExtraerHashtags(string texto)
{
    vector<string> hashtags;
    string palabra = "";
    for (int i = 0; i <= texto.length(); i++)
    {
        if (i == texto.length() || texto[i] == ' ')
        {
            if (palabra.length() > 1 && palabra[0] == '#')
                hashtags.push_back(palabra);
            palabra = "";
        }
        else
            palabra += texto[i];
    }
    return hashtags;
}
