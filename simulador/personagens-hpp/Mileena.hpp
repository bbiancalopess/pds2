#ifndef MILEENA
#define MILEENA
#include "../core-simulador-hpp/Personagem.hpp"
class Mileena : public Personagem
{
    public:
        Mileena(int id, string nome, int vida, ArmaAtaque* armaAtaque, ArmaDefesa* armaDefesa);
        int gerarAtaque() override;
        int criarDefesa() override;
        string pegarDescricao() override;
};
#endif