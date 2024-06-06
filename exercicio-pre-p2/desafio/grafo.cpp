#include "grafo.hpp"
#include <iostream>
#include <algorithm>

using namespace std;

Grafo::Grafo(int v)
    : count_vertices(v) {
        this->matriz.resize(count_vertices);
    }

void Grafo::adicionaVerticeEVizinho(int vertice, int vizinho) {
    if (vertice >= count_vertices || vizinho >= count_vertices || vertice < 0 || vizinho < 0) {
        cout << "Erro: Vértice fora do intervalo!" << endl;
        return;
    }
    this->matriz[vertice].push_back(vizinho);
    this->matriz[vizinho].push_back(vertice);
}

void Grafo::saoVizinhos(int v1, int v2) {
    if (v1 >= count_vertices || v2 >= count_vertices || v1 < 0 || v2 < 0) {
        cout << "Erro: Vértice fora do intervalo!" << endl;
    }

    if (find(this->matriz[v1].begin(), this->matriz[v1].end(), v2) != this->matriz[v1].end()) {
        cout << v1 << " e " << v2 << " são vizinhos." << endl;
    } else {
        cout << v1 << " e " << v2 << " não são vizinhos." << endl;
    }
}

void Grafo::achaVizinhos(int v) {
    if (v >= count_vertices || v < 0) {
        cout << "Erro: Vértice fora do intervalo!" << endl;
        return;
    }
    cout << "Vizinhos do vértice " << v << ": ";
    for (int i = 0; i < this->matriz[v].size(); ++i) {
        cout << this->matriz[v][i] << " ";
    }
    cout << endl;
}