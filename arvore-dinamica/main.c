#include <stdio.h>
#include "arvore.h"
#include <stdlib.h>

void main() {
    Arvore* arvore = cria();

    push(arvore->raiz, 10);
    push(arvore->raiz, 5);
    push(arvore->raiz, 15);
    push(arvore->raiz, 7);
    push(arvore->raiz, 15);

    printf("Existe o valor 5 na arvore: %d\n", busca(arvore->raiz, 5));
    printf("Existe o valor 8 na arvore: %d\n", busca(arvore->raiz, 8));
    printf("Existe o valor 15 na arvore: %d\n", busca(arvore->raiz, 15));
}
