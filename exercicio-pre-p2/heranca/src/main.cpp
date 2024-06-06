#include <iostream>
#include "../includes/estagiario.hpp"
#include "../includes/regular.hpp"
#include "../includes/gerente.hpp"

using namespace std;

int main () {

    Funcionario* gerente = new Gerente(1, "Luisa", 5000, 2000);
    Funcionario* estagiario = new Estagiario(2, "André", 5000);
    Funcionario* regular = new Regular(3, "Tomás", 5000);

    cout << "Gerente: " << gerente->getNome() << ", ID: " << gerente->getId() << ", salário: " << gerente->calcularSalarioTotal() << endl;
    cout << "Estagiario: " << estagiario->getNome() << ", ID: " << estagiario->getId() << ", salário: " << estagiario->calcularSalarioTotal() << endl;
    cout << "Funcionario Regular: " << regular->getNome() << ", ID: " << regular->getId() << ", salário: " << regular->calcularSalarioTotal() << endl;

    delete gerente;
    delete estagiario;
    delete regular;

    return 0;
}