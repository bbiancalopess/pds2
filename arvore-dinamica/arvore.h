typedef struct No No;
typedef struct Arvore Arvore;

Arvore* arvore_cria ();
void arvore_push (Arvore* arvore, int valor);
int arvore_busca(Arvore* arvore, int valor);
void arvore_delete(Arvore* arvore, int valor);
void arvore_imprime(Arvore* arvore);