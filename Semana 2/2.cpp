#include <iostream>
using namespace std;

int main()
{
    int primerNumero;
    int segundoNumero;

    cout << "En este programa, vamos a calcular si dos números son múltiplos." << endl;
    cout << "Ingrese un número: ";
    cin >> primerNumero;
    cout << "Ingrese otro número: ";
    cin >> segundoNumero;

    if (segundoNumero == 0)
    {
        cout << "No podemos dividir a ningún número por cero. No tiene sentido.";
    }
    else if (primerNumero % segundoNumero == 0)
    {
        cout << primerNumero << " es múltiplo de " << segundoNumero << "." << endl;
    }
    else
    {
        cout << primerNumero << " no es múltiplo de " << segundoNumero << "." << endl;
    }

    return 0;
}