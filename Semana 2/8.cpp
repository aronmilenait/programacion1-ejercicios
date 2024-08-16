#include <iostream>
using namespace std;

int main()
{
    int lado1, lado2, lado3;

    cout << "En este programa, vamos a determinar qué tipo de triángulo tenemos en base a la longitud de sus lados." << endl;

    cout << "Ingrese la longitud del primer lado: ";
    cin >> lado1;

    cout << "Ingrese la longitud del segundo lado: ";
    cin >> lado2;

    cout << "Ingrese la longitud del tercer lado: ";
    cin >> lado3;

    // Los triángulos equiláteros son aquellos que tienen todos sus lados iguales.
    // Los triángulos isósceles son aquellos que tienen dos lados iguales.
    // Los triángulos escalenos son aquellos que tienen todos sus lados distintos.

    if (lado1 == lado2 && lado2 == lado3)
    {
        cout << "Es un triángulo equilátero." << endl;
    }
    else if (lado1 == lado2 || lado2 == lado3 || lado1 == lado3)
    {
        cout << "El triángulo es isósceles." << endl;
    }
    else
    {
        cout << "El triángulo es escaleno." << endl;
    }

    return 0;
}
