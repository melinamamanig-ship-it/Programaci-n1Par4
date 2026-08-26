// Materia: Programacion I, Paralelo 4
// Autor: Melina Mamani
// Carrera del estudiante: Ing. BIomedica
// Fecha creacion: 21/08/2026

#include <iostream>
#include <cstdlib>  // para rand()
#include <ctime>    // para time()
using namespace std;

int main()
{
    int n;
    int numero;

    int sumatotal = 0;
    int sumapar = 0;
    int sumaimpar = 0;
    int sumaprimos = 0;

    // "Sembramos" el generador de aleatorios con la hora actual
    // (sin esto, rand() siempre daria la misma secuencia de numeros)
    srand(time(0));

    cout << "Ingrese la cantidad de numeros aleatorios que desea generar";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        // Genera un numero entre 1 y 100
        numero = (rand() % 100) + 1;

        cout << "Numero generado: " << numero << endl;

        sumatotal = sumatotal + numero;

        // Par o impar
        if (numero % 2 == 0)
        {
            sumapar = sumapar + numero;
        }
        else
        {
            sumaimpar = sumaimpar + numero;
        }

        // Verificar si es primo (solo tiene como divisores 1 y el mismo)
        // El 1 no se considera primo
        bool esprimo = true;

        if (numero < 2)
        {
            esprimo = false;
        }
        else
        {
            for (int divisor = 2; divisor < numero; divisor++)
            {
                if (numero % divisor == 0)
                {
                    esprimo = false;
                    break;
                }
            }
        }

        if (esprimo)
        {
            sumaprimos = sumaprimos + numero;
        }
    }

    cout << "\n--- Resultados ---" << endl;
    cout << "Suma total: " << sumatotal << endl;
    cout << "Suma de pares: " << sumapar << endl;
    cout << "Suma de impares: " << sumaimpar << endl;
    cout << "Suma de primos: " << sumaprimos << endl;

    return 0;
}