#include <fstream>
#include <sstream>

void carregarGrafo(const std::string& filename, GrafoLista& grafo) {
    std::ifstream file(filename);
    std::string linha;
    int u, v;
    
    while (std::getline(file, linha)) {
        std::istringstream iss(linha);
        if (iss >> u >> v) {
            grafo.adicionarAresta(u, v);
        }
    }
}
