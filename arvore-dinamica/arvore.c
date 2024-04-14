#include <stdio.h>
#include "arvore.h"
#include <stdlib.h>

struct No {
    int valor;
    No* esquerda;
    No* direita;
};

struct Arvore {
    No* raiz;
};

Arvore* cria(){
    Arvore* a = malloc(sizeof(Arvore));
    if(a == NULL) {
        printf("A alocacao nao foi feita com sucesso.");
        return NULL;
    }
    a->raiz = NULL;
    return a;
}

void push(No* raiz, int value){
    if (raiz == NULL) {
        No* n = malloc(sizeof(No));
        n->valor = value;
        n->direita = NULL;
        n->esquerda = NULL;
        raiz = n;
    } else if (value == raiz->valor) {
        printf("O valor %d já foi inserido na arvore.", value);
    } else if (value > raiz->valor) {
        push(raiz->direita, value);
    } else if (value < raiz->valor) {
        push(raiz->esquerda, value);
    }
}

int busca (No* raiz, int value) {
    if (raiz == NULL) {
        return 0;
    } else if (value == raiz->valor) {
        return 1;
    } else if (value > raiz->valor) {
        return existe(raiz->direita, value);
    } else if (value < raiz->valor) {
        return existe(raiz->esquerda, value);
    } else {
        return 0;
    }
}

void delete (No* raiz, int value) {
    if (raiz == NULL) {
        printf("O valor nao esta na raiz");
    } else if (value == raiz->valor) {
        
    } else if (value > raiz->valor) {
        return existe(raiz->direita, value);
    } else if (value < raiz->valor) {
        return existe(raiz->esquerda, value);
    } 
}