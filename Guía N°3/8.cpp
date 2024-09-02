#include <iostream>
using namespace std;

int main()
{
    int numerosPositivos = 0;
    int numerosNegativos = 0;
    int ceros = 0;
    int numero;
    const int total = 10;

    cout << "Ingrese diez números: ";

    for (int i = 0; i < total; i++)
    {
        cin >> numero;

        if (numero > 0)
        {
            numerosPositivos++;
        }
        else if (numero < 0)
        {
            numerosNegativos++;
        }
        else
        {
            ceros++;
        }
    }

    float porcentajeNumerosPositivos = (numerosPositivos / static_cast<float>(total)) * 100;
    float porcentajeNumerosNegativos = (numerosNegativos / static_cast<float>(total)) * 100;
    float porcentajeCeros = (ceros / static_cast<float>(total)) * 100;

    cout << "El porcentaje de números positivos es de: " << porcentajeNumerosPositivos << "%" << endl;
    cout << "El porcentaje de números negativos es de: " << porcentajeNumerosNegativos << "%" << endl;
    cout << "El porcentaje de números cero es de: " << porcentajeCeros << "%" << endl;

    return 0;
}
