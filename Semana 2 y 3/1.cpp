#include <iostream>
using namespace std;

int main() {
    int numero;

    cout << "Ingrese un número: ";
    cin >> numero;

    if (numero == 0) {
        cout << "El número que ingresaste es cero." << endl;;
    } else if (numero > 0) {
        cout << "El número que ingresaste es positivo." << endl; 
    } else {
        cout << "El número que ingresaste es negativo." << endl;
    }

    return 0;
}