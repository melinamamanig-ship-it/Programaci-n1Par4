// Materia: Programación I, Paralelo 4
// Autor: Melina Mamani
// Fecha creación: 30/10/2026

#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct Tarea
{
    string descripcion;
    bool completada;   // true = completada, false = pendiente
};

void ingresarTareas(vector<Tarea> &tareas, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "Descripcion de la tarea " << (i + 1) << ": ";
        cin.ignore();
        getline(cin, tareas[i].descripcion);

        tareas[i].completada = false;   // todas inician como pendientes
    }
}

// a) Muestra solo las tareas que todavia NO estan completadas
void mostrarPendientes(vector<Tarea> tareas)
{
    cout << "\n--- Tareas pendientes ---" << endl;

    bool hayPendientes = false;

    for (int i = 0; i < tareas.size(); i++)
    {
        if (!tareas[i].completada)
        {
            cout << i << ". " << tareas[i].descripcion << endl;
            hayPendientes = true;
        }
    }

    if (!hayPendientes)
    {
        cout << "No hay tareas pendientes." << endl;
    }
}

// b) Recibe el vector por referencia y el indice de la tarea a marcar
void marcarCompletada(vector<Tarea> &tareas, int indice)
{
    if (indice >= 0 && indice < tareas.size())
    {
        tareas[indice].completada = true;
        cout << "Tarea \"" << tareas[indice].descripcion << "\" marcada como completada." << endl;
    }
    else
    {
        cout << "Indice invalido." << endl;
    }
}

void mostrarTodas(vector<Tarea> tareas)
{
    cout << "\n--- Todas las tareas ---" << endl;

    for (int i = 0; i < tareas.size(); i++)
    {
        cout << i << ". " << tareas[i].descripcion << " -> ";

        if (tareas[i].completada)
        {
            cout << "Completada";
        }
        else
        {
            cout << "Pendiente";
        }
        cout << endl;
    }
}

int main()
{
    int n;

    cout << "Ingrese la cantidad de tareas: ";
    cin >> n;

    vector<Tarea> tareas(n);

    ingresarTareas(tareas, n);

    int opcion;
    int indiceElegido;

    do
    {
        cout << "\n--- MENU ---" << endl;
        cout << "1. Mostrar tareas pendientes" << endl;
        cout << "2. Marcar una tarea como completada" << endl;
        cout << "3. Mostrar todas las tareas" << endl;
        cout << "0. Salir" << endl;
        cout << "Elija una opcion: ";
        cin >> opcion;

        switch (opcion)
        {
            case 1:
                mostrarPendientes(tareas);
                break;

            case 2:
                cout << "Ingrese el indice de la tarea a completar (0 a " << (n - 1) << "): ";
                cin >> indiceElegido;
                marcarCompletada(tareas, indiceElegido);
                break;

            case 3:
                mostrarTodas(tareas);
                break;

            case 0:
                cout << "Saliendo del programa..." << endl;
                break;

            default:
                cout << "Opcion invalida." << endl;
                break;
        }

    } while (opcion != 0);

    return 0;
}