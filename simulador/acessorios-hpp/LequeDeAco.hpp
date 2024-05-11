#ifndef LEQUEDEACO
#define LEQUEDEACO

#include "../core-simulador-hpp/ArmaAtaque.hpp"
class LequeDeAco : public ArmaAtaque
{
    public:
        LequeDeAco(string descricaoArma, int minForca, int maxForca);
        int gerarForcaAtaque() override;
        string gerarRuidoAtaque() override;
};

#endif