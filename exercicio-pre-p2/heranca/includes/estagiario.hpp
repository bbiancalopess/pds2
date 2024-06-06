#ifndef FUNCIONARIOREGULAR
#define FUNCIONARIOREGULAR

#include "funcionario.hpp"

class Estagiario : public Funcionario {
    public:
        Estagiario(int id, string nome, double salarioBase);
};

#endif