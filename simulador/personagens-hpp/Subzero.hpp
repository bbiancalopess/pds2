#ifndef SUBZERO
#define SUBZERO
#include "../core-simulador-hpp/Personagem.hpp"
class Subzero : public Personagem
{
    public:
        Subzero(int id, string nome, int vida, ArmaAtaque* armaAtaque, ArmaDefesa* armaDefesa);
        int gerarAtaque() override;
        int criarDefesa() override;
        string pegarDescricao() override;
};
#endif