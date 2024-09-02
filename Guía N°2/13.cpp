#include <iostream>
using namespace std;

int main()
{
    int numero1, numero2, numero3;
    int mayor, menor, medio;

    cout << "En este programa, vamos a ingresar 3 números y a ordenarlos de menor a mayor." << endl;

    cout << "Ingrese el primer número: ";
    cin >> numero1;

    cout << "Ingrese el segundo número: ";
    cin >> numero2;

    cout << "Ingrese el tercer número: ";
    cin >> numero3;
    
    if (numero1 < numero2 && numero1 < numero3)
    {
        menor = numero1;
        if (numero2 < numero3)
        {
            medio = numero2;
            mayor = numero3;
        }
        else
        {
            medio = numero3;
            mayor = numero2;
        }
    }
    else if (numero2 < numero1 && numero2 < numero3)
    {
        menor = numero2;
        if (numero1 < numero3)
        {
            medio = numero1;
            mayor = numero3;
        }
        else
        {
            medio = numero3;
            mayor = numero1;
        }
    }
    else
    {
        menor = numero3;
        if (numero1 < numero2)
        {
            medio = numero1;
            mayor = numero2;
        }
        else
        {
            medio = numero2;
            mayor = numero1;
        }
    }

    cout << "Los números ordenados de menor a mayor son: " << menor << ", " << medio << ", " << mayor << endl;

    return 0;
}
