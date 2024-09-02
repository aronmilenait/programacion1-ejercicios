#include <iostream>
using namespace std;

int main()
{
    int horasTrabajadas;
    int valorHora;
    int sueldo;

    // El usuario ingresa los datos.
    cout << "Ingrese las horas trabajadas: ";
    cin >> horasTrabajadas;
    cout << "Ingrese el valor de la hora: ";
    cin >> valorHora;

    // Multiplicando las horas trabajadas por el valor hora, obtenemos el sueldo.
    sueldo = (horasTrabajadas * valorHora);

    cout << "Su sueldo es: " << sueldo << endl;

    return 0;
}