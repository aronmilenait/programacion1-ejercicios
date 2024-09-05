#include <iostream>
using namespace std;

int main()
{
    int numero;

    cout << "Ingrese un número entero: ";

    cin >> numero;

    cout << numero << " es divisible por: " << endl;

    for (int i = 1; i <= numero; i++)
    {
        if (numero % i == 0)
        {
            cout << i << " ";
        }
    }

    return 0;
}