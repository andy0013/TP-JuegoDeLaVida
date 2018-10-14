/*
 * testeo.cpp
 *
 *  Created on: 14/10/2018
 *      Author: andres
 */

#include <iostream>
#include "Celula.h"
#include "Tablero.h"
#include "Lector.h"
using namespace std;
typedef std::string palabra;

int main(){

	palabra nombreTablero;
	int fila,columna;
	Lector lector;


	lector.leerNotas(&nombreTablero,&fila,&columna);



	tablero juego(fila,columna);

	juego.mostrarTableroDeJuego();

	juego.iniciarCelulas();

	juego.mostrarTableroDeJuego();



	return 0;
}


