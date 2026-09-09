// Materia: Programacion I, Paralelo 4
// Autor: Melina Mamani
// Carrera del estudiante: Ing. BIomedica

#include <iostream>
using namespace std;
int main(){
    float practica, teorica, participacion, notafinal = 0;
    cout << "Digite una nota de practica"; cin>>practica;
    cout << "Digite la nota teorica"; cin>>teorica;
    cout <<"Digite la nota de participacion"; cin>>participacion;

    practica*=0.30;
    teorica*=0.60;
    participacion*=0.10;
    notafinal=practica+teorica+participacion;
    cout << "La nota final es:" <<notafinal;
    return 0;
}