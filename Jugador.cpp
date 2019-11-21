#include "Jugador.h"
#include <time.h>
#include <stdlib.h>
#include <stdio.h>
#include <iostream>
using namespace std;

Jugador::Jugador()
{
  //id = _id;
  //color = _color;
  dinero = 1500;
  posicion = 1;
  carcel = false;
}

void Jugador::tirar()
{
  int total;
  srand(time(NULL));
  int dadoA = rand();
  int dadoB = rand();
  dadoA = 1 + rand()%(7-1);
  dadoB = 1 + rand()%(7-1);

  if (dadoA == dadoB) {
    /* tiraDoble(total); */
  }
  else
  {
    total = dadoA + dadoB;
  }
}

void Jugador::moverJugador(int numCasillas)
{
  setPosicion(numCasillas);
}

void Jugador::comprarPropiedad(int _id)
{
  /*
  Propiedad.setDueno(id);
  */
}

void Jugador::terminaTurno()
{

}

void Jugador::pagarRenta(Jugador jugadorPaga, Jugador jugadorRecibe, int monto)
{
  jugadorPaga.paga(monto);
  jugadorRecibe.recibe(monto);
}

void Jugador::hipotecarPropiedad(Jugador jugador)
{
  /*
  Obtener id Propiedad
  cambiar bandera dueno ahora es banco
  depositar a jugador total de hipoteca
  */
}

void Jugador::venderPropiedad(Jugador jugadorVende, Jugador jugadorCompra)
{
  /*
  Obtener id de venderPropiedad
  cambiar bandera dueno ahora es jugadorCompra
  quitar dinero jugadorCompra
  depositar dinero jugadorVende
  */
}

// void construirHotel(Jugador jugador, Casilla casilla)
// {
//     /*
//     Activar bandera Casilla
//     Quitar a jugador monto total de construccion
//     */
// }

void Jugador::paga(int monto)
{
    dinero = dinero - monto;
}

void Jugador::recibe(int monto)
{
    dinero = dinero + monto;
}

void Jugador::setPosicion(int _posicion)
{
  posicion = posicion + _posicion;
}

int Jugador::getPosicion()
{
  return posicion;
}

void Jugador::setId(int _id)
{
  id = _id;
}

int Jugador::getId()
{
  return id;
}

void Jugador::setDinero(int cantidad)
{
  dinero = dinero + cantidad;
  cout << "El dinero de es: "<< dinero<< '\n';
}

int Jugador::getDinero()
{
  return dinero;
}
