#ifndef SELECCION_H
#define SELECCION_H
#include <iostream>
using namespace std;

class Seleccion{

  public:

    string nombreSeleccion;
    int partidosGanados;
    int partidosPerdidos;
    int partidosEmpatados;
    int golesAnotados;
    string maximoGoleador;
    int golesJugador;

    //setters

    void setNombreSeleccion(string);
    void setPartidosGanados(int);
    void setPartidosPerdidos(int);
    void setPartidosEmpatados(int);
    void setGolesAnotados(int);
    void setMaximoGoleador(string);
    void setGolesJugador(int);

    //getters

    string getNombreSeleccion();
    int getPartidosGanados();
    int getPartidosPerdidos();
    int getPartidosEmpatados();
    int getGolesAnotados();
    string getMaximoGoleador();
    int getGolesJugador();

  public:
    Seleccion();
    Seleccion(string, int, int, int, int, string, int);

    void write(ofstream&);
    void read(ifstream&);
    friend ostream& operator<<(ostream&,const Seleccion&);
    friend istream& operator>>(istream&, Seleccion&);

};
#endif
