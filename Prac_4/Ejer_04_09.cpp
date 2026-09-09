// Materia: Programacion I, Paralelo 4
// Autor: Melina Mamani
// Carrera del estudiante: Ing. Biomedica
// Fecha creacion: 28/08/2026

#include <iostream>
using namespace std;

// Verifica que una nota este en el rango valido [0, 100]
bool esNotaValida(float nota)
{
    if (nota >= 0 && nota <= 100)
    {
        return true;
    }
    else
    {
        return false;
    }
}

// El estudiante esta habilitado para dar el examen final
// solo si las 3 notas parciales son mayores o iguales a 60
bool estaHabilitado(float p1, float p2, float p3)
{
    if (p1 >= 60 && p2 >= 60 && p3 >= 60)
    {
        return true;
    }
    else
    {
        return false;
    }
}

// La nota final es 50% el promedio de parciales + 50% el examen
float calcularNotaFinal(float p1, float p2, float p3, float examen)
{
    float promedioParciales;
    float notaFinal;

    promedioParciales = (p1 + p2 + p3) / 3;
    notaFinal = (promedioParciales * 0.5) + (examen * 0.5);

    return notaFinal;
}

// Para aprobar la materia, la nota final debe ser mayor o igual a 51
bool aprobo(float notaFinal)
{
    if (notaFinal >= 51)
    {
        return true;
    }
    else
    {
        return false;
    }
}

// Pide una nota por teclado y no deja continuar hasta que sea valida (0-100)
float pedirNotaValida(string mensaje)
{
    float nota;

    cout << mensaje;
    cin >> nota;

    while (esNotaValida(nota))
    {
        cout << "Nota invalida. Debe estar entre 0 y 100. Ingrese de nuevo: ";
        cin >> nota;
    }

    return nota;
}

int main()
{
    int n;
    int cantidadAprobados = 0;
    int cantidadReprobados = 0;
    float sumaNotasFinales = 0;

    cout << "Ingrese la cantidad de estudiantes: ";
    cin >> n;

    for (int i = 1; i <= n; i++)
        cout << "\n--- Estudiante " << i << " ---" << endl;
        float parcial1 = pedirNotaValida("Ingrese la nota parcial 1: ");
        float parcial2 = pedirNotaValida("Ingrese la nota parcial 2: ");
        float parcial3 = pedirNotaValida("Ingrese la nota parcial 3: ");

        cout << "Parcial 1: " << parcial1 << endl;
        cout << "Parcial 2: " << parcial2 << endl;
        cout << "Parcial 3: " << parcial3 << endl;

        float examenFinal = 0;
        float notaFinal;

        // Si no esta habilitado (un parcial < 60), esta reprobado
        // y no puede rendir el examen final
        if (!estaHabilitado(parcial1, parcial2, parcial3))
        {
            cout << "El estudiante NO esta habilitado para el examen final." << endl;
            notaFinal = 0;
            cout << "Nota final: " << notaFinal << " -> REPROBADO" << endl;

            cantidadReprobados = cantidadReprobados + 1;
        }
        else
        {
            examenFinal = pedirNotaValida("Ingrese la nota del examen final: ");
            cout << "Examen final: " << examenFinal << endl;
            notaFinal = calcularNotaFinal(parcial1, parcial2, parcial3, examenFinal);
            cout << "Nota final: " << notaFinal;

            if (aprobo(notaFinal))
            {
                cout << " -> APROBADO" << endl;
                cantidadAprobados = cantidadAprobados + 1;
            }
            else
            {
                cout << " -> REPROBADO" << endl;
                cantidadReprobados = cantidadReprobados + 1;
            }
        }
        sumaNotasFinales = sumaNotasFinales + notaFinal;
    }

    // Calculamos los porcentajes y el promedio general
    float porcentajeAprobados = (float(cantidadAprobados) / n) * 100;
    float porcentajeReprobados = (float(cantidadReprobados) / n) * 100;
    float promedioGeneral = sumaNotasFinales / n;
    cout << "\n--- Reporte final ---" << endl;
    cout << "Porcentaje de aprobados: " << porcentajeAprobados << "%" << endl;
    cout << "Porcentaje de reprobados: " << porcentajeReprobados << "%" << endl;
    cout << "Promedio de notas finales: " << promedioGeneral << endl;

    return 0;
}