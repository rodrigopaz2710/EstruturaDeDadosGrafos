#include <stack>

void dfsComPilha(const GrafoLista& grafo, int s) {
    std::vector<bool> visitado(grafo.getNumVertices(), false);
    std::stack<int> pilha;

    pilha.push(s);

    while (!pilha.empty()) {
        int vertice = pilha.top();
        pilha.pop();

        if (!visitado[vertice]) {
            std::cout << "Visitando " << vertice << std::endl;
            visitado[vertice] = true;
        }

        for (int vizinho : grafo.vizinhos(vertice)) {
            if (!visitado[vizinho]) {
                pilha.push(vizinho);
            }
        }
    }
}
