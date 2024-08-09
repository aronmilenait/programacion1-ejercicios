#include <iostream>
using namespace std;

int main() {
    int semana1;
    int semana2;
    int semana3;
    int semana4;

    int promedioRecaudacion;
    int totalRecaudacion;

    int porcentajeRecaudacionSemana1;
    int porcentajeRecaudacionSemana2;
    int porcentajeRecaudacionSemana3;
    int porcentajeRecaudacionSemana4;

    cout << "Ingrese el monto recaudado durante la primera semana: ";
    cin >> semana1;
    cout << "Ingrese el monto recaudado durante la segunda semana: ";
    cin >> semana2;
    cout << "Ingrese el monto recaudado durante la tercera semana: ";
    cin >> semana3;
    cout << "Ingrese el monto recaudado durante la cuarta semana: ";
    cin >> semana4;

    totalRecaudacion = (semana1 + semana2 + semana3 + semana4);
    promedioRecaudacion = (totalRecaudacion / 4);

    porcentajeRecaudacionSemana1 = (semana1 * 100) / totalRecaudacion;
    porcentajeRecaudacionSemana2 = (semana2 * 100) / totalRecaudacion;
    porcentajeRecaudacionSemana3 = (semana3 * 100) / totalRecaudacion;
    porcentajeRecaudacionSemana4 = (semana4 * 100) / totalRecaudacion;

    cout << "El porcentaje de recaudación de la primera es de: " << porcentajeRecaudacionSemana1 << "%" << endl;
    cout << "El porcentaje de recaudación de la segunda semana es de: " << porcentajeRecaudacionSemana2 << "%" << endl;
    cout << "El porcentaje de recaudación de la tercera semana es de: " << porcentajeRecaudacionSemana3 << "%" << endl;
    cout << "El porcentaje de recaudación de la cuarta semana es de: " << porcentajeRecaudacionSemana4 << "%" << endl;

    return 0;
}