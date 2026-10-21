// Materia: Programación I, Paralelo 4
// Autor: Melina Mamani
// Fecha creación: 
// Número de ejercicio: 1

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

void GenerarNombres(string nombres[10], string apellidos[10], int N);

int main() {
    srand(time(0));
    string nombres[10] = {"Maria", "Juan", "Lucia", "Carlos", "Ana", "Pedro", "Sofia", "Diego", "Valeria", "Luis"};
    string apellidos[10] = {"Mamani", "Quispe", "Flores", "Choque", "Condori", "Rojas", "Gutierrez", "Vargas", "Mendoza", "Torrez"};
    int N;
    cout << "Cuantos nombres completos desea generar: ";
    cin >> N;
    GenerarNombres(nombres, apellidos, N);
    return 0;
}

// Funcion que genera N nombres completos al azar
void GenerarNombres(string nombres[10], string apellidos[10], int N)
{
    for (int i = 0; i < N; i++)
    {
        int posNombre = rand() % 10;
        int posApellido = rand() % 10;
        cout << i + 1 << ". " << nombres[posNombre] << " " << apellidos[posApellido] << "\n";
    }
}
