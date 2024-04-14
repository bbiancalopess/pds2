#include <stdio.h>
#include "desafio-fila-dinamica.h"

void main() {
    Fila* minhaFila = cria();

    push(5, minhaFila);
    push(10, minhaFila);
    push(15, minhaFila);

    printf("%d\n", pop(minhaFila)); // Saída: 5
    printf("%d\n", pop(minhaFila)); // Saída: 10
    printf("%d\n", pop(minhaFila)); // Saída: 15
    printf("%d\n", pop(minhaFila)); // A pilha está vazia.
}