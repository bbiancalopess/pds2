#include "../core-simulador-hpp/ArmaAtaque.hpp"
#include "../acessorios-hpp/ProjeteisDeGelo.hpp"

ProjeteisDeGelo::ProjeteisDeGelo(string descricaoArma, int minForca, int maxForca)
:ArmaAtaque(descricaoArma, minForca, maxForca)
{

}

int ProjeteisDeGelo::gerarForcaAtaque()
{
    return maxForca - minForca;
}

string ProjeteisDeGelo::gerarRuidoAtaque()
{
    return "crack crack";
}
