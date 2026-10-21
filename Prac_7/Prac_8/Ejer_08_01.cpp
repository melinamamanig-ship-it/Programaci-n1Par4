// Materia: Programación I, Paralelo 4
// Autor: Melina Mamani
// Fecha creación: 
// Número de ejercicio: 1

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

void GenerarDatos(string nombres[10], string apellidos[10], int edades[10], int N);

int main() {
    srand(time(0));
    string nombres[10] = {"Maria", "Juan", "Lucia", "Carlos", "Ana", "Pedro", "Sofia", "Diego", "Valeria", "Luis"};
    string apellidos[10] = {"Mamani", "Quispe", "Flores", "Choque", "Condori", "Rojas", "Gutierrez", "Vargas", "Mendoza", "Torrez"};
    int edades[10] = {18, 19, 20, 21, 22, 23, 24, 25, 26, 27};
    int N;
    cout << "Cuantas veces desea desplegar los datos: ";
    cin >> N;
    GenerarDatos(nombres, apellidos, edades, N);
    return 0;
}

// Funcion para elegir un nombre, un apellido y una edad al azar N veces
void GenerarDatos(string nombres[10], string apellidos[10], int edades[10], int N)
{
    for (int i = 0; i < N; i++)
    {
        int posNombre = rand() % 10;
        int posApellido = rand() % 10;
        int posEdad = rand() % 10;
        cout << i + 1 << ". " << nombres[posNombre] << " " << apellidos[posApellido]
             << ", " << edades[posEdad] << " anios\n";
    }
}
