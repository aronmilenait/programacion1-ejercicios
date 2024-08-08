#include <iostream>
using namespace std;

int main() {
    int sueldoBase;
    int bonoPorAutoVendido;
    int autosVendidos;
    int sueldoTotal;

    sueldoBase = 5000;
    bonoPorAutoVendido = 700;

    cout << "Ingrese la cantidad de autos que vendió el empleado: ";
    cin >> autosVendidos;

    sueldoTotal = sueldoBase + (bonoPorAutoVendido * autosVendidos);

    cout << "El sueldo total es de " << sueldoTotal << " pesos";

    return 0;
}
