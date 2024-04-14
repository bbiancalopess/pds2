#include <stdio.h>
#include "retangulo.h"


Retangulo criar_retangulo(float base, float altura){
    Retangulo r;
    r.altura = altura;
    r.base = base;
    return r;
}

float calcular_area(Retangulo retangulo){
    return retangulo.base * retangulo.altura;
}