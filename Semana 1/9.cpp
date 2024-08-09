#include <iostream>
using namespace std;

int main() {
    int cantidadDeMinutos;
    int equivalenciaEnHoras;
    int minutosRestantes;

    cout << "Ingrese la cantidad de minutos para calcular su equivalencia en horas: ";
    cin >> cantidadDeMinutos;

    equivalenciaEnHoras = cantidadDeMinutos / 60;
    minutosRestantes = cantidadDeMinutos % 60;

    cout << cantidadDeMinutos << " minutos equivalen a " << equivalenciaEnHoras << " horas" << " y " << minutosRestantes << " minutos." << endl;

    return 0;
}