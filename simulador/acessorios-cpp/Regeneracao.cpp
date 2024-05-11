#include "../core-simulador-hpp/ArmaDefesa.hpp"
#include "../acessorios-hpp/Regeneracao.hpp"

Regeneracao::Regeneracao(string descricaoArma, int resistencia)
:ArmaDefesa(descricaoArma, resistencia){

}

string Regeneracao::getDescricaoArma() 
{
    return this->descricaoArma;
}

int Regeneracao::getResistencia() 
{
    return this->resistencia;
}