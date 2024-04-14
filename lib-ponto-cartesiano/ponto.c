#include <stdio.h>
#include "ponto.h"
#include <math.h>

Ponto criar_ponto(float x, float y){
    Ponto p;
    p.x = x;
    p.y = y;
    return p;
}

float calcular_distancia(Ponto pontoA, Ponto pontoB){
    return sqrt(pow((pontoB.x - pontoA.x), 2) + pow((pontoB.y - pontoA.y), 2));
}