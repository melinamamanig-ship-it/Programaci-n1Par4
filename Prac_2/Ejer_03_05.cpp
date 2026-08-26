// Materia: Programacion I, Paralelo 4
// Autor: Melina Mamani
// Carrera del estudiante: Ing. Biomedica
// Fecha creacion: 21/08/2026

#include <iostream>
#include <cstdlib>  // para rand()
#include <ctime>    // para time()
using namespace std;

int main()
{
    int numeroSecreto;
    int intento;
    int cantidadIntentos = 0;

    srand(time(0));

    // Generamos el numero que el usuario debe adivinar (entre 1 y 100)
    numeroSecreto = (rand() % 100) + 1;

    cout << "Piense un numero entre 1 y 100 e intente adivinar el mio!" << endl;

    // do-while porque queremos pedir al menos un intento antes de comparar
    do
    {
        cout << "Ingresa tu intento";
        cin >> intento;

        cantidadIntentos = cantidadIntentos + 1;

        if (intento < numeroSecreto)
        {
            cout << "El numero es MAYOR que tu intento" << endl;
        }
        else if (intento > numeroSecreto)
        {
            cout << "El numero es MENOR que tu intento" << endl;
        }
        else
        {
            cout << "\nFelicidades! Adivinaste el numero " << numeroSecreto << endl;
        }

    } while (intento != numeroSecreto);

    cout << "Te tomo " << cantidadIntentos << " intento(s)." << endl;

    return 0;
}