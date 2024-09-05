#include <iostream>
using namespace std;

int main()
{
    int numeros[8];
    bool conjuntoOrdenado = true;

    cout << "Ingrese ocho números: ";

    for (int i = 0; i < 8; i++)
    {
        cin >> numeros[i];
    }

    for (int i = 1; i < 8; i++)
    {
        if (numeros[i] < numeros[i - 1])
        {
            conjuntoOrdenado = false;
            break;
        }
    }

    if (conjuntoOrdenado)
    {
        cout << "Conjunto ordenado." << endl;
    }
    else
    {
        cout << "Conjunto desordenado." << endl;
    }

    return 0;
}
