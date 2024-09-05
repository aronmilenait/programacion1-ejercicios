#include <iostream>
#include <limits>
using namespace std;

int main()
{
    int numero;
    int maximoPar = std::numeric_limits<int>::min();
    bool numeroPar = false;

    cout << "Ingrese diez números: ";

    for (int i = 0; i < 10; i++)
    {
        cin >> numero;
        if (numero % 2 == 0)
        {
            if (numero > maximoPar)
            {
                maximoPar = numero;
            }
            numeroPar = true;
        }
    }

    if (numeroPar)
    {
        cout << "El máximo número par es: " << maximoPar << endl;
    }
    else
    {
        cout << "No se encontraron números pares." << endl;
    }

    return 0;
}