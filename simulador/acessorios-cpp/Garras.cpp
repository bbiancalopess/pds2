#include "../core-simulador-hpp/ArmaAtaque.hpp"
#include "../acessorios-hpp/Garras.hpp"

Garras::Garras(string descricaoArma, int minForca, int maxForca)
:ArmaAtaque(descricaoArma, minForca, maxForca)
{

}

int Garras::gerarForcaAtaque()
{
    return maxForca - minForca;
}

string Garras::gerarRuidoAtaque()
{
    return "shin shin";
}
