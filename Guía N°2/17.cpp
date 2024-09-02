#include <iostream>
using namespace std;

int main()
{
    int numero1, numero2, numero3, numero4;

    cout << "En este programa, vamos a verificar si un conjunto de cuatro números está ordenado de forma creciente." << endl;

    cout << "Ingrese el primer número: ";
    cin >> numero1;

    cout << "Ingrese el segundo número: ";
    cin >> numero2;

    cout << "Ingrese el tercer número: ";
    cin >> numero3;

    cout << "Ingrese el cuarto número: ";
    cin >> numero4;

    if (numero1 <= numero2 && numero2 <= numero3 && numero3 <= numero4)
    {
        cout << "Es un conjunto ordenado." << endl;
    }
    else
    {
        cout << "Es un conjunto desordenado." << endl;
    }

    return 0;
}