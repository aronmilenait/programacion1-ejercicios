#include <iostream>
using namespace std;

int main()
{
    int numero1, numero2, numero3, numeroMedio;

    cout << "En este programa, vamos a calcular cuál de los 3 números es el de valor medio." << endl;

    cout << "Ingrese el primer número: ";
    cin >> numero1;

    cout << "Ingrese el segundo número: ";
    cin >> numero2;

    cout << "Ingrese el tercer número: ";
    cin >> numero3;

    if ((numero1 > numero2 && numero1 < numero3) || (numero1 > numero3 && numero1 < numero2))
    {
        numeroMedio = numero1;
    }
    else if ((numero2 > numero1 && numero2 < numero3) || (numero2 > numero3 && numero2 < numero1))
    {
        numeroMedio = numero2;
    }
    else
    {
        numeroMedio = numero3;
    }

    cout << "El número de valor medio es: " << numeroMedio << endl;

    return 0;
}
