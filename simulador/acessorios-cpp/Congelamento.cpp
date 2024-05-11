#include "../core-simulador-hpp/ArmaDefesa.hpp"
#include "../acessorios-hpp/Congelamento.hpp"

Congelamento::Congelamento(string descricaoArma, int resistencia)
:ArmaDefesa(descricaoArma, resistencia){

}

string Congelamento::getDescricaoArma() 
{
    return this->descricaoArma;
}

int Congelamento::getResistencia() 
{
    return this->resistencia;
}