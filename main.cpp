#include <iostream>
#include "grafo_lista.cpp"
#include "grafo_matriz.cpp"

int main() {
    int num_vertices = 6;
    
   
    GrafoLista grafo(num_vertices);
    carregarGrafo("grafo.txt", grafo);

  
    std::cout << "Lista de Adjacência:" << std::endl;
    grafo.imprimir();
    
    std::cout << "\nBFS entre os vértices 0 e 4:" << std::endl;
    bfs(grafo, 0, 4);

    std::cout << "\nDFS iniciando do vértice 0:" << std::endl;
    dfsComPilha(grafo, 0);

    return 0;
}
