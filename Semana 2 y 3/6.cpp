#include <iostream>
using namespace std;

int main()
{
    int primerNumero, segundoNumero, tercerNumero;

    cout << "En este programa, vamos a calcular si tres números son iguales entre sí." << endl;

    cout << "Ingrese el primer número: ";
    cin >> primerNumero;

    cout << "Ingrese el segundo número: ";
    cin >> segundoNumero;

    cout << "Ingrese el tercer número: ";
    cin >> tercerNumero;

    if (primerNumero == segundoNumero && segundoNumero == tercerNumero) {
        cout << "Los tres números son iguales." << endl;
    }

    return 0;
}