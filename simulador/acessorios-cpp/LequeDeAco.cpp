#include "../core-simulador-hpp/ArmaAtaque.hpp"
#include "../acessorios-hpp/LequeDeAco.hpp"

LequeDeAco::LequeDeAco(string descricaoArma, int minForca, int maxForca)
:ArmaAtaque(descricaoArma, minForca, maxForca)
{

}

int LequeDeAco::gerarForcaAtaque()
{
    return maxForca - minForca;
}

string LequeDeAco::gerarRuidoAtaque()
{
    return "shin shin";
}
