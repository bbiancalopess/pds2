#include "../personagens-hpp/Kitana.hpp"

Kitana::Kitana(int id, string nome, int vida, ArmaAtaque* armaAtaque, ArmaDefesa* armaDefesa)
:Personagem(id, nome, vida, armaAtaque, armaDefesa){

}

int Kitana::gerarAtaque()
{
    return armaAtaque->gerarForcaAtaque();
}

int Kitana::criarDefesa()
{
    return armaDefesa->getResistencia();
}

string Kitana::pegarDescricao() 
{
    return "You are not ready!";
}