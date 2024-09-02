#include <iostream>
using namespace std;

int main()
{
    int N;

    cout << "Ingrese la cantidad de números: ";
    cin >> N;

    if (N <= 0)
    {
        cout << "La cantidad de números debe tener un valor positivo. Vuelve a intentarlo." << endl;
        return 1;
    }

    int numero;
    int numerosPositivos = 0;

    cout << "Ingrese " << N << " números:" << endl;

    for (int i = 0; i < N; i++)
    {
        cin >> numero;

        if (numero > 0)
        {
            numerosPositivos++;
        }
    }

    cout << "La cantidad de números positivos es: " << numerosPositivos << endl;

    return 0;
}