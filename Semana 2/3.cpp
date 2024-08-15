#include <iostream>
using namespace std;

int main() {
    int numero;

    cout << "En este programa, vamos a calcular si un número es par o impar." << endl;
    cout << "Ingrese un número: ";
    cin >> numero;

    if (numero % 2 == 0) {
        cout << "El número es par." << endl;
    } else {
        cout << "El número es impar." << endl;
    }

    return 0;
}