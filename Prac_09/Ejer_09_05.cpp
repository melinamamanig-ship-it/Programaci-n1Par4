// Materia: Programación I, Paralelo 4
// Autor: Melina Mamani
// Fecha creación: 
// Número de ejercicio: 5

#include <iostream>
using namespace std;

void MostrarSala(int sala[5][5]);
void ReservarAsiento(int sala[5][5]);
void CalcularOcupacion(int sala[5][5]);

int main() {
    int sala[5][5] = { {0,0,0,0,0},{0,0,0,0,0},{0,0,0,0,0},{0,0,0,0,0},{0,0,0,0,0} };
    int opcion;
    do
    {
        cout << "\n--- CINE VIP ---\n";
        cout << "1. Mostrar sala\n";
        cout << "2. Reservar asiento\n";
        cout << "3. Porcentaje de ocupacion\n";
        cout << "4. Salir\n";
        cout << "Elija una opcion: ";
        cin >> opcion;
        if (opcion == 1)
            MostrarSala(sala);
        else if (opcion == 2)
            ReservarAsiento(sala);
        else if (opcion == 3)
            CalcularOcupacion(sala);
        else if (opcion != 4)
            cout << "Opcion invalida. Intenta de nuevo.\n";
    } while (opcion != 4);
    return 0;
}

// Funcion para mostrar la sala: L = libre, O = ocupado
void MostrarSala(int sala[5][5])
{
    cout << "\n    1  2  3  4  5\n";
    for (int i = 0; i < 5; i++)
    {
        cout << i + 1 << "   ";
        for (int j = 0; j < 5; j++)
        {
            if (sala[i][j] == 0)
                cout << "L  ";
            else
                cout << "O  ";
        }
        cout << "\n";
    }
}

// Funcion para reservar un asiento
void ReservarAsiento(int sala[5][5])
{
    int fila, columna;
    cout << "Ingrese la fila (1 a 5): ";
    cin >> fila;
    cout << "Ingrese la columna (1 a 5): ";
    cin >> columna;
    if (fila < 1 || fila > 5 || columna < 1 || columna > 5)
    {
        cout << "Asiento invalido. Intenta de nuevo.\n";
    }
    else if (sala[fila - 1][columna - 1] == 1)
    {
        cout << "Asiento ocupado. Intenta de nuevo.\n";
    }
    else
    {
        sala[fila - 1][columna - 1] = 1;
        cout << "Asiento reservado con exito\n";
    }
}

// Funcion que calcula el porcentaje de ocupacion
void CalcularOcupacion(int sala[5][5])
{
    int ocupados = 0;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (sala[i][j] == 1)
                ocupados++;
        }
    }
    cout << "Asientos ocupados: " << ocupados << " de 25\n";
    cout << "Porcentaje de ocupacion: " << ocupados * 100.0 / 25 << "%\n";
}
