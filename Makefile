main: main.cpp Dado.o Tablero.o Casilla.o
	g++ main.cpp Dado.o Tablero.o Casilla.o Tablero.h Casilla.h -o main
Tablero.o: Casilla.o Dado.o Tablero.h Tablero.cpp
	g++ Tablero.cpp Casilla.o Casilla.h Tablero.h -c
Casilla.o: Casilla.cpp Casilla.h
	g++ Casilla.cpp -c
Dado.o: Dado.cpp Dado.h
	g++ Dado.cpp -c
