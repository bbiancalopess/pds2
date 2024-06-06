#ifndef FUNCIONARIO
#define FUNCIONARIO

#include <string>
using std::string;

class Funcionario {
    protected:
        string nome;
        int id;
        double salarioBase;
    public:
        Funcionario(int id, string nome, double salarioBase); 
        virtual double calcularSalarioTotal();
        string getNome();
        int getId();
};

#endif