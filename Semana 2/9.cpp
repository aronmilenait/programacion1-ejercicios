#include <iostream>
using namespace std;

int main() {
    int primerNumero, segundoNumero, tercerNumero;

    cout << "En este programa, vamos a encontrar el número máximo entre tres números." << endl;

     cout << "Ingrese el primer número: ";
    cin >> primerNumero;

    cout << "Ingrese el segundo número: ";
    cin >> segundoNumero;

    cout << "Ingrese el tercer número: ";
    cin >> tercerNumero;

    if (primerNumero >= segundoNumero && primerNumero >= tercerNumero) {
        cout << "El número máximo es: " << primerNumero << endl;
    } else if (segundoNumero >= primerNumero && segundoNumero >= tercerNumero) {
        cout << "El número máximo es: " << segundoNumero << endl;
    } else {
        cout << "El número máximo es: " << tercerNumero << endl;
    }

    return 0;
}