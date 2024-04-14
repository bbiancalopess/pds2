#include <stdio.h>
#include "ponto.h"

void main(){
    Ponto pontoA = criar_ponto(5, 54);
    Ponto pontoB = criar_ponto(11, -6);

    printf("A distancia entre os pontos (%.2f; %.2f) e (%.2f; %.2f) eh de %.2f.", pontoA.x, pontoA.y, pontoB.x, pontoB.y, calcular_distancia(pontoA, pontoB));
}