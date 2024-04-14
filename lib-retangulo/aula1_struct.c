#include <stdio.h>

typedef struct retangulo
{
    float base;
    float altura;
} Retangulo;

int main(){
    struct retangulo r;
    //Retangulo r;
    r.altura = 10;
    r.base = 20;
    printf("Area = %f", r.altura * r.base);

}

    