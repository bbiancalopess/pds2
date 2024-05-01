#include <stdio.h>
#include "arvore.h"
#include <stdlib.h>

typedef struct No{
    int valor;
    No* esquerda;
    No* direita;
} No;

typedef struct Arvore{
    No* raiz;
} Arvore;

Arvore* arvore_cria(){
    Arvore* a = malloc(sizeof(Arvore));
    if(a == NULL) {
        printf("A alocacao nao foi feita com sucesso.");
        return NULL;
    }
    a->raiz = NULL;
    return a;
}

No* cria_no (int x) {
    No* no = malloc(sizeof(No));

    if (no == NULL) {
        printf("A alocacao nao foi realizada");
    }

    no->direita = NULL;
    no->esquerda = NULL;
    no->valor = x;

    return no;
}

void insere(No* no, int valor){
    if (valor == no->valor) {
        printf("O valor %d ja foi inserido na arvore.\n", valor);
    } else if (valor > no->valor) {
        if (no->direita == NULL) {
            no->direita = cria_no(valor);
        } else {
            insere(no->direita, valor);
        }
    } else if (valor < no->valor) {
        if (no->esquerda == NULL) {
            no->esquerda = cria_no(valor);
        } else {
            insere(no->esquerda, valor);
        }
    }
}

void arvore_push(Arvore* arvore, int valor){
    if (arvore == NULL) {
        printf("A arvore nao existe");
        return;
    }

    if (arvore->raiz == NULL) {
        arvore->raiz = cria_no(valor);
    } else {
        insere(arvore->raiz, valor);
    }
}

int busca_no(No* no, int valor) {
    if (no->valor == valor) {
        return 1;
    } else if (valor > no->valor) {
        if (no->direita == NULL) {
            return 0;
        } else {
            busca_no(no->direita, valor);
        }
    } else if (valor < no->valor) {
        if (no->esquerda == NULL) {
            return 0;
        } else {
            busca_no(no->esquerda, valor);
        }
    }
}

int arvore_busca(Arvore* arvore, int valor){
    if (arvore == NULL) {
        return 0;
    } else if (arvore->raiz == NULL) {
        return 0;
    } else {
        return busca_no(arvore->raiz, valor);
    }
}

No* encontra_minimo(No* no) {
    while (no->esquerda != NULL) {
        no = no->esquerda;
    }
    return no;
}

No* remove_no(No* no, int valor) {
    if (no == NULL) {
        return no;
    }

    if (valor < no->valor) {
        no->esquerda = remove_no(no->esquerda, valor);
    } else if (valor > no->valor) {
        no->direita = remove_no(no->direita, valor);
    } else {
        if (no->esquerda == NULL) {
            No* temp = no->direita;
            free(no);
            return temp;
        } else if (no->direita == NULL) {
            No* temp = no->esquerda;
            free(no);
            return temp;
        }

        No* temp = encontra_minimo(no->direita);
        no->valor = temp->valor;
        no->direita = remove_no(no->direita, temp->valor);
    }
    return no;
}

void arvore_delete(Arvore* arvore, int valor){
    if (arvore == NULL || arvore->raiz == NULL) {
        return;
    }

    arvore->raiz = remove_no(arvore->raiz, valor);
}

void imprime_in_order(No* no) {
    if (no != NULL) {
        imprime_in_order(no->esquerda);
        printf("%d ", no->valor);
        imprime_in_order(no->direita);
    }
}

void arvore_imprime(Arvore* arvore) {
    if (arvore == NULL || arvore->raiz == NULL) {
        printf("Arvore vazia\n");
    } else {
        printf("Conteudo da arvore (in-order): ");
        imprime_in_order(arvore->raiz);
        printf("\n");
    }

    printf("\n-----------------------\n");
}