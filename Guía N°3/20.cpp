#include <iostream>
using namespace std;

int main()
{
    int numero;
    int cantidadDivisores = 0;

    cout << "Ingrese un número entero: ";

    cin >> numero;

    for (int i = 1; i <= numero; i++)
    {
        if (numero % i == 0)
        {
            cantidadDivisores++;
        }
    }

    if (cantidadDivisores == 2)
    {
        cout << "El número es primo." << endl;
    }
    else
    {
        cout << "El número no es primo." << endl;
    }

    return 0;
}