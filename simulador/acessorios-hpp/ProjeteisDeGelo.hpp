#ifndef PROJETEISDEGELO
#define PROJETEISDEGELO

#include "../core-simulador-hpp/ArmaAtaque.hpp"
class ProjeteisDeGelo : public ArmaAtaque
{
    public:
        ProjeteisDeGelo(string descricaoArma, int minForca, int maxForca);
        int gerarForcaAtaque() override;
        string gerarRuidoAtaque() override;
};

#endif