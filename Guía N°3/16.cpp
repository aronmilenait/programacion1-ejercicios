#include <iostream>
#include <limits>
using namespace std;

int main()
{
    int numero;
    int maximo = std::numeric_limits<int>::min();
    int segundoMaximo = std::numeric_limits<int>::min();

    cout << "Ingrese cinco números: ";

    for (int i = 0; i < 5; i++)
    {
        cin >> numero;

        if (numero > maximo)
        {
            segundoMaximo = maximo;
            maximo = numero;
        }
        else if (numero > segundoMaximo)
        {
            segundoMaximo = numero;
        }
    }

    cout << "El número máximo es: " << maximo << endl;
    cout << "El segundo máximo es: " << segundoMaximo << endl;

    return 0;
}