#include "ListasEnlazadas.h"
#include <iostream>
using namespace std;

ListasEnlazadas::ListasEnlazadas(){

}

void ListasEnlazadas::push_back(Nodo* pNodo){
  if(siguiente == NULL){
      siguiente = pNodo;
  } else {
      Nodo* temp = siguiente;
      while (temp->getNodo() !=NULL) {
          temp = temp->getNodo();
      }
      temp = pNodo;
    }
}

void ListasEnlazadas::insertar(Nodo* pNodo, int pos){

}

bool ListasEnlazadas::getNext(Nodo* n){
  bool tiene;
  if (n == NULL) {
    tiene = true;
  } else {
    tiene = false;
  }
  return tiene;
}
