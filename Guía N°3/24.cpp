#include <iostream>
using namespace std;

int main()
{
    const int empleados = 10;
    int sueldos[empleados];
    int sueldoMaximo = 0, sueldoMinimo = 0, sueldoPromedio = 0, sueldosMayores5000 = 0, sumaSueldos = 0;

    cout << "Ingrese los sueldos de diez empleados: ";

    for (int i = 0; i < empleados; i++)
    {
        cin >> sueldos[i];
    }

    for (int i = 0; i < empleados; i++)
    {
        if (sueldos[i] > sueldoMaximo)
        {
            sueldoMaximo = sueldos[i];
        }

        if (sueldos[i] < sueldoMinimo || sueldoMinimo == 0)
        {
            sueldoMinimo = sueldos[i];
        }

        if (sueldos[i] > 5000)
        {
            sueldosMayores5000++;
        }

        sumaSueldos += sueldos[i];
    }

    sueldoPromedio = sumaSueldos / empleados;

    cout << "El sueldo máximo es: " << sueldoMaximo << endl;
    cout << "El sueldo mínimo es: " << sueldoMinimo << endl;
    cout << "El sueldo promedio es: " << sueldoPromedio << endl;
    cout << "Cantidad de sueldos mayores a 5000: " << sueldosMayores5000 << endl;

    return 0;
}