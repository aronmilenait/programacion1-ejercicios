#include <iostream>
using namespace std;

int main()
{
    int cantidadDeMinutos;
    int cantidadDeDias;
    int horasRestantes;
    int minutosRestantes;

    cout << "Ingrese la cantidad de minutos para calcular su equivalencia en días, horas y minutos: ";
    cin >> cantidadDeMinutos;

    // En un día hay 1440 minutos.
    cantidadDeDias = cantidadDeMinutos / 1440;
    horasRestantes = (cantidadDeMinutos % 1440) / 60;
    minutosRestantes = (cantidadDeMinutos % 1440) % 60;

    cout << cantidadDeMinutos << " minutos equivalen a " << cantidadDeDias << " días, " << horasRestantes << " horas y " << minutosRestantes << " minutos." << endl;

    return 0;
}