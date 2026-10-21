// Materia: Programación I, Paralelo 4
// Autor: Melina Mamani
// Fecha creación: 
// Número de ejercicio: 9

#include <iostream>
#include <string>
using namespace std;

void BuscarContactos(string contactos[10], string prefijo);

int main() {
    string contactos[10] = {"Marcos", "Maria", "Marta", "Mariano", "Juan", "Julia", "Carlos", "Carla", "Mario", "Pedro"};
    string prefijo;
    do
    {
        cout << "Ingrese un prefijo de 3 letras: ";
        cin >> prefijo;
    } while (prefijo.length() != 3);
    BuscarContactos(contactos, prefijo);
    return 0;
}

// Funcion que imprime los contactos que empiezan con el prefijo
void BuscarContactos(string contactos[10], string prefijo)
{
    bool encontrado = false;
    cout << "Contactos que empiezan con " << prefijo << ":\n";
    for (int i = 0; i < 10; i++)
    {
        if (contactos[i].substr(0, 3) == prefijo)
        {
            cout << "- " << contactos[i] << "\n";
            encontrado = true;
        }
    }
    if (!encontrado)
        cout << "No se encontro ningun contacto\n";
}
