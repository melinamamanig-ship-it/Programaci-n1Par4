// Materia: Programación I, Paralelo 4
// Autor: Melina Mamani
// Fecha creación: 30/10/2026

#include <iostream>
#include <string>
using namespace std;

// Un "struct" agrupa varias variables relacionadas bajo un solo nombre.
// Es parecido a un diccionario de Python, pero con campos fijos y tipados.
struct Jugador
{
    string nickname;
    int nivel;
    int experiencia;
};

void ingresarJugador(Jugador &jugador)
{
    cout << "Ingrese el nickname: ";
    cin >> jugador.nickname;

    cout << "Ingrese el nivel inicial: ";
    cin >> jugador.nivel;

    cout << "Ingrese la experiencia inicial: ";
    cin >> jugador.experiencia;
}

void mostrarJugador(Jugador jugador)
{
    cout << "Nickname: " << jugador.nickname << endl;
    cout << "Nivel: " << jugador.nivel << endl;
    cout << "Experiencia: " << jugador.experiencia << endl;
}

// Recibe el jugador por REFERENCIA (&) para poder modificarlo directamente
void sumarExperiencia(Jugador &jugador, int puntos)
{
    jugador.experiencia = jugador.experiencia + puntos;

    // Si la experiencia pasa de 100, sube de nivel y se reinicia la experiencia
    if (jugador.experiencia > 100)
    {
        jugador.nivel = jugador.nivel + 1;
        jugador.experiencia = 0;
    }
}

int main()
{
    Jugador jugador;
    int puntosGanados;

    ingresarJugador(jugador);

    cout << "\n--- Datos ANTES de sumar experiencia ---" << endl;
    mostrarJugador(jugador);

    cout << "\nIngrese los puntos de experiencia ganados: ";
    cin >> puntosGanados;

    sumarExperiencia(jugador, puntosGanados);

    cout << "\n--- Datos DESPUES de sumar experiencia ---" << endl;
    mostrarJugador(jugador);

    return 0;
}