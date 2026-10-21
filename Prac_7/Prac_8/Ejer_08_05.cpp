// Materia: Programación I, Paralelo 4
// Autor: Melina Mamani
// Fecha creación: 
// Número de ejercicio: 5

#include <iostream>
#include <string>
using namespace std;

void AnalizarURL(string url);

int main() {
    string url;
    cout << "Ingrese una URL (ej: https://www.ejemplo.com/carpeta/pagina.html): ";
    cin >> url;
    AnalizarURL(url);
    return 0;
}

// Funcion que separa protocolo, dominio y ruta usando find y substr
void AnalizarURL(string url)
{
    int posProtocolo = url.find("://");
    if (posProtocolo == string::npos)
    {
        cout << "URL invalida\n";
        return;
    }
    string protocolo = url.substr(0, posProtocolo);
    string resto = url.substr(posProtocolo + 3); // lo que sigue despues de ://
    string dominio;
    string ruta;
    int posRuta = resto.find("/");
    if (posRuta == string::npos)
    {
        dominio = resto;
        ruta = "/";
    }
    else
    {
        dominio = resto.substr(0, posRuta);
        ruta = resto.substr(posRuta);
    }
    cout << "Protocolo: " << protocolo << "\n";
    cout << "Dominio: " << dominio << "\n";
    cout << "Ruta: " << ruta << "\n";
}
