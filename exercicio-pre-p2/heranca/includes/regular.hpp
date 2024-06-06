#ifndef REGULAR
#define REGULAR

#include "funcionario.hpp"

class Regular : public Funcionario {
    public:
        Regular(int id, string nome, double salarioBase);
};

#endif