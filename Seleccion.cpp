#include "Seleccion.h"
#include <fstream>
#include <iostream>

using namespace std;
Seleccion::Seleccion(){

}

Seleccion::Seleccion(string nombreSeleccion, int partidosGanados, int partidosPerdidos, int partidosEmpatados, int golesAnotados, string maximoGoleador, int golesJugador){
  this->nombreSeleccion = nombreSeleccion;
  this->partidosGanados = partidosGanados;
  this->partidosPerdidos = partidosPerdidos;
  this->partidosEmpatados = partidosEmpatados;
  this->golesAnotados = golesAnotados;
  this->maximoGoleador = maximoGoleador;
  this->golesJugador = golesJugador;
}

void Seleccion::read(ifstream& in){
  int size;

  in.read(reinterpret_cast<char*>(&partidosGanados),sizeof(int));

  in.read(reinterpret_cast<char*>(&partidosPerdidos),sizeof(int));

  in.read(reinterpret_cast<char*>(&partidosEmpatados),sizeof(int));

  in.read(reinterpret_cast<char*>(&golesAnotados),sizeof(int));

  in.read(reinterpret_cast<char*>(&golesJugador),sizeof(int));

  in.read(reinterpret_cast<char*>(&size),sizeof(int));
  char numBuffer[size];
  in.read(numBuffer,size);
  nombreSeleccion=numBuffer;

  in.read(reinterpret_cast<char*>(&size),sizeof(int));
  char maxGolBuffer[size];
  in.read(maxGolBuffer,size);
  maximoGoleador=maxGolBuffer;

}

void Seleccion::write(ofstream& out){
  //Nombre Seleccion
  int size = nombreSeleccion.size();
  out.write(reinterpret_cast<char*>(&size),sizeof(int));
  out.write(nombreSeleccion.data(),nombreSeleccion.size());

  //Maximo goleador
  size = maximoGoleador.size();
  out.write(reinterpret_cast<char*>(&size),sizeof(int));
  out.write(maximoGoleador.data(),maximoGoleador.size());

  //Partidos ganados
  out.write(reinterpret_cast<char*>(&partidosGanados),sizeof(int));

  //Partidos perdidos
  out.write(reinterpret_cast<char*>(&partidosPerdidos),sizeof(int));

  //Partidos empatados
  out.write(reinterpret_cast<char*>(&partidosEmpatados),sizeof(int));

  //Goles anotados
  out.write(reinterpret_cast<char*>(&golesAnotados),sizeof(int));

  //Goles Jugador
  out.write(reinterpret_cast<char*>(&golesJugador),sizeof(int));

}

istream& operator>>(istream& in, Seleccion& sele){
  string buffer;
  //leer una lÃ­nea del archivo
  getline(in,buffer);
  string parse="";
  int cont=0;
  for(int i = 0; i<buffer.size();i++){
    if(buffer[i]!=',')
      parse+=buffer[i];
    else{
      switch(cont){
        case 0:
          sele.nombreSeleccion = parse;
           break;
        case 1:
           sele.partidosGanados;
           break;
        case 2:
          sele.partidosPerdidos;
          break;
        case 3:
          sele.partidosEmpatados;
          break;
        case 4:
          sele.golesAnotados;
          break;
        case 5:
          sele.maximoGoleador = parse;
          break;
        case 6:
          sele.golesJugador;
          break;

      }
      cont++;
    }
  }
  return in;
}


ostream& operator<<(ostream& out, const Seleccion& sele){

   out<<sele.nombreSeleccion<<","<<sele.partidosGanados<<","<<sele.partidosPerdidos<<","<<sele.partidosEmpatados<<","<<sele.golesAnotados<<","<<sele.maximoGoleador<<","<<sele.golesJugador<<endl;
   return out;

}

//Getters

void Seleccion::setNombreSeleccion(string nombreSeleccion){
  this->nombreSeleccion = nombreSeleccion;
}

void Seleccion::setPartidosGanados(int partidosGanados){
  this->partidosGanados = partidosGanados;
}

void Seleccion::setPartidosPerdidos(int partidosPerdidos){
  this->partidosPerdidos = partidosPerdidos;
}

void Seleccion::setPartidosEmpatados(int partidosEmpatados){
  this->partidosEmpatados = partidosEmpatados;
}

void Seleccion::setGolesAnotados(int golesAnotados){
  this->golesAnotados = golesAnotados;
}

void Seleccion::setMaximoGoleador(string maximoGoleador){
  this->maximoGoleador = maximoGoleador;
}

void Seleccion::setGolesJugador(int golesJugador){
  this->golesJugador = golesJugador;
}

//Getters

string Seleccion::getNombreSeleccion(){
  return nombreSeleccion;
}

int Seleccion::getPartidosGanados(){
  return partidosGanados;
}

int Seleccion::getPartidosPerdidos(){
  return partidosPerdidos;
}

int Seleccion::getPartidosEmpatados(){
  return partidosEmpatados;
}

int Seleccion::getGolesAnotados(){
  return golesAnotados;
}

string Seleccion::getMaximoGoleador(){
  return maximoGoleador;
}

int Seleccion::getGolesJugador(){
  return golesJugador;
}
