#include "Seleccion.h"
#include <fstream>
#include <iostream>

using namespace std;

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
  //partidosGanados
  in.read(reinterpret_cast<char*>(&partidosGanados),sizeof(int));

  //partidosPerdidos
  in.read(reinterpret_cast<char*>(&partidosPerdidos),sizeof(int));

  //partidosEmpatados
  in.read(reinterpret_cast<char*>(&partidosEmpatados),sizeof(int));

  //golesAnotados
  in.read(reinterpret_cast<char*>(&golesAnotados),sizeof(int));

  //golesJugador
  in.read(reinterpret_cast<char*>(&golesJugador),sizeof(int));

  //nombreSeleccion
  in.read(reinterpret_cast<char*>(&size),sizeof(int));
  char numBuffer[size];
  in.read(numBuffer,size);
  nombreSeleccion=numBuffer;

  //maximoGoleador
  in.read(reinterpret_cast<char*>(&size),sizeof(int));
  char maxGolBuffer[size];
  in.read(numBuffer,size);
  maximoGoleador=numBuffer;
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
