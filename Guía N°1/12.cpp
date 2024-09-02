#include <iostream>
using namespace std;

int main() {
    int cantidadDeHuevos;
    int cajas;
    int huevosSueltos;
    int precioCaja = 1000;
    int precioHuevoSuelto = 120;
    int importeTotal;

    cout << "Ingrese la cantidad de huevos que va a comprar: ";
    cin >> cantidadDeHuevos;

    cajas = cantidadDeHuevos / 12;
    huevosSueltos = cantidadDeHuevos % 12;

    importeTotal = (cajas * precioCaja) + (huevosSueltos * precioHuevoSuelto);

    cout << "El importe total a pagar es: $" << importeTotal << " pesos." << endl;

    return 0;
}