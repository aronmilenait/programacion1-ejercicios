#include <iostream>
using namespace std;

int main() {
 // Los nombres de las variables son marcas de alfajores argentinos reales.
int ventasTerrabusi;
int ventasFulbito;
int ventasAguila;
int totalVentas;

cout << "El total de alfajores Terrabusi vendidos es de: ";
cin >> ventasTerrabusi;
cout << "El total de alfajores Fulbito vendidos es de: ";
cin >> ventasFulbito;
cout << "El total de alfajores Aguila vendidos es de: ";
cin >> ventasAguila;

// Sumar el total de ventas, para después poder calcular el porcentaje de cada marca.
totalVentas = (ventasTerrabusi + ventasFulbito + ventasAguila);

int porcentajeVentasTerrabusi = (100 * ventasTerrabusi) / totalVentas;
int porcentajeVentasFulbito = (100 * ventasFulbito) / totalVentas;
int porcentajeVentasAguila = (100 * ventasAguila) / totalVentas;

cout << "El porcentaje de ventas de Terrabusi es de: " << porcentajeVentasTerrabusi << "%" << endl;
cout << "El porcentaje de ventas de Fulbito es de: " << porcentajeVentasFulbito << "%" << endl;
cout << "El porcentaje de ventas de Aguila es de: " << porcentajeVentasAguila << "%" << endl;

return 0;
}