#include <iostream>
using namespace std;

int main() {
    float importeInicial;
    int descuento;
    float importeConDescuento;

    cout << "Ingrese el importe inicial de la venta: ";
    cin >> importeInicial;
    cout << "Ingrese el porcentaje de descuento: ";
    cin >> descuento;

    importeConDescuento = importeInicial - (importeInicial * descuento / 100);

    cout << "El importe final, con el descuento aplicado, es de: $ " << importeConDescuento << endl;

    return 0;
}