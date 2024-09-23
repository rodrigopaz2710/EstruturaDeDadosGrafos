all: main

main: main.o grafo_lista.o grafo_matriz.o
	g++ -o main main.o grafo_lista.o grafo_matriz.o

main.o: main.cpp
	g++ -c main.cpp

grafo_lista.o: grafo_lista.cpp
	g++ -c grafo_lista.cpp

grafo_matriz.o: grafo_matriz.cpp
	g++ -c grafo_matriz.cpp


