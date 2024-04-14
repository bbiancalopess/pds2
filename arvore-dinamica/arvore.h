typedef struct No No;
typedef struct Arvore Arvore;

Arvore* cria ();
void push (No* raiz, int valor);
int busca(No* raiz, int valor);
void delete(No* raiz, int valor);
void imprime(No* raiz);