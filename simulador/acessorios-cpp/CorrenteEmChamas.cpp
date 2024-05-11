#include "../core-simulador-hpp/ArmaAtaque.hpp"
#include "../acessorios-hpp/CorrenteEmChamas.hpp"

CorrenteEmChamas::CorrenteEmChamas(string descricaoArma, int minForca, int maxForca)
:ArmaAtaque(descricaoArma, minForca, maxForca)
{

}

int CorrenteEmChamas::gerarForcaAtaque()
{
    return maxForca - minForca;
}

string CorrenteEmChamas::gerarRuidoAtaque()
{
    return "shu shu";
}
