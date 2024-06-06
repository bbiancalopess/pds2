#include "grafo.hpp"
#include <iostream>

using namespace std;

int main() {
    Grafo* g = new Grafo(6);

    g->adicionaVerticeEVizinho(1, 2);
    g->adicionaVerticeEVizinho(1, 5);
    g->adicionaVerticeEVizinho(2, 5);
    g->adicionaVerticeEVizinho(2, 4);
    g->adicionaVerticeEVizinho(2, 3);
    g->adicionaVerticeEVizinho(3, 4);
    g->adicionaVerticeEVizinho(4, 5);

    g->achaVizinhos(1);
    g->achaVizinhos(2);
    g->achaVizinhos(3);
    g->achaVizinhos(4);
    g->achaVizinhos(5);

    g->saoVizinhos(1, 2);
    g->saoVizinhos(1, 3);
    g->saoVizinhos(1, 5);
    g->saoVizinhos(2, 3);
    g->saoVizinhos(5, 3);
    g->saoVizinhos(4, 2);
    g->saoVizinhos(5, 1);
    g->saoVizinhos(4, 3);

    delete g;
    return 0;
}
