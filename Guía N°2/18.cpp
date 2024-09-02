#include <iostream>
using namespace std;

int main()
{
    int consumo;
    int totalPagar;

    cout << "Ingrese el consumo en kilovatios (kW): " << endl;
    cin >> consumo;

    if (consumo <= 100)
    {
        totalPagar = consumo * 10;
    }
    else if (consumo <= 200)
    {
        totalPagar = 100 * 10 + (consumo - 100) * 12;
    }
    else
    {
        totalPagar = 100 * 10 + 100 * 12 + (consumo - 200) * 15;
    }

    cout << "El total a pagar es: $" << totalPagar << endl;

    return 0;
}
