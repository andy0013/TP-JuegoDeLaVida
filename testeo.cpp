/*
 * testeo.cpp
 *
 *  Created on: 03/10/2018
 *      Author: andres
 */

#include "Parcela.h"
#include "Celula.h"
#include "Interaccion.h"
#include <iostream>

#include "Tablero.h"
using namespace std;

int main(){
	Interaccion locutor;
	int f,c;
	f = locutor.solicitarNumeroDeFilas();
	c = locutor.solicitarNumeroDeColumnas();
	tablero juego(f,c);
	juego.iniciarCelulas();
	juego.mostrarTableroDeJuego();
}

