#include <iostream>
using namespace std;

int main()
{
    int numero, maximo, minimo;

    cout << "Ingrese diez números: ";
    cin >> numero;
    maximo = numero;
    minimo = numero;

    for (int i = 1; i < 10; i++)
    {
        cin >> numero;

        if (numero > maximo)
        {
            maximo = numero;
        }

        if (numero < minimo)
        {
            minimo = numero;
        }
    }

    cout << "El número mínimo es: " << minimo << endl;
    cout << "El número máximo es: " << maximo << endl;

    return 0;
}
