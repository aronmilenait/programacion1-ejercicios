#include <iostream>
using namespace std;

int main()
{
    int numero1, numero2;

    cout << "Ingrese el primer número: ";
    cin >> numero1;
    cout << "Ingrese el segundo número: ";
    cin >> numero2;

    int menor, mayor;

    if (numero1 < numero2)
    {
        menor = numero1;
        mayor = numero2;
    }
    else
    {
        menor = numero2;
        mayor = numero1;
    }

    cout << "Números entre " << menor << " y " << mayor << ":" << endl;

    for (int i = menor + 1; i < mayor; i++)
    {
        cout << i << endl;
    }

    return 0;
}