#include "Jugador.h"
#include <time.h>
#include <stdlib.h>
#include <stdio.h>
#include <iostream>
using namespace std;

Jugador::Jugador()
{
  id = 0;
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

  cout<< dadoA<<endl;
  cout<< dadoB<<endl;
  if (dadoA == dadoB) {
    cout<<"Tirada doble: "<<endl;
    total = dadoA + dadoB;
    moverJugador(total);
    /* tiraDoble(total); */
  }
  else
  {
    total = dadoA + dadoB;
    moverJugador(total);
    //total = dadoA + dadoB;
  }
}

void Jugador::moverJugador(int numCasillas)
{
  setPosicion(numCasillas);
}

void Jugador::comprarPropiedad(Jugador jugador, Casilla casilla)
{
  casilla.Setpropietario(jugador.getId());
  jugador.paga(casilla.Getprecio());
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

void Jugador::hipotecarPropiedad(Jugador jugador, Casilla casilla)
{
  casilla.Setpropietario(0);
  darPrestamo(jugador, casilla);
  /*
  Obtener id Propiedad
  cambiar bandera dueno ahora es banco
  depositar a jugador total de hipoteca
  */
}

void Jugador::venderPropiedad(Jugador jugadorVende, Jugador jugadorCompra, Casilla casilla)
{
  casilla.Setpropietario(jugadorCompra.getId());
  jugadorCompra.paga(casilla.Getprecio());
  jugadorVende.recibe(casilla.Getprecio());
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
  if(posicion >40)
  {
    posicion = posicion - 40;
  }
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
void Jugador::darPrestamo(Jugador jugador, Casilla casilla)
{
  jugador.recibe(casilla.Getprecio());
  //RESERVA = RESERVA - casilla.Getprecio();
}
