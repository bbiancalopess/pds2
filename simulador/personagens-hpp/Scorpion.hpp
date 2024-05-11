#ifndef SCORPION
#define SCORPION
#include "../core-simulador-hpp/Personagem.hpp"
class Scorpion : public Personagem
{
    public:
        Scorpion(int id, string nome, int vida, ArmaAtaque* armaAtaque, ArmaDefesa* armaDefesa);
        int gerarAtaque() override;
        int criarDefesa() override;
        string pegarDescricao() override;
};
#endif