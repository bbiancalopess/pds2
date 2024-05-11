#include "../personagens-hpp/Scorpion.hpp"

Scorpion::Scorpion(int id, string nome, int vida, ArmaAtaque* armaAtaque, ArmaDefesa* armaDefesa)
:Personagem(id, nome, vida, armaAtaque, armaDefesa){

}

int Scorpion::gerarAtaque()
{
    return armaAtaque->gerarForcaAtaque();
}

int Scorpion::criarDefesa()
{
    return armaDefesa->getResistencia();
}

string Scorpion::pegarDescricao() 
{
    return "Vengeance will be mine!";
}