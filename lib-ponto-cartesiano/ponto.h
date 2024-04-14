typedef struct ponto{    
    float x;
    float y;
}Ponto;

/**
 * Cria um ponto com as coordenadas x e y especificadas.
 *
 * @param x Coordenada x do ponto.
 * @param y Coordenada y do ponto.
 * @return Um ponto com as coordenadas fornecidas.
 */
Ponto criar_ponto(float x, float y);

/**
 * Calcula a distância entre dois pontos.
 *
 * @param pontoA Ponto inicial a qual se quer calcular a distância.
 * @param pontoB Ponto final a qual se quer calcular a distância.
 * @return A distância entre os dois pontos fornecidos.
 */
float calcular_distancia(Ponto pontoA, Ponto pontoB);