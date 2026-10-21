// Materia: Programación I, Paralelo 4
// Autor: Melina Mamani
// Fecha creación: 24/09/2026
// Número de ejercicio: 1

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;    

// a) 100 voltajes entre 20.00 y 220.00
void generarVoltajes(double voltajes[], int tamanio)
{
    for (int i = 0; i < tamanio; i++)
    {
        // Formula general para un real aleatorio entre "minimo" y "maximo"
        voltajes[i] = 20.00 + (rand() / (double(RAND_MAX))) * (220.00 - 20.00);
    }
}

// b) 50 temperaturas entre 0.00 y 100.00
void generarTemperaturas(double temperaturas[], int tamanio)
{
    for (int i = 0; i < tamanio; i++)
    {
        temperaturas[i] = 0.00 + (rand() / (double(RAND_MAX))) * (100.00 - 0.00);
    }
}

// c) 30 caracteres alfanumericos (letras y numeros)
void generarCaracteres(char caracteres[], int tamanio)
{
    for (int i = 0; i < tamanio; i++)
    {
        int tipo = rand() % 3;  // 0 = digito, 1 = mayuscula, 2 = minuscula

        if (tipo == 0)
        {
            caracteres[i] = '0' + (rand() % 10);
        }
        else if (tipo == 1)
        {
            caracteres[i] = 'A' + (rand() % 26);
        }
        else
        {
            caracteres[i] = 'a' + (rand() % 26);
        }
    }
}

// d) 100 años entre 1990 y 2025
void generarAnios(int anios[], int tamanio)
{
    for (int i = 0; i < tamanio; i++)
    {
        anios[i] = 1990 + (rand() % (2025 - 1990 + 1));
    }
}

// e) 32 velocidades entre 10.00 y 300.00
void generarVelocidades(double velocidades[], int tamanio)
{
    for (int i = 0; i < tamanio; i++)
    {
        velocidades[i] = 10.00 + (rand() / (double(RAND_MAX))) * (300.00 - 10.00);
    }
}

// f) 1000 distancias entre 1.00 y 1000.00
void generarDistancias(double distancias[], int tamanio)
{
    for (int i = 0; i < tamanio; i++)
    {
        distancias[i] = 1.00 + (rand() / (double(RAND_MAX))) * (1000.00 - 1.00);
    }
}

int main()
{
    const int TAM_VOLTAJES = 100;
    const int TAM_TEMPERATURAS = 50;
    const int TAM_CARACTERES = 30;
    const int TAM_ANIOS = 100;
    const int TAM_VELOCIDADES = 32;
    const int TAM_DISTANCIAS = 1000;

    double voltajes[TAM_VOLTAJES];
    double temperaturas[TAM_TEMPERATURAS];
    char caracteres[TAM_CARACTERES];
    int anios[TAM_ANIOS];
    double velocidades[TAM_VELOCIDADES];
    double distancias[TAM_DISTANCIAS];

    srand(time(0));

    generarVoltajes(voltajes, TAM_VOLTAJES);
    generarTemperaturas(temperaturas, TAM_TEMPERATURAS);
    generarCaracteres(caracteres, TAM_CARACTERES);
    generarAnios(anios, TAM_ANIOS);
    generarVelocidades(velocidades, TAM_VELOCIDADES);
    generarDistancias(distancias, TAM_DISTANCIAS);

    // Mostramos 2 decimales para los numeros reales
    cout << fixed << setprecision(2);

    cout << "--- Voltajes ---" << endl;
    for (int i = 0; i < TAM_VOLTAJES; i++)
    {
        cout << voltajes[i] << " ";
    }

    cout << "\n\n--- Temperaturas ---" << endl;
    for (int i = 0; i < TAM_TEMPERATURAS; i++)
    {
        cout << temperaturas[i] << " ";
    }

    cout << "\n\n--- Caracteres ---" << endl;
    for (int i = 0; i < TAM_CARACTERES; i++)
    {
        cout << caracteres[i] << " ";
    }

    cout << "\n\n--- Anios ---" << endl;
    for (int i = 0; i < TAM_ANIOS; i++)
    {
        cout << anios[i] << " ";
    }

    cout << "\n\n--- Velocidades ---" << endl;
    for (int i = 0; i < TAM_VELOCIDADES; i++)
    {
        cout << velocidades[i] << " ";
    }

    cout << "\n\n--- Distancias ---" << endl;
    for (int i = 0; i < TAM_DISTANCIAS; i++)
    {
        cout << distancias[i] << " ";
    }
    cout << endl;

    return 0;
}