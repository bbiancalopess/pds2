#ifndef GRAFO
#define GRAFO
#include <vector>
#include <string>

using std::vector;
using std::string;

class Grafo {
    private:
        vector<vector<int>> matriz;
        int count_vertices;
    public:
        Grafo(int count_vertices);
        void adicionaVerticeEVizinho(int vertice, int vizinho);
        void saoVizinhos(int v1, int v2);
        void achaVizinhos(int v);
};

#endif