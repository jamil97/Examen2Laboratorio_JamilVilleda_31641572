#ifndef NODO_H
#define NODO_H
#include "Seleccion.h"

class Nodo{

public:
    Seleccion* seleccion;
    Nodo* nodo;

  public:
    Nodo(Seleccion*);

    //Getters
    Seleccion* getSeleccion();
    Nodo* getNodo();

    //Setters
    void setSeleccion(Seleccion*);
    void setNodo(Nodo*);



};
#endif
