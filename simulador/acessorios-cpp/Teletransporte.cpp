#include "../core-simulador-hpp/ArmaDefesa.hpp"
#include "../acessorios-hpp/Teletransporte.hpp"

Teletransporte::Teletransporte(string descricaoArma, int resistencia)
:ArmaDefesa(descricaoArma, resistencia){

}

string Teletransporte::getDescricaoArma() 
{
    return this->descricaoArma;
}

int Teletransporte::getResistencia() 
{
    return this->resistencia;
}