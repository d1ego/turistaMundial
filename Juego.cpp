#include "Juego.h"

#include <string.h>
#include <stdio.h>
#include <iostream>

using namespace std;

Juego::Juego(int _numJugadores)
{
  numJugadores = _numJugadores;
  numCasillas = 40;
  reserva = 9999;
  contador = 0;
  //player[numJugadores];
}

void Juego::menuP()
{
  int start;

  cout << "*****************************************" << endl;
  cout<<"Bienvenido al turista mundial de ESCOM"<<endl;
  cout<<"El total de jugadores es: "<< numJugadores<< endl;
  cout<<"Reglas Basicas:"<<endl;
  cout<<"Cada Jugador inicia con $1500"<<endl;
  cout<<"Cada Jugador puede comprar tantad propiedades guste"<<endl;
  cout<<"Se pueden construir hoteles"<<endl;
  cout<<"Gana el jugador que quede al ultimo"<<endl;

  cout<<"Listo para comenzar? (1/0)"<<endl;

  cout << "*****************************************" << endl;
  cin >> start;

  if (start==1) {
    inicia();
  }


}
void Juego::inicia()
{
  turno();
}

void Juego::turno()
{
  Jugador player[numJugadores];
  for (int i = 0; i < numJugadores; i++) {
    player[i].setId(i);
  }
  while(true)
  {
    int tirada;
    cout << "*****************************************" << endl;
    cout << "Turno del Jugador: " << player[contador].getId() << endl;
      cout << "El jugador " <<player[contador].getId() <<" tiene: "<<endl;
        cout<<"Dinero: "<<player[contador].getDinero()<< endl;
        cout<<"Posicion: "<<player[contador].getPosicion()<< endl;

        cout << "Listo para tirar: "<<endl;
        cin >>tirada;
        player[contador].tirar();

        cout << "El jugador " <<player[contador].getId() <<" ha tirado"<<endl;
        cout << "Ahora esta en la posicion: " <<player[contador].getPosicion() <<endl;
        contador++;

        if(contador == numJugadores)
        {
            contador = 0 ;
        }
  }
}
