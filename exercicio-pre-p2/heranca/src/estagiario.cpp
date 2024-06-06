#include "../includes/estagiario.hpp"

Estagiario::Estagiario(int id, string nome, double salarioBase) 
    : Funcionario(id, nome, salarioBase * 0.7) {}