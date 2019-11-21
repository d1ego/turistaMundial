#include "Jugador.h"
#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
  int numJugadores, x;

  cout << "Ingresa el numero de Jugadores: "<< endl;
  cin >> numJugadores;
  Jugador jugadores[numJugadores];

  cout << "A que jugador quieres modificar: "<< endl;
  cin >> x;

  jugadores[x].setDinero(100);


  //Jugador prueba(5);
//  cout << "que jugador quieres saber: "<<endl;
//  cin >> x;
//  cout << "El jugador tiene: "<<jugadores[x].getDinero()<<endl;
  return 0;
}
