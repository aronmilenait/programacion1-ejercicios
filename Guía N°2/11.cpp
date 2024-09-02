#include <iostream>
using namespace std;

int main()
{
    int numero;
    int positivos = 0;
    int negativos = 0;
    int ceros = 0;

    cout << "En este programa, vamos a ingresar 5 números y a calcular cuántos son positivos, cuántos son negativos y cuántos son iguales a 0.";

    cout << "Ingrese el primer número: ";
    cin >> numero;

    if (numero > 0)
    {
        positivos++;
    }
    else if (numero < 0)
    {
        negativos++;
    }
    else
    {
        ceros++;
    }

    cout << "Ingrese el segundo número: ";
    cin >> numero;

    if (numero > 0)
    {
        positivos++;
    }
    else if (numero < 0)
    {
        negativos++;
    }
    else
    {
        ceros++;
    }

    cout << "Ingrese el tercer número: ";
    cin >> numero;

    if (numero > 0)
    {
        positivos++;
    }
    else if (numero < 0)
    {
        negativos++;
    }
    else
    {
        ceros++;
    }

    cout << "Ingrese el cuarto número: ";
    cin >> numero;

    if (numero > 0)
    {
        positivos++;
    }
    else if (numero < 0)
    {
        negativos++;
    }
    else
    {
        ceros++;
    }

    cout << "Ingrese el quinto número: ";
    cin >> numero;

    if (numero > 0)
    {
        positivos++;
    }
    else if (numero < 0)
    {
        negativos++;
    }
    else
    {
        ceros++;
    }

    cout << "De los 5 números ingresados, " << positivos << " son positivos, " << negativos << " son negativos, y " << ceros << " son iguales a cero." << endl;

    return 0;
}

// Me parece demasiado código para algo que puede simplificarse con un bucle for, pero todavía no lo vimos en la materia.
// De todas formas, dejo esa solución alternativa. Para ejecutarla, sólo hay que comentar el bloque de código anterior y des-comentar este.

/* #include <iostream>
using namespace std;

int main()
{
    int numero;
    int positivos = 0, negativos = 0, ceros = 0;

    cout << "En este programa, vamos a ingresar 5 números y a calcular cuántos son positivos, cuántos son negativos y cuántos son iguales a 0." << endl;

    for (int i = 1; i <= 5; i++)
    {
        cout << "Ingrese el número " << i << ": ";
        cin >> numero;

        if (numero > 0)
        {
            positivos++;
        }
        else if (numero < 0)
        {
            negativos++;
        }
        else
        {
            ceros++;
        }
    }

    cout << "De los 5 números ingresados, " << positivos << " son positivos, " << negativos << " son negativos, y " << ceros << " son iguales a cero." << endl;

    return 0;
}
*/