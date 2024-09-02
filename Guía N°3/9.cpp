#include <iostream>
using namespace std;

int main()
{
    int numero;
    int maximo;

    cout << "Ingrese diez números: ";

    cin >> numero;
    maximo = numero;

    for (int i = 1; i < 10; i++)
    {
        cin >> numero;

        if (numero > maximo)
        {
            maximo = numero;
        }
    }

    cout << "El número máximo es: " << maximo << endl;

    return 0;
}