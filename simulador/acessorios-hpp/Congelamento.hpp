#ifndef CONGELAMENTO
#define CONGELAMENTO

#include "../core-simulador-hpp/ArmaDefesa.hpp"
class Congelamento : public ArmaDefesa
{
    public:
        Congelamento(string descricaoArma, int resistencia);
        string getDescricaoArma() override;
        int getResistencia() override;
};

#endif