#include <iostream>
using namespace std;

bool esPrimo(int n)
{
    if (n < 2)
    {
        return false;
    }

    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

int main()
{
    int numeros[7];
    int primerPar = -1, ubicacionPar = -1;
    int ultimoPrimo = -1, ubicacionPrimo = -1;

    cout << "Ingrese 7 números enteros: ";

    for (int i = 0; i < 7; i++)
    {
        cin >> numeros[i];
    }

    for (int i = 0; i < 7; i++)
    {
        if (numeros[i] % 2 == 0 && primerPar == -1)
        {
            primerPar = numeros[i];
            ubicacionPar = i + 1;
        }

        if (esPrimo(numeros[i]))
        {
            ultimoPrimo = numeros[i];
            ubicacionPrimo = i + 1;
        }
    }

    if (primerPar != -1)
    {
        cout << "El primer número par es: " << primerPar << " y su ubicación es: " << ubicacionPar << endl;
    }
    else
    {
        cout << "No se encontró ningún número par." << endl;
    }

    if (ultimoPrimo != -1)
    {
        cout << "El último primo es: " << ultimoPrimo << " y su ubicación es: " << ubicacionPrimo << endl;
    }
    else
    {
        cout << "No se encontró ningún número primo." << endl;
    }

    return 0;
}