// Materia: Programacion I, Paralelo 4
// Autor: Melina Mamani
// Carrera del estudiante: Ing. BIomedica

#include <iostream>
using namespace std;
int main(){
    int x,y,aux;
    cout<<"Digite un valor para y"; cin>>y;
    cout<<"Digite un valor para x"; cin>>x;
    /*
    x=5
    y=10
    */
    aux=x;
    x=y;
    y=aux;
    cout<<"El nuevo valor de x es:" <<x<<endl;
    cout<<"El nuevo valor de y es:" <<y<<endl;

    return 0;
}