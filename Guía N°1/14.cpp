#include <iostream>
using namespace std;

int main() {
    float importeCompra, descuento, importeDescuento, importeTotal;

    cout << "Ingrese el importe de la compra: ";
    cin >> importeCompra;

    cout << "Ingrese el porcentaje de descuento a aplicar: ";
    cin >> descuento;

    importeDescuento = (importeCompra * descuento) / 100;
    importeTotal = importeCompra - importeDescuento;

    cout << "El importe total, con el descuento aplicado, es de $" << importeTotal << " pesos." << endl;

    return 0;
}