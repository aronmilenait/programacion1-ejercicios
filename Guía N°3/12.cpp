#include <iostream>
#include <limits>

using namespace std;

int main()
{
    int numero;
    int maximoNegativo = std::numeric_limits<int>::min();
    int minimoPositivo = std::numeric_limits<int>::max();

    cout << "Ingrese diez números: ";

    for (int i = 0; i < 10; i++)
    {
        cin >> numero;

        if (numero < 0 && numero > maximoNegativo)
        {
            maximoNegativo = numero;
        }

        if (numero > 0 && numero < minimoPositivo)
        {
            minimoPositivo = numero;
        }
    }

    if (maximoNegativo == std::numeric_limits<int>::min())
    {
        cout << "No se ingresaron números negativos." << endl;
    }
    else
    {
        cout << "El máximo número negativo es: " << maximoNegativo << endl;
    }

    if (minimoPositivo == std::numeric_limits<int>::max())
    {
        cout << "No se ingresaron números positivos." << endl;
    }
    else
    {
        cout << "El mínimo número positivo es: " << minimoPositivo << endl;
    }

    return 0;
}
