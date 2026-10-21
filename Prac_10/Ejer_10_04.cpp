// Materia: Programación I, Paralelo 4
// Autor: Melina Mamani
// Fecha creación: 
// Número de ejercicio: 4

#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
using namespace std;

vector<double> GenerarPrecios(int N);
vector<double> OrdenarSeleccion(vector<double> precios);
double ProductoMasBarato(vector<double> precios);
double ProductoMasCaro(vector<double> precios);
double Mediana(vector<double> precios);

int main() {
    srand(time(0));
    int N;
    do
    {
        cout << "Ingrese el numero de productos: ";
        cin >> N;
    } while (N < 1);
    vector<double> precios = GenerarPrecios(N);
    cout << "\nPrecios sin ordenar:\n";
    for (int i = 0; i < precios.size(); i++)
        cout << precios[i] << " ";
    cout << "\n";
    vector<double> ordenados = OrdenarSeleccion(precios);
    cout << "\nPrecios ordenados de forma ascendente:\n";
    for (int i = 0; i < ordenados.size(); i++)
        cout << ordenados[i] << " ";
    cout << "\n\n";
    cout << "Producto mas barato: " << ProductoMasBarato(ordenados) << "\n";
    cout << "Producto mas caro: " << ProductoMasCaro(ordenados) << "\n";
    cout << "Mediana: " << Mediana(ordenados) << "\n";
    return 0;
}

// Funcion que genera N precios entre 1.00 y 100.00
vector<double> GenerarPrecios(int N)
{
    vector<double> precios;
    for (int i = 0; i < N; i++)
        precios.push_back(1 + (rand() % 9901) / 100.0);
    return precios;
}

// Metodo de seleccion (ascendente)
vector<double> OrdenarSeleccion(vector<double> precios)
{
    int n = precios.size();
    for (int i = 0; i < n - 1; i++)
    {
        int posMenor = i;
        for (int j = i + 1; j < n; j++)
        {
            if (precios[j] < precios[posMenor])
                posMenor = j;
        }
        double auxiliar = precios[i];
        precios[i] = precios[posMenor];
        precios[posMenor] = auxiliar;
    }
    return precios;
}

// Con el vector ordenado, el mas barato es el primero
double ProductoMasBarato(vector<double> precios)
{
    return precios[0];
}

// Con el vector ordenado, el mas caro es el ultimo
double ProductoMasCaro(vector<double> precios)
{
    return precios[precios.size() - 1];
}

// Mediana del vector ordenado
double Mediana(vector<double> precios)
{
    int n = precios.size();
    if (n % 2 == 1)
        return precios[n / 2];
    else
        return (precios[n / 2 - 1] + precios[n / 2]) / 2;
}
