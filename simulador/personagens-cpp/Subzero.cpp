#include "../personagens-hpp/Subzero.hpp"

Subzero::Subzero(int id, string nome, int vida, ArmaAtaque* armaAtaque, ArmaDefesa* armaDefesa)
:Personagem(id, nome, vida, armaAtaque, armaDefesa){

}

int Subzero::gerarAtaque()
{
    return armaAtaque->gerarForcaAtaque();
}

int Subzero::criarDefesa()
{
    return armaDefesa->getResistencia();
}

string Subzero::pegarDescricao() 
{
    return "You will know the chill of death!";
}