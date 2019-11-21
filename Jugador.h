class Jugador
{
private:
  int id;
  int dinero;
  int posicion;
  //int color;
  bool carcel;
public:
  Jugador();
  void tirar();
  void moverJugador(int);
  void comprarPropiedad(int);
  void terminaTurno();
  void pagarRenta(Jugador, Jugador, int);
  void hipotecarPropiedad(Jugador);
  void venderPropiedad(Jugador, Jugador);
  //void construirHotel(Jugador, Casilla);

  void paga(int);
  void recibe(int);

  void setPosicion(int);
  int getPosicion();

  void setId(int);
  int getId();

  void setDinero(int);
  int getDinero();
};
