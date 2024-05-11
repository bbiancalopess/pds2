#include "../personagens-hpp/Baraka.hpp"

Baraka::Baraka(int id, string nome, int vida, ArmaAtaque* armaAtaque, ArmaDefesa* armaDefesa)
:Personagem(id, nome, vida, armaAtaque, armaDefesa){

}

int Baraka::gerarAtaque()
{
    return armaAtaque->gerarForcaAtaque();
}

int Baraka::criarDefesa()
{
    return armaDefesa->getResistencia();
}

string Baraka::pegarDescricao() 
{
    return "Taste my blades!";
}