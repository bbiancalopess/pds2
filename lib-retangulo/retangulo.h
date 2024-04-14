typedef struct retangulo{    
    float base;
    float altura;
}Retangulo;

/**
 * Cria um retângulo com a base e altura especificadas.
 *
 * @param base A medida da base do retângulo.
 * @param altura A medida da altura do retângulo.
 * @return Um retângulo com a base e altura fornecidas.
 */
Retangulo criar_retangulo(float base, float altura);

/**
 * Calcula a área de um retângulo.
 *
 * @param retangulo O retângulo para o qual a área será calculada.
 * @return A área do retângulo.
 */
float calcular_area(Retangulo retangulo);