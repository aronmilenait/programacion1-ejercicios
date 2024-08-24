#include <iostream>
using namespace std;

int main()
{
    int año;

    cout << "En este programa, vamos a determinar si un año es bisiesto o no. " << endl;

    cout << "Ingrese un año: ";
    cin >> año;

    // Un año es bisiesto si cumple con una de las siguientes condiciones:
    // 1. Es divisible por 4 y no es divisible por 100.
    // 2. Es divisible por 400.

    if ((año % 4 == 0 && año % 100 != 0) || (año % 400 == 0))
    {
        cout << "El año " << año << " es bisiesto." << endl;
    }
    else
    {
        cout << "El año " << año << " no es bisiesto." << endl;
    }

    return 0;
}