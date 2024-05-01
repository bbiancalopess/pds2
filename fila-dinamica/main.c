#include <stdio.h>
#include "desafio-fila-dinamica.h"

void main() {
    Fila* minhaFila = cria();

    push(5, minhaFila);
    imprime(minhaFila);
    push(10, minhaFila);
    imprime(minhaFila);
    push(15, minhaFila);
    imprime(minhaFila);

    printf("%d\n", pop(minhaFila)); // Saída: 5
    imprime(minhaFila);
    printf("%d\n", pop(minhaFila)); // Saída: 10
    imprime(minhaFila);
    printf("%d\n", pop(minhaFila)); // Saída: 15
    imprime(minhaFila);
    printf("%d\n", pop(minhaFila)); // A pilha está vazia.
    imprime(minhaFila);
}