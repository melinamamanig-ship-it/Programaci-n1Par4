// Materia: Programación I, Paralelo 4
// Autor: Melina Mamani
// Fecha creación: 
// Número de ejercicio: 3

#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
using namespace std;

vector<float> GenerarTiempos(int N);
vector<float> OrdenarInsercion(vector<float> tiempos);
void MostrarLista(vector<float> tiempos);

int main() {
    srand(time(0));
    int N;
    do
    {
        cout << "Ingrese el numero de atletas: ";
        cin >> N;
    } while (N < 1);
    vector<float> tiempos = GenerarTiempos(N);
    cout << "\nTiempos antes de ordenar:\n";
    MostrarLista(tiempos);
    vector<float> ordenados = OrdenarInsercion(tiempos);
    cout << "\nTiempos despues de ordenar (de menor a mayor):\n";
    MostrarLista(ordenados);
    return 0;
}

// Funcion que genera N tiempos entre 10.00 y 20.00 segundos
vector<float> GenerarTiempos(int N)
{
    vector<float> tiempos;
    for (int i = 0; i < N; i++)
        tiempos.push_back(10 + (rand() % 1001) / 100.0);
    return tiempos;
}

// Metodo de insercion (de menor a mayor)
vector<float> OrdenarInsercion(vector<float> tiempos)
{
    int n = tiempos.size();
    for (int i = 1; i < n; i++)
    {
        float actual = tiempos[i];
        int j = i - 1;
        while (j >= 0 && tiempos[j] > actual)
        {
            tiempos[j + 1] = tiempos[j];
            j--;
        }
        tiempos[j + 1] = actual;
    }
    return tiempos;
}

// Funcion para mostrar la lista de tiempos
void MostrarLista(vector<float> tiempos)
{
    for (int i = 0; i < tiempos.size(); i++)
        cout << i + 1 << ". " << tiempos[i] << " seg\n";
}
