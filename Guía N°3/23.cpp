#include <iostream>
using namespace std;

int main()
{
    int numeros[10];
    int cantidadDuplas = 0;

    cout << "Ingrese diez números enteros: ";

    for (int i = 0; i < 10; i++)
    {
        cin >> numeros[i];
    }

    for (int i = 0; i < 9; i++) {
        if (numeros[i] % 2 != 0 && numeros[i + 1] % 2 != 0) {
            cantidadDuplas++;
        }
    }

    cout << "La cantidad de duplas ingresadas de números impares consecutivos es de: " << cantidadDuplas << endl;

    return 0;
}