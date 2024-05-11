#ifndef ESQUIVA
#define ESQUIVA

#include "../core-simulador-hpp/ArmaDefesa.hpp"
class Esquiva : public ArmaDefesa
{
    public:
        Esquiva(string descricaoArma, int resistencia);
        string getDescricaoArma() override;
        int getResistencia() override;
};

#endif