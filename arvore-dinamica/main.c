#include <stdio.h>
#include "arvore.h"
#include <stdlib.h>

void main() {
    Arvore* arvore = arvore_cria();

    arvore_push(arvore, 10);
    arvore_imprime(arvore);
    arvore_push(arvore, 5);
    arvore_imprime(arvore);
    arvore_push(arvore, 15);
    arvore_imprime(arvore);
    arvore_push(arvore, 7);
    arvore_imprime(arvore);
    arvore_push(arvore, 15);
    arvore_imprime(arvore);
    arvore_push(arvore, 2);
    arvore_imprime(arvore);
    arvore_push(arvore, 3);
    arvore_imprime(arvore);
    arvore_push(arvore, 1);
    arvore_imprime(arvore);
    arvore_push(arvore, 8);
    arvore_imprime(arvore);
    arvore_push(arvore, 12);
    arvore_imprime(arvore);

    printf("Existe o valor 5 na arvore: %d\n", arvore_busca(arvore, 5));
    printf("Existe o valor 8 na arvore: %d\n", arvore_busca(arvore, 8));
    printf("Existe o valor 15 na arvore: %d\n", arvore_busca(arvore, 15));
    printf("Existe o valor 20 na arvore: %d\n", arvore_busca(arvore, 20));

    arvore_delete(arvore, 5);
    arvore_imprime(arvore);
    arvore_delete(arvore, 15);
    arvore_imprime(arvore);

}
