// Materia: Programación I, Paralelo 4
// Autor: Melina Mamani
// Fecha creación: 30/10/2026

#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct Contacto
{
    string nombreCompleto;
    int telefono;
};

void ingresarContactos(vector<Contacto> &contactos, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "\nCONTACTO " << (i + 1) << ": " << endl;
        cin.ignore();

        cout << "Nombre completo: ";
        getline(cin, contactos[i].nombreCompleto);

        cout << "Telefono: ";
        cin >> contactos[i].telefono;
    }
}

// .find() busca un texto DENTRO de otro string y devuelve la posicion donde empieza,
// o string::npos si no lo encuentra (asi detectamos coincidencias parciales, no solo exactas)
void buscarContacto(vector<Contacto> contactos, string busqueda)
{
    bool seEncontroAlguno = false;

    cout << "\nResultados para \"" << busqueda << "\":" << endl;

    for (int i = 0; i < contactos.size(); i++)
    {
        if (contactos[i].nombreCompleto.find(busqueda) != string::npos)
        {
            cout << "- " << contactos[i].nombreCompleto << " (" << contactos[i].telefono << ")" << endl;
            seEncontroAlguno = true;
        }
    }

    if (!seEncontroAlguno)
    {
        cout << "No se encontraron contactos." << endl;
    }
}

int main()
{
    int n;
    string textoBuscado;

    cout << "Ingrese la cantidad de contactos: ";
    cin >> n;

    vector<Contacto> contactos(n);

    ingresarContactos(contactos, n);

    cout << "\nIngrese el texto a buscar: ";
    cin.ignore();
    getline(cin, textoBuscado);

    buscarContacto(contactos, textoBuscado);

    return 0;
}