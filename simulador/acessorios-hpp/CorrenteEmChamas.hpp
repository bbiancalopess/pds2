#ifndef CORRENTEEMCHAMAS
#define CORRENTEEMCHAMAS

#include "../core-simulador-hpp/ArmaAtaque.hpp"
class CorrenteEmChamas : public ArmaAtaque
{
    public:
        CorrenteEmChamas(string descricaoArma, int minForca, int maxForca);
        int gerarForcaAtaque() override;
        string gerarRuidoAtaque() override;
};

#endif