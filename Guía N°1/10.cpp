#include <iostream>
using namespace std;

int main() {
    int cantidadDeHoras;
    int equivalenciaEnDias;
    int horasRestantes;

    cout << "Ingrese la cantidad de horas para calcular su equivalencia en días: ";
    cin >> cantidadDeHoras;

    equivalenciaEnDias = cantidadDeHoras / 24;
    horasRestantes = cantidadDeHoras % 24;

    cout << cantidadDeHoras << " horas equivalen a " << equivalenciaEnDias << " días" << " y " << horasRestantes << " horas." << endl;
    
    return 0;
}