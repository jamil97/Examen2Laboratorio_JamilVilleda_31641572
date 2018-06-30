main:    mainListasEnlazadas.cpp Seleccion.o Nodo.o ListasEnlazadas.o
	g++ mainListasEnlazadas.cpp Seleccion.o Nodo.o ListasEnlazadas.o -o main
mainListasEnlazadas.o:	mainListasEnlazadas.cpp Seleccion.h Nodo.h ListasEnlazadas.h
	g++ -c mainListasEnlazadas.cpp
Seleccion:	Seleccion.cpp Seleccion.h
	g++ -c Seleccion.cppNodo:	Nodo.cpp Nodo.h
	g++ -c Nodo.cpp
ListasEnlazadas:	ListasEnlazadas.cpp ListasEnlazadas.h Nodo.h
	g++ -c ListasEnlazadas.cpp
clean:
	rm  *.o main
