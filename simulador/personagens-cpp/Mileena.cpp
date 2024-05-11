#include "../personagens-hpp/Mileena.hpp"

Mileena::Mileena(int id, string nome, int vida, ArmaAtaque* armaAtaque, ArmaDefesa* armaDefesa)
:Personagem(id, nome, vida, armaAtaque, armaDefesa){

}

int Mileena::gerarAtaque()
{
    return armaAtaque->gerarForcaAtaque();
}

int Mileena::criarDefesa()
{
    return armaDefesa->getResistencia();
}

string Mileena::pegarDescricao() 
{
    return "You will learn respect!";
}