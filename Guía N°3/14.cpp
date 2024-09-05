#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> impares;
    int numero;

    cout << "Ingrese siete números: ";

    for (int i = 0; i < 7; i++)
    {
        cin >> numero;

        if (numero % 2 != 0)
        {
            impares.push_back(numero);
        }
    }

    if (impares.size() >= 1)
    {
        cout << "El primer número impar es: " << impares[0] << endl;
    }
    else
    {
        cout << "No se encontró el primer número impar." << endl;
    }

    if (impares.size() >= 2)
    {
        cout << "El segundo número impar es: " << impares[1] << endl;
    }
    else
    {
        cout << "No se encontró el segundo número impar." << endl;
    }

    if (impares.size() >= 2)
    {
        cout << "El anteúltimo número impar es: " << impares[impares.size() - 2] << endl;
    }
    else
    {
        cout << "No se encontró el anteúltimo número impar." << endl;
    }

    if (impares.size() >= 1)
    {
        cout << "El último número impar es: " << impares[impares.size() - 1] << endl;
    }
    else
    {
        cout << "No se encontró el último número impar." << endl;
    }

    return 0;
}
