#ifndef REGENERACAO
#define REGENERACAO

#include "../core-simulador-hpp/ArmaDefesa.hpp"
class Regeneracao : public ArmaDefesa
{
    public:
        Regeneracao(string descricaoArma, int resistencia);
        string getDescricaoArma() override;
        int getResistencia() override;
};

#endif