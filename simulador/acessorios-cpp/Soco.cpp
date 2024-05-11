#include "../core-simulador-hpp/ArmaAtaque.hpp"
#include "../acessorios-hpp/Soco.hpp"

Soco::Soco(string descricaoArma, int minForca, int maxForca)
:ArmaAtaque(descricaoArma, minForca, maxForca)
{

}

int Soco::gerarForcaAtaque()
{
    return maxForca - minForca;
}

string Soco::gerarRuidoAtaque()
{
    return "tof tof";
}
