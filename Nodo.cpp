#include "Nodo.h"

Nodo::Nodo(Seleccion* pSeleccion){

}

//Getters

Seleccion* Nodo::getSeleccion(){
  return seleccion;
}

Nodo* Nodo::getNodo(){
  return nodo;
}

//Setters

void Nodo::setSeleccion(Seleccion* sSeleccion){
  this->seleccion = sSeleccion;
}

void Nodo::setNodo(Nodo* pNodo){
  this->nodo = pNodo;
}
