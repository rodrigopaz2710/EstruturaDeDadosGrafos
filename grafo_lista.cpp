#include <iostream>
#include <vector>

class GrafoLista {
public:
    GrafoLista(int num_vertices) {
        this->num_vertices = num_vertices;
        lista.resize(num_vertices);
    }

    void adicionarAresta(int u, int v) {
        lista[u].push_back(v);
        lista[v].push_back(u);
    }

    void imprimir() {
        for (int i = 0; i < num_vertices; i++) {
            std::cout << i << ": ";
            for (int v : lista[i])
                std::cout << v << " ";
            std::cout << std::endl;
        }
    }

    const std::vector<int>& vizinhos(int v) const {
        return lista[v];
    }

    int getNumVertices() const {
        return num_vertices;
    }

private:
    int num_vertices;
    std::vector<std::vector<int>> lista;
};
