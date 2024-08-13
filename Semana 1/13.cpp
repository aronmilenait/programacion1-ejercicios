#include <iostream>
using namespace std;

int main() {
    int importeRetiro;
    int billetesDeMil, billetesDeQuinientos, billetesDeDoscientos, billetesDeCien;

    cout << "Ingrese el importe a retirar: ";
    cin >> importeRetiro;

    // Se va dividiendo el importe de retiro actualizado hasta llegar al billete de 100.
    billetesDeMil = importeRetiro / 1000;
    importeRetiro = importeRetiro % 1000;

    billetesDeQuinientos = importeRetiro / 500;
    importeRetiro = importeRetiro % 500;

    billetesDeDoscientos = importeRetiro / 200;
    importeRetiro = importeRetiro % 200;

    billetesDeCien = importeRetiro / 100;
    importeRetiro = importeRetiro % 100;

    cout << "El cajero automático entrega: " << billetesDeMil << " billetes de $1000, " << billetesDeQuinientos << " billetes de $500, " << billetesDeDoscientos << " billetes de $200, y " << billetesDeCien << " billetes de $100" << endl;
    
    return 0;
}