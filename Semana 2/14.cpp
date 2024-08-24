#include <iostream>
using namespace std;

int main()
{
    int diaNacimiento, mesNacimiento, añoNacimiento;
    int diaDeHoy, mesActual, añoActual;
    int edad;

    cout << "En este programa, vamos a calcular tu edad. ";

    cout << "Ingrese el día de nacimiento: ";
    cin >> diaNacimiento;

    cout << "Ingrese el mes de nacimiento: ";
    cin >> mesNacimiento;

    cout << "Ingrese el año de nacimiento: ";
    cin >> añoNacimiento;

    cout << "Ingrese el día de hoy: ";
    cin >> diaDeHoy;

    cout << "Ingrese el mes actual: ";
    cin >> mesActual;

    cout << "Ingrese el año actual: ";
    cin >> añoActual;

    edad = añoActual - añoNacimiento;

    if (mesActual < mesNacimiento || (mesActual == mesNacimiento && diaDeHoy < diaNacimiento))
    {
        edad--;
    }

    cout << "Tu edad es: " << edad << " años." << endl;

    return 0;
}