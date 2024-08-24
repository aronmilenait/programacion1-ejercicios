#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    int primerNumero;
    int segundoNumero;

    cout << "En este programa, vamos a calcular la diferencia absoluta entre dos números." << endl;
    cout << "Ingrese el primer número: ";
    cin >> primerNumero;
    cout << "Ingrese el segundo número: ";
    cin >> segundoNumero;

    // La función abs() calcula el valor absoluto de la diferencia entre los dos números.
    // Para usarla, es necesario incluir la cabecera <cstdlib>.

    int diferenciaAbsoluta = abs(primerNumero - segundoNumero);

    cout << "La diferencia absoluta entre " << primerNumero << " y " << segundoNumero << " es de: " << diferenciaAbsoluta << endl;

    return 0;
}