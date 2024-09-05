#include <iostream>
using namespace std;

int main()
{
    int numero;
    int sumaDivisores = 0;

    cout << "Ingrese un número entero: ";
    cin >> numero;

    cout << "Los divisores propios del número son: ";

    for (int i = 1; i < numero; i++)
    {
        if (numero % i == 0)
        {
            sumaDivisores += i;
            cout << i << " ";
        }
    }

    cout << endl;

    if (sumaDivisores == numero)
    {
        cout << numero << " es un número perfecto." << endl;
    }
    else
    {
        cout << numero << " no es un número perfecto." << endl;
    }

    return 0;
}
