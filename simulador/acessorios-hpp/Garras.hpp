#ifndef GARRAS
#define GARRAS

#include "../core-simulador-hpp/ArmaAtaque.hpp"
class Garras : public ArmaAtaque
{
    public:
        Garras(string descricaoArma, int minForca, int maxForca);
        int gerarForcaAtaque() override;
        string gerarRuidoAtaque() override;
};

#endif