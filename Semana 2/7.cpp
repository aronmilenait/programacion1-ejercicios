#include <iostream>
using namespace std;

int main()
{
    int primerNumero, segundoNumero, tercerNumero;

    cout << "En este programa, vamos a calcular si tres números son diferentes entre sí." << endl;

    cout << "Ingrese el primer número: ";
    cin >> primerNumero;

    cout << "Ingrese el segundo número: ";
    cin >> segundoNumero;

    cout << "Ingrese el tercer número: ";
    cin >> tercerNumero;

    if (primerNumero != segundoNumero && segundoNumero != tercerNumero && primerNumero != tercerNumero)
    {
        cout << "Los tres números son diferentes." << endl;
    }

    return 0;
}