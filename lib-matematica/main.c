#include <stdio.h>
#include "matematica.h"
#include <math.h>

void main(){
    printf("TABELA TRIGONOMETRICA\n\n");
    printf("|     |   0  | PI/6 | PI/4 | PI/3 | PI/2 |\n");
    printf("|     |   0  |  30  |  45  |  60  |  90  |\n");
    printf("| sin | %.2f | %.2f | %.2f | %.2f | %.2f |\n", calcular_seno(0), calcular_seno(M_PI/6), calcular_seno(M_PI/4), calcular_seno(M_PI/3), calcular_seno(M_PI/2));
    printf("| cos | %.2f | %.2f | %.2f | %.2f | %.2f |\n", calcular_cosseno(0), calcular_cosseno(M_PI/6), calcular_cosseno(M_PI/4), calcular_cosseno(M_PI/3), calcular_cosseno(M_PI/2));
    printf("| tan | %.2f | %.2f | %.2f | %.2f | ---- |\n", calcular_tangente(0), calcular_tangente(M_PI/6), calcular_tangente(M_PI/4), calcular_tangente(M_PI/3));
}