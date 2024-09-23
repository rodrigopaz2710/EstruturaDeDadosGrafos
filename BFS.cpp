#include <queue>
#include <iostream>

void bfs(const GrafoLista& grafo, int s, int t) {
    std::vector<bool> visitado(grafo.getNumVertices(), false);
    std::vector<int> anterior(grafo.getNumVertices(), -1);
    std::queue<int> fila;

    visitado[s] = true;
    fila.push(s);

    while (!fila.empty()) {
        int vertice = fila.front();
        fila.pop();

        if (vertice == t) {
            break;
        }

        for (int vizinho : grafo.vizinhos(vertice)) {
            if (!visitado[vizinho]) {
                fila.push(vizinho);
                visitado[vizinho] = true;
                anterior[vizinho] = vertice;
            }
        }
    }

    if (!visitado[t]) {
        std::cout << "Não há caminho entre os vértices.\n";
    } else {
        std::vector<int> caminho;
        for (int i = t; i != -1; i = anterior[i]) {
            caminho.push_back(i);
        }
        std::cout << "Caminho: ";
        for (int i = caminho.size() - 1; i >= 0; i--) {
            std::cout << caminho[i] << (i > 0 ? " -> " : "\n");
        }
    }
}
