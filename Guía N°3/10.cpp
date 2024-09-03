#include <iostream>
using namespace std;

int main()
{
    int numero;
    int maximo;
    int posicionNumMaximo = 0;

    cout << "Ingrese diez números: ";

    cin >> numero;
    maximo = numero;
    posicionNumMaximo = 1;

    for (int i = 1; i < 10; i++)
    {
        cin >> numero;

        if (numero > maximo)
        {
            maximo = numero;
            posicionNumMaximo = i + 1;
        }
    }

    cout << "El número máximo es: " << maximo << endl;
    cout << "La posición del número máximo es: " << posicionNumMaximo << endl;

    return 0;
}