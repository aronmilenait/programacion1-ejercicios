#include <iostream>
using namespace std;

int main()
{
    int nota1, nota2, nota3, nota4;

    cout << "En este programa, vamos a determinar cómo avanza un alumno con la materia basándonos en sus notas." << endl;

    cout << "Ingrese la primera nota: ";
    cin >> nota1;

    cout << "Ingrese la segunda nota: ";
    cin >> nota2;

    cout << "Ingrese la tercera nota: ";
    cin >> nota3;

    cout << "Ingrese la cuarta nota: ";
    cin >> nota4;

    int cantidadDeNotasMayorIgual7 = 0;
    int cantidadDeNotasMayorIgual4 = 0;

    if (nota1 >= 7)
        cantidadDeNotasMayorIgual7++;
    if (nota2 >= 7)
        cantidadDeNotasMayorIgual7++;
    if (nota3 >= 7)
        cantidadDeNotasMayorIgual7++;
    if (nota4 >= 7)
        cantidadDeNotasMayorIgual7++;

    if (nota1 >= 4)
        cantidadDeNotasMayorIgual4++;
    if (nota2 >= 4)
        cantidadDeNotasMayorIgual4++;
    if (nota3 >= 4)
        cantidadDeNotasMayorIgual4++;
    if (nota4 >= 4)
        cantidadDeNotasMayorIgual4++;

    if (cantidadDeNotasMayorIgual7 == 4)
    {
        cout << "El alumno promociona" << endl;
    }
    else if (cantidadDeNotasMayorIgual4 >= 3)
    {
        cout << "El alumno rinde examen final" << endl;
    }
    else if (cantidadDeNotasMayorIgual4 >= 1)
    {
        cout << "El alumno recupera parciales" << endl;
    }
    else
    {
        cout << "El alumno recursa la materia" << endl;
    }

    return 0;
}
