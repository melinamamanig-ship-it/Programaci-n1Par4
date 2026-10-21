// Materia: Programación I, Paralelo 4
// Autor: Melina Mamani
// Fecha creación: 
// Número de ejercicio: 6

#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <ctime>
using namespace std;

string GenerarNombreCompleto(string nombres[10], string apellidos[10]);
vector<string> OrdenarInsercion(vector<string> lista);
void MostrarLista(vector<string> lista);

int main() {
    srand(time(0));
    string nombres[10] = {"Maria", "Juan", "Lucia", "Carlos", "Ana", "Pedro", "Sofia", "Diego", "Valeria", "Luis"};
    string apellidos[10] = {"Mamani", "Quispe", "Flores", "Choque", "Condori", "Rojas", "Gutierrez", "Vargas", "Mendoza", "Torrez"};
    int N;
    do
    {
        cout << "Ingrese el numero de estudiantes: ";
        cin >> N;
    } while (N < 1);
    vector<string> lista;
    for (int i = 0; i < N; i++)
        lista.push_back(GenerarNombreCompleto(nombres, apellidos));
    cout << "\nLista sin ordenar:\n";
    MostrarLista(lista);
    vector<string> ordenada = OrdenarInsercion(lista);
    cout << "\nLista de asistencia (A - Z):\n";
    MostrarLista(ordenada);
    return 0;
}

// Funcion del ejercicio 1: devuelve un nombre completo al azar
string GenerarNombreCompleto(string nombres[10], string apellidos[10])
{
    int posNombre = rand() % 10;
    int posApellido = rand() % 10;
    return nombres[posNombre] + " " + apellidos[posApellido];
}

// Metodo de insercion para ordenar alfabeticamente
vector<string> OrdenarInsercion(vector<string> lista)
{
    int n = lista.size();
    for (int i = 1; i < n; i++)
    {
        string actual = lista[i];
        int j = i - 1;
        while (j >= 0 && lista[j] > actual)
        {
            lista[j + 1] = lista[j];
            j--;
        }
        lista[j + 1] = actual;
    }
    return lista;
}

// Funcion para mostrar la lista
void MostrarLista(vector<string> lista)
{
    for (int i = 0; i < lista.size(); i++)
        cout << i + 1 << ". " << lista[i] << "\n";
}
