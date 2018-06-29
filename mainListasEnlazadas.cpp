#include "Nodo.h"
#include "Seleccion.h"
#include "ListasEnlazadas.h"
#include <iostream>
using namespace std;

int main(){
  Seleccion* sele;
  Nodo* nodo;
  ListasEnlazadas* listas;
  bool seguir = true;
  string nombreSeleccion;
  int partidosGanados = 0;
  int partidosEmpatados = 0;
  int partidosPerdidos = 0;
  int golesAnotados = 0;
  string maximoGoleador;
  int golesJugador = 0;

  while(seguir){
    int opcion = 0;
    cout<<"Bienvenido al sistema, porfavor elija una opcion: "<<endl;
    cout<<"1. Agregar una seleccion: "<<endl;
    cout<<"2. Listar una seleccion: "<<endl;
    cout<<"3. Eliminar una seleccion: "<<endl;
    cout<<"4. Guardar una seleccion: "<<endl;
    cin>>opcion;

    switch (opcion) {
      case 1:
        cout<<"Ingrese el nombre de la seleccion: "<<endl;
        cin>>nombreSeleccion;
        cout<<"Ingrese el numero de partidos ganados: "<<endl;
        cin>>partidosGanados;
        cout<<"Ingrese el numero de partidos empatados: "<<endl;
        cin>>partidosEmpatados;
        cout<<"Ingrese el numero de partidos perdidos: "<<endl;
        cin>>partidosPerdidos;
        cout<<"Ingrese el numero de goles anotados por la seleccion:"<<endl;
        cin>>golesAnotados;
        cout<<"Ingrese el maximo goleador de la seleccion: "<<endl;
        cin>>maximoGoleador;
        cout<<"Ingrese el numero de goles anotados por el jugador: "<<endl;
        cin>>golesJugador;

        sele = new Seleccion(nombreSeleccion, partidosGanados, partidosPerdidos, partidosEmpatados, golesAnotados, maximoGoleador, golesJugador);
        nodo = new Nodo(sele);


        break;

      case 2:

        break;

      case 3:

        break;
    }
  }
}