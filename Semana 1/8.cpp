#include <iostream>
using namespace std;

int main() {
    float importeSinDescuento;
    float importeConDescuento;
    float porcentajeDeDescuento;

    cout << "Ingrese el importe sin descuento: ";
    cin >> importeSinDescuento;
    cout << "Ingrese el importe con descuento: ";
    cin >> importeConDescuento;

    porcentajeDeDescuento = ((importeSinDescuento - importeConDescuento) / importeSinDescuento) * 100;

    cout << "El porcentaje de descuento es de: " << porcentajeDeDescuento << "%" << endl;

    return 0;
}