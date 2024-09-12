#include <iostream>
using namespace std;

int main() {
    const int empleados = 10;
    int legajos[empleados];
    int sueldos[empleados];
    int legajoMayorSueldo = 0;
    int mayorSueldo = 0;

    for (int i = 0; i < empleados; i++) {
        cout << "Ingrese el legajo del empleado " << i + 1 << ":";
        cin >> legajos[i];

        cout << "Ingrese el sueldo del empleado " << i + 1 << ":";
        cin >> sueldos[i];

        if (sueldos[i] > mayorSueldo) {
            mayorSueldo = sueldos[i];
            legajoMayorSueldo = legajos[i];
        }
    }

    cout << "El legajo con mayor sueldo es: " << legajoMayorSueldo << " y el sueldo es de: $" << mayorSueldo << " pesos." << endl;

    return 0;
}