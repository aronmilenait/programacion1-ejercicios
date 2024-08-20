#include <iostream>
using namespace std;

int main()
{
    int numero1, numero2, numero3, numero4, numero5, maximo, minimo;

    cout << "En este programa, vamos a calcular el máximo y el mínimo de 5 números." << endl;

    cout << "Ingrese el primer número: ";
    cin >> numero1;

    maximo = numero1;
    minimo = numero1;

    cout << "Ingrese el segundo número: ";
    cin >> numero2;

    if (numero2 > maximo)
    {
        maximo = numero2;
    }
    else if (numero2 < minimo)
    {
        minimo = numero2;
    }

    cout << "Ingrese el tercer número: ";
    cin >> numero3;

    if (numero3 > maximo)
    {
        maximo = numero3;
    }
    else if (numero3 < minimo)
    {
        minimo = numero3;
    }

    cout << "Ingrese el cuarto número: ";
    cin >> numero4;

    if (numero4 > maximo)
    {
        maximo = numero4;
    }
    else if (numero4 < minimo)
    {
        minimo = numero4;
    }

    cout << "Ingrese el quinto número: ";
    cin >> numero5;

    if (numero5 > maximo)
    {
        maximo = numero5;
    }
    else if (numero5 < minimo)
    {
        minimo = numero5;
    }

    cout << "El número máximo es: " << maximo << endl;
    cout << "El número mínimo es: " << minimo << endl;

    return 0;
}