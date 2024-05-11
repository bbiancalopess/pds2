#ifndef SOCO
#define SOCO

#include "../core-simulador-hpp/ArmaAtaque.hpp"
class Soco : public ArmaAtaque
{
    public:
        Soco(string descricaoArma, int minForca, int maxForca);
        int gerarForcaAtaque() override;
        string gerarRuidoAtaque() override;
};

#endif