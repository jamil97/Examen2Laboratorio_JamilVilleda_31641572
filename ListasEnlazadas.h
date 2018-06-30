#ifndef LISTASENLAZADAS_H
#define LISTASENLAZADAS_H
#include "Nodo.h"

class ListasEnlazadas{

  public:
    Nodo* siguiente;
    Nodo* inicio;
    int posicion;


  public:
    ListasEnlazadas();
    void push_back(Nodo*);
    void insertar(Nodo*, int);
    bool getNext(Nodo*);
    void listar();

};
#endif
