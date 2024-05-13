#include <iostream>
#include <string>

#include "../acessorios-hpp/Armadura.hpp"
#include "../acessorios-hpp/Congelamento.hpp"
#include "../acessorios-hpp/CorrenteEmChamas.hpp"
#include "../acessorios-hpp/Esquiva.hpp"
#include "../acessorios-hpp/Garras.hpp"
#include "../acessorios-hpp/LequeDeAco.hpp"
#include "../acessorios-hpp/ProjeteisDeGelo.hpp"
#include "../acessorios-hpp/Regeneracao.hpp"
#include "../acessorios-hpp/Soco.hpp"
#include "../acessorios-hpp/Teletransporte.hpp"

#include "../personagens-hpp/Baraka.hpp"
#include "../personagens-hpp/Kitana.hpp"
#include "../personagens-hpp/Mileena.hpp"
#include "../personagens-hpp/Scorpion.hpp"
#include "../personagens-hpp/Subzero.hpp"

#include "../core-simulador-hpp/Simulador.hpp"

using std::cout;
using std::endl;
using std::string;

int main()
{
    ArmaAtaque* correnteEmChamas = new CorrenteEmChamas("Corrente com gancho na ponta em chamas", 0, 25);
    ArmaAtaque* garras = new Garras("Garras",0,15);
    ArmaAtaque* lequeDeAco = new LequeDeAco("Leque de aco que toma varias formas",0,20);
    ArmaAtaque* projeteisDeGelo = new ProjeteisDeGelo("Projeteis de gelo que podem tomar qualquer forma",0,15);
    ArmaAtaque* soco = new Soco("Soquinho lero lero",0,5);

    ArmaDefesa* armadura = new Armadura("Armadura de couro", 1);
    ArmaDefesa* congelamento = new Congelamento("Camada de gelo se forma em volta do personagem", 3);
    ArmaDefesa* esquiva = new Esquiva("Personagem esquiva do golpe", 2);
    ArmaDefesa* regeneracao = new Regeneracao("Personagem leva o dano mas regenera um pouco do dano causado", 2);
    ArmaDefesa* teletransporte = new Teletransporte("Personagem teletransporta para fugir do golpe", 3);

    Personagem* baraka = new Baraka(1, "Baraka EQ1", 100, garras, regeneracao);
    Personagem* kitana = new Kitana(2, "Kitana EQ2", 100, lequeDeAco, armadura);
    Personagem* mileena = new Mileena(3, "Mileena EQ1", 100, soco, teletransporte);
    Personagem* scorpion = new Scorpion(4, "Scorpion EQ1", 100, correnteEmChamas, esquiva);
    Personagem* subzero = new Subzero(5, "Subzero EQ2", 100, projeteisDeGelo, congelamento);

    Simulador* simulador = new Simulador();

    simulador->adicionarPersonagem(baraka, 1);
    simulador->adicionarPersonagem(kitana, 2);
    simulador->adicionarPersonagem(mileena, 1);
    simulador->adicionarPersonagem(scorpion, 1);
    simulador->adicionarPersonagem(subzero, 2);
    
    simulador->iniciarSimulacao();

    return 0;
}