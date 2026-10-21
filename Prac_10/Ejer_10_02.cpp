// Materia: Programación I, Paralelo 4
// Autor: Melina Mamani
// Fecha creación: 
// Número de ejercicio: 2

#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
using namespace std;

vector<int> GenerarPuntuaciones(int N);
vector<int> OrdenarBurbuja(vector<int> puntuaciones);
void MostrarPodio(vector<int> puntuaciones);

int main() {
    srand(time(0));
    int N;
    do
    {
        cout << "Ingrese el numero de jugadores: ";
        cin >> N;
    } while (N < 1);
    vector<int> puntuaciones = GenerarPuntuaciones(N);
    cout << "\nPuntuaciones sin ordenar:\n";
    for (int i = 0; i < puntuaciones.size(); i++)
        cout << puntuaciones[i] << " ";
    cout << "\n";
    vector<int> ordenadas = OrdenarBurbuja(puntuaciones);
    cout << "\nPuntuaciones ordenadas de mayor a menor:\n";
    for (int i = 0; i < ordenadas.size(); i++)
        cout << ordenadas[i] << " ";
    cout << "\n\n";
    MostrarPodio(ordenadas);
    return 0;
}

// Funcion que genera N puntuaciones entre 1 y 100
vector<int> GenerarPuntuaciones(int N)
{
    vector<int> puntuaciones;
    for (int i = 0; i < N; i++)
        puntuaciones.push_back(1 + rand() % 100);
    return puntuaciones;
}

// Metodo de la burbuja (de mayor a menor)
vector<int> OrdenarBurbuja(vector<int> puntuaciones)
{
    int n = puntuaciones.size();
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (puntuaciones[j] < puntuaciones[j + 1])
            {
                int auxiliar = puntuaciones[j];
                puntuaciones[j] = puntuaciones[j + 1];
                puntuaciones[j + 1] = auxiliar;
            }
        }
    }
    return puntuaciones;
}

// Funcion que muestra los 3 primeros lugares
void MostrarPodio(vector<int> puntuaciones)
{
    cout << "--- PODIO ---\n";
    for (int i = 0; i < 3 && i < puntuaciones.size(); i++)
        cout << "Lugar " << i + 1 << ": " << puntuaciones[i] << " puntos\n";
}
