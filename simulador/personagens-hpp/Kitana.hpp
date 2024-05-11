#ifndef KITANA
#define KITANA
#include "../core-simulador-hpp/Personagem.hpp"
class Kitana : public Personagem
{
    public:
        Kitana(int id, string nome, int vida, ArmaAtaque* armaAtaque, ArmaDefesa* armaDefesa);
        int gerarAtaque() override;
        int criarDefesa() override;
        string pegarDescricao() override;
};
#endif