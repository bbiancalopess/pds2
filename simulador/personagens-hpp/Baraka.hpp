#ifndef BARAKA
#define BARAKA
#include "../core-simulador-hpp/Personagem.hpp"
class Baraka : public Personagem
{
    public:
        Baraka(int id, string nome, int vida, ArmaAtaque* armaAtaque, ArmaDefesa* armaDefesa);
        int gerarAtaque() override;
        int criarDefesa() override;
        string pegarDescricao() override;
};
#endif