#ifndef LISTASENLAZADAS_H
#define LISTASENLAZADAS_H
#include "Nodo.h"

class ListasEnlazadas{

  private:
    Nodo* siguiente;
    int posicion;


  public:
    ListasEnlazadas();
    void push_back(Nodo*);
    void insertar(Nodo*, int);
    bool getNext(Nodo*);

};
#endif
