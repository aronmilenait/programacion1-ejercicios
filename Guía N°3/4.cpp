#include <iostream>
using namespace std;

int main()
{
    int numeroPositivo;

    cout << "Ingrese un número positivo." << endl;
    cin >> numeroPositivo;

    if (numeroPositivo > 0)
    {
        for (int i = 1; i <= numeroPositivo; i++)
        {
            cout << i << endl;
        }
    }
    else
    {
        cout << "El número que ingresaste no es positivo." << endl;
    }

    return 0;
}