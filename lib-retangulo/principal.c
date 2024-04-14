#include <stdio.h>
#include "retangulo.h"

int main(){
    Retangulo r = criar_retangulo(10,20);
    printf("AREA = %f", calcular_area(r));
}