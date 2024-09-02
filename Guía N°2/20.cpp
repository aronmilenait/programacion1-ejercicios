#include <iostream>
using namespace std;

int main()
{
    int edad;
    int mayoresDe30 = 0;
    int cuentaMayoresDe30 = 0;
    int personasDe20A40 = 0;
    int cuentaAlturaRango = 0;
    float altura;
    float sumaAltura30 = 0;
    float promedioAltura30;

    for (int i = 1; i <= 5; i++)
    {
        cout << "Ingrese la edad de la persona " << i << ": ";
        cin >> edad;
        cout << "Ingrese la altura de la persona " << i << ": ";
        cin >> altura;

        if (edad > 30 && altura > 1.8)
        {
            mayoresDe30++;
        }
        if (edad > 30)
        {
            sumaAltura30 += altura;
            cuentaMayoresDe30++;
        }
        if (altura >= 1.7 && altura <= 1.8)
        {
            cuentaAlturaRango++;
        }

        if (edad == 20 || edad == 30 || edad == 40)
        {
            personasDe20A40++;
        }
    }

    if (cuentaMayoresDe30 > 0)
    {
        promedioAltura30 = sumaAltura30 / cuentaMayoresDe30;
    }
    else
    {
        promedioAltura30 = 0;
    }

    cout << "Cantidad de personas mayores de 30 años que miden más de 1.8 metros: " << mayoresDe30 << endl;
    cout << "Promedio de altura de las personas mayores de 30 años: " << promedioAltura30 << " metros" << endl;
    cout << "Cantidad de personas con altura entre 1.7 y 1.8 metros: " << cuentaAlturaRango << endl;
    cout << "Cantidad de personas con edad de 20, 30 o 40 años: " << personasDe20A40 << endl;

    return 0;
}
