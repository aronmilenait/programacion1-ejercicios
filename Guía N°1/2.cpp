#include <iostream>
using namespace std;

int main() {
    int primerNumero;
    int segundoNumero;
    // Si no creamos una variable para alojar el valor correspondiente al segundo número para el intercambio, no va a ser recordado.
    int segundoNumeroTemporal;

    cout << "Ingrese el primer número: ";
    cin >> primerNumero;

    cout << "Ingrese el segundo número: ";
    cin >> segundoNumero;

    cout << "Vamos a intercambiar los valores de ambos números entre sí...";

    segundoNumeroTemporal = primerNumero;
    primerNumero = segundoNumero;
    segundoNumero = segundoNumeroTemporal;

    cout << "Después del intercambio, el primer número es: " << primerNumero << endl;
    cout << "Y el segundo número es: " << segundoNumero;

    return 0;
}