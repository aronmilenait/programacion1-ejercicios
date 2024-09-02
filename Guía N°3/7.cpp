#include <iostream>
using namespace std;

int main()
{
    int numerosPositivos = 0;
    int numerosNegativos = 0;
    int ceros = 0;
    int numero;

    cout << "Ingrese diez números: ";

    for (int i = 0; i < 10; i++)
    {
        cin >> numero;

        if (numero > 0)
        {
            numerosPositivos++;
        }
        else if (numero < 0)
        {
            numerosNegativos++;
        }
        else
        {
            ceros++;
        }
    }

    cout << "La cantidad de números positivos es de: " << numerosPositivos << endl;
    cout << "La cantidad de números negativos es de: " << numerosNegativos << endl;
    cout << "La cantidad de números ceros es de: " << ceros << endl;

    return 0;
}