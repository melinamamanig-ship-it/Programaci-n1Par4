// Materia: Programación I, Paralelo 4
// Autor: Melina Mamani
// Fecha creación: 30/10/2026

#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct Cancion
{
    string titulo;
    string artista;
    int duracionSegundos;
};

// Mismo patron que "IngresoDatosPersonaV2" del ejemplo: recibe el vector ya creado
// con tamaño n, y va llenando cada posicion con ListaCanciones[i].campo
void ingresarCanciones(vector<Cancion> &canciones, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "\nCANCION " << (i + 1) << ": " << endl;
        cin.ignore();

        cout << "Titulo: ";
        getline(cin, canciones[i].titulo);

        cout << "Artista: ";
        getline(cin, canciones[i].artista);

        cout << "Duracion en segundos: ";
        cin >> canciones[i].duracionSegundos;
    }
}

// Recorre el vector sumando la duracion de todas las canciones,
// y al final convierte el total de segundos a minutos:segundos
void mostrarDuracionTotal(vector<Cancion> canciones)
{
    int totalSegundos = 0;

    for (int i = 0; i < canciones.size(); i++)
    {
        totalSegundos = totalSegundos + canciones[i].duracionSegundos;
    }

    int minutos = totalSegundos / 60;
    int segundosRestantes = totalSegundos % 60;

    cout << "\nDuracion total de la playlist: " << minutos << " minutos y " << segundosRestantes << " segundos." << endl;
}

int main()
{
    int n;

    cout << "Ingrese la cantidad de canciones: ";
    cin >> n;

    vector<Cancion> canciones(n);

    ingresarCanciones(canciones, n);

    cout << "\n--- Playlist ---" << endl;
    for (int i = 0; i < canciones.size(); i++)
    {
        cout << canciones[i].titulo << " - " << canciones[i].artista << " (" << canciones[i].duracionSegundos << "s)" << endl;
    }

    mostrarDuracionTotal(canciones);

    return 0;
}