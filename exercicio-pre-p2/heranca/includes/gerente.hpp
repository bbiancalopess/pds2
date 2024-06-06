#ifndef GERENTE
#define GERENTE

#include "funcionario.hpp"

class Gerente : public Funcionario {
    private:
        double bonusAnual;
    public:
        Gerente(int id, string nome, double salarioBase, double bonusAnual);
        double calcularSalarioTotal() override;
};

#endif