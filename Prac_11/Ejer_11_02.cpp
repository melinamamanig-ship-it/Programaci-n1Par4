// Materia: Programación I, Paralelo 4
// Autor: Melina Mamani

// Fecha creación: 30/10/2026

#include <iostream>
#include <string>
using namespace std;

struct Cuenta
{
    string titular;
    int numeroCuenta;
    double saldo;
};

// Recibe la cuenta por referencia (&) para poder modificar su saldo
void depositar(Cuenta &cuenta, double monto)
{
    cuenta.saldo = cuenta.saldo + monto;
    cout << "Deposito de " << monto << " realizado. Nuevo saldo: " << cuenta.saldo << endl;
}

void retirar(Cuenta &cuenta, double monto)
{
    // Validamos que haya saldo suficiente ANTES de restar
    if (monto > cuenta.saldo)
    {
        cout << "Saldo insuficiente. No se pudo retirar " << monto << endl;
    }
    else
    {
        cuenta.saldo = cuenta.saldo - monto;
        cout << "Retiro de " << monto << " realizado. Nuevo saldo: " << cuenta.saldo << endl;
    }
}

int main()
{
    Cuenta cuenta;

    cuenta.titular = "Melina Mamani";
    cuenta.numeroCuenta = 1023456;
    cuenta.saldo = 500.0;

    cout << "Cuenta inicial:" << endl;
    cout << "Titular: " << cuenta.titular << ", N. Cuenta: " << cuenta.numeroCuenta << ", Saldo: " << cuenta.saldo << endl;

    cout << "\n--- Operaciones ---" << endl;
    depositar(cuenta, 200.0);
    retirar(cuenta, 150.0);
    retirar(cuenta, 10000.0);   // esta deberia fallar por saldo insuficiente

    cout << "\nSaldo final: " << cuenta.saldo << endl;

    return 0;
}