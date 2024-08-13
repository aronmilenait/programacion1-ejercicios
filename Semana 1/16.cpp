#include <iostream>
using namespace std;

int main() {
    int frascos;

    // Valores en miligramos
    int pildorasPorFrasco = 75;
    int betamolPorPildora = 45;
    int micilinaPorPildora = 2000;
    int acidoSiniticoPorPildora = 7;

    cout << "Ingrese la cantidad de frascos: ";
    cin >> frascos;

    int totalPildoras = frascos * pildorasPorFrasco;
    int totalBetamol = totalPildoras * betamolPorPildora;
    int totalMicilina = totalPildoras * micilinaPorPildora;
    int totalAcidoSinitico = totalPildoras * acidoSiniticoPorPildora;

    cout << "Para elaborar " << frascos << " frascos se necesitan:" << endl;
    cout << totalBetamol << " mg de Betamol, " << totalMicilina << " mg de Micilina y " << totalAcidoSinitico << " mg de Ácido Sinítico." << endl;

    return 0;
}
