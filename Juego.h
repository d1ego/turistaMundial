#include "Jugador.h"
#include "Casilla.h"

class Juego
{
  private:
    int numJugadores;
    int numCasillas;
    int reserva;
    int contador;
    //Jugador jugador[];
  public:
    Juego(int);
    void menuP();
    void inicia();
    void turno();
};
