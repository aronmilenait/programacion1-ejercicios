#include <iostream>
using namespace std;

int main()
{
    float importeInicial, descuento, importeTotal;

    cout << "En este programa, vamos a calcular el descuento en base al importe de la venta. " << endl;
    
    cout << "Ingrese el importe de la venta: ";
    cin >> importeInicial;

    // Calculamos el descuento multiplicando el importe inicial por el porcentaje de descuento,  expresados en forma decimal (Ej: 0.05)
    if (importeInicial < 100)
    {
        descuento = importeInicial * 0.05;
    }
    else if (importeInicial <= 500)
    {
        descuento = importeInicial * 0.10;
    }
    else
    {
        descuento = importeInicial * 0.15;
    }

    importeTotal = importeInicial - descuento;

    cout << "El importe inicial es de: $" << importeInicial << ". El descuento aplicado es de: $" << descuento << ". El importe final es de: $" << importeTotal << " pesos." << endl;

    return 0;
}
