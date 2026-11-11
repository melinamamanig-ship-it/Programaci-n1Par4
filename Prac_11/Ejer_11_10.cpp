// Materia: Programación I, Paralelo 4
// Autor: Melina Mamani
// Fecha creación: 30/10/2026

#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>
#include <ctime>
#include <iomanip>
using namespace std;

struct Equipo
{
    string nombre;
    int partidosJugados;
    int victorias;
    int puntosTotales;
};

// Registra N equipos, inicializando sus estadisticas en 0
void registrarEquipos(vector<Equipo> &equipos, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "Nombre del equipo " << (i + 1) << ": ";
        cin >> equipos[i].nombre;

        equipos[i].partidosJugados = 0;
        equipos[i].victorias = 0;
        equipos[i].puntosTotales = 0;
    }
}

// Elige dos equipos al azar (distintos entre si) y simula un partido entre ellos
void simularPartido(vector<Equipo> &equipos)
{
    int indiceEquipo1 = rand() % equipos.size();
    int indiceEquipo2 = rand() % equipos.size();

    // Si salio el mismo indice dos veces, volvemos a sortear el segundo
    while (indiceEquipo2 == indiceEquipo1)
    {
        indiceEquipo2 = rand() % equipos.size();
    }

    // El ganador se decide al azar: 0 gana el equipo1, 1 gana el equipo2
    int resultado = rand() % 2;

    int indiceGanador;
    int indicePerdedor;

    if (resultado == 0)
    {
        indiceGanador = indiceEquipo1;
        indicePerdedor = indiceEquipo2;
    }
    else
    {
        indiceGanador = indiceEquipo2;
        indicePerdedor = indiceEquipo1;
    }

    // Al ganador: +1 partido jugado, +1 victoria, +3 puntos
    equipos[indiceGanador].partidosJugados = equipos[indiceGanador].partidosJugados + 1;
    equipos[indiceGanador].victorias = equipos[indiceGanador].victorias + 1;
    equipos[indiceGanador].puntosTotales = equipos[indiceGanador].puntosTotales + 3;

    // Al perdedor: solo +1 partido jugado
    equipos[indicePerdedor].partidosJugados = equipos[indicePerdedor].partidosJugados + 1;

    cout << equipos[indiceGanador].nombre << " le gano a " << equipos[indicePerdedor].nombre << endl;
}

// Ordena el vector de mayor a menor puntaje (burbuja: comparamos pares vecinos
// y los intercambiamos si estan en el orden incorrecto, varias pasadas)
void ordenarPorPuntos(vector<Equipo> &equipos)
{
    for (int i = 0; i < equipos.size() - 1; i++)
    {
        for (int j = 0; j < equipos.size() - 1 - i; j++)
        {
            if (equipos[j].puntosTotales < equipos[j + 1].puntosTotales)
            {
                Equipo temporal = equipos[j];
                equipos[j] = equipos[j + 1];
                equipos[j + 1] = temporal;
            }
        }
    }
}

void mostrarTablaPosiciones(vector<Equipo> equipos)
{
    cout << "\nPosicion | Equipo | Jugados | Victorias | Puntos" << endl;
    cout << "-----------------------------------------------" << endl;

    for (int i = 0; i < equipos.size(); i++)
    {
        cout << (i + 1) << " | " << equipos[i].nombre << " | " << equipos[i].partidosJugados
             << " | " << equipos[i].victorias << " | " << equipos[i].puntosTotales << endl;
    }
}

int main()
{
    int n;
    int cantidadPartidos;

    srand(time(0));

    cout << "Ingrese la cantidad de equipos: ";
    cin >> n;

    vector<Equipo> equipos(n);

    registrarEquipos(equipos, n);

    cout << "\nIngrese cuantos partidos simular: ";
    cin >> cantidadPartidos;

    cout << "\n--- Simulacion ---" << endl;
    for (int i = 0; i < cantidadPartidos; i++)
    {
        simularPartido(equipos);
    }

    ordenarPorPuntos(equipos);

    mostrarTablaPosiciones(equipos);

    return 0;
}