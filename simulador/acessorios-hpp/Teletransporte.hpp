#ifndef TELETRANSPORTE
#define TELETRANSPORTE

#include "../core-simulador-hpp/ArmaDefesa.hpp"
class Teletransporte : public ArmaDefesa
{
    public:
        Teletransporte(string descricaoArma, int resistencia);
        string getDescricaoArma() override;
        int getResistencia() override;
};

#endif