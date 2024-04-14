
/*
ALUNOS:
Bianca Lopes
Malu Lauar
Miguel Ferreira
Otávio Serafim
Henrique Joaquim
*/

#include <stdio.h>
#include <stdlib.h>
#include "desafio-fila-dinamica.h"

struct No {
    int valor;
    No* anterior;
};

struct Fila {
  No* fim;
  No* inicio;
};

Fila* cria () {
    Fila* f = malloc(sizeof(Fila));
    if(f == NULL) {
        printf("A alocacao nao foi feita.");
        return NULL;
    }
    f->inicio = NULL;
    f->fim = NULL;
    return f;
}

void push (int A, Fila* f) {
    No* n = malloc(sizeof(No));
    n->valor = A;
    n->anterior = NULL;
    if(f->inicio == NULL && f->fim == NULL){
        f->inicio = n;
        f->fim = n;   
    } else {
        f->fim->anterior = n;
        f->fim = n;
    }
}

int pop (Fila* f) {
    if(f->inicio == NULL){
        printf("A fila esta vazia.\n");
        return -1;
    } else {
        No* temp_inicio = f->inicio;
        int valor_return = temp_inicio->valor;
        f->inicio = temp_inicio->anterior;
        free(temp_inicio);

        return valor_return;
    }
}
