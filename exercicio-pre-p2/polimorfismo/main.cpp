#include <iostream>
#include "caminhao.cpp"
#include "van.cpp"
#include <vector>

using std::vector;
using namespace std;

int main () {

    vector<Veiculo*> veiculos;
    veiculos.push_back(new Caminhao("Fiat", "Siena", 30, 2));
    veiculos.push_back(new Caminhao("Audi", "A3", 40, 3));
    veiculos.push_back(new Caminhao("Jeep", "Renegade", 50, 1));
    veiculos.push_back(new Van("Ford", "Fusion", 30, 12));
    veiculos.push_back(new Van("Mercedes", "300 SLR Uhlenhaut Coupé", 10, 5));
    veiculos.push_back(new Van("Hyundai", "i30", 20, 10));

    for(const auto& veiculo : veiculos) {
        veiculo->exibirDados();
    }

    for(const auto& veiculo : veiculos) {
        delete veiculo;
    }

    return 0;
}