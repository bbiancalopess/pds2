#include <stdio.h>

typedef struct No No;

typedef struct Fila Fila;

Fila* cria ();

void push (int A, Fila* f);

int pop (Fila* f);

void imprime(Fila* fila);