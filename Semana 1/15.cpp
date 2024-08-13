#include <iostream>
using namespace std;

int main() {
    float temperaturaMinima;
    float temperaturaMaxima;
    float amplitudTermica;

    cout << "Ingrese la temperatura mínima de ayer en San Fernando: ";
    cin >> temperaturaMinima;

    cout << "Ingrese la temperatura máxima de ayer en San Fernando: ";
    cin >> temperaturaMaxima;

    amplitudTermica = temperaturaMaxima - temperaturaMinima;

    cout << "La amplitud térmica fue de " << amplitudTermica << " grados." << endl;

    return 0;
}