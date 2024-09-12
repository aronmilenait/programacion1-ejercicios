#include <iostream>
using namespace std;

bool esPrimo(int numero)
{
    if (numero < 2)
    {
        return false;
    }

    for (int i = 2; i * i <= numero; i++)
    {
        if (numero % i == 0)
        {
            return false;
        }
    }

    return true;
}

int main()
{
    cout << "Los números primos entre 1 y 10.000 son: " << endl;

    for (int i = 0; i <= 1000; i++)
    {
        if (esPrimo(i))
        {
            cout << i << endl;
        }
    }

    return 0;
}