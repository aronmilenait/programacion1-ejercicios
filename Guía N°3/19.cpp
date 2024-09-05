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

    cout << "La cantidad de divisores de " << numero << " es " << cantidadDivisores << endl;

    return 0;
}