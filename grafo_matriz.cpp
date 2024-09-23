#include <iostream>
#include <vector>

class GrafoMatriz {
public:
    GrafoMatriz(int num_vertices) {
        this->num_vertices = num_vertices;
        matriz.resize(num_vertices, std::vector<int>(num_vertices, 0));
    }

    void adicionarAresta(int u, int v) {
        matriz[u][v] = 1;
        matriz[v][u] = 1; 
    }

    void imprimir() {
        for (const auto& linha : matriz) {
            for (int val : linha)
                std::cout << val << " ";
            std::cout << std::endl;
        }
    }

private:
    int num_vertices;
    std::vector<std::vector<int>> matriz;
};
