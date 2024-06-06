#include "../includes/funcionario.hpp"

Funcionario::Funcionario( int id, string nome, double salarioBase)
    : id(id), nome(nome), salarioBase(salarioBase) {}

double Funcionario::calcularSalarioTotal() {
    return this->salarioBase;
}

int Funcionario::getId() {
    return this->id;
}

string Funcionario::getNome() {
    return this->nome;
}