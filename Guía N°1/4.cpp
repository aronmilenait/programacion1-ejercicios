#include <iostream>
using namespace std;

int main() {
    int totalDeAsientos;
    int pasajesComprados;
    int porcentajeDeAsientosOcupados;

    totalDeAsientos = 200;

    cout << "El total de asientos es de: " << totalDeAsientos << endl;
    cout << "Ingrese la cantidad de pasajes que fueron comprados: ";
    cin >> pasajesComprados;

    porcentajeDeAsientosOcupados = (pasajesComprados * 100) / totalDeAsientos;

    cout << "El porcentaje de asientos ocupados es de: " << porcentajeDeAsientosOcupados << "%" << endl;

    return 0;
}