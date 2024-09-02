#include <iostream>
using namespace std;

int main()
{
    char lenguaje;
    int valorHora, cantidadHoras, costoFinal;
    bool urgencia;

    cout << "En este programa, vamos a calcular el costo del desarrollo de un software." << endl;

    cout << "Ingrese la cantidad de horas a trabajar en el proyecto: ";
    cin >> cantidadHoras;

    cout << "Ingrese el tipo de lenguaje ('C' para C/C++, '#' para C#, 'P' para Python, 'G' para Go): ";
    cin >> lenguaje;

    cout << "¿El proyecto es urgente? (0: No, 1: Sí) ";
    cin >> urgencia;

    switch (lenguaje)
    {
    case 'C':
        valorHora = 7500;
        break;

    case '#':
        valorHora = 6100;
        break;

    case 'P':
        valorHora = 5400;
        break;

    case 'G':
        valorHora = 5000;
        break;

    default:
        cout << "El tipo de lenguaje que ingresaste no es válido." << endl;
        return 1;
    }

    costoFinal = cantidadHoras * valorHora;

    if (urgencia)
    {
        costoFinal *= 2.2;
    }

    cout << "El costo final del proyecto es de: $" << costoFinal << " pesos." << endl;

    return 0;
}