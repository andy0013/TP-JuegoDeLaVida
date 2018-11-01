/*
 * ControlJuego.h
 *
 *  Created on: 31/10/2018
 *      Author: andres
 */

#ifndef SRC_CONTROLJUEGO_H_
#define SRC_CONTROLJUEGO_H_
#include "Lector.h"
#include "Lista.h"
#include "Tablero.h"
#include "Interaccion.h"

class ControlJuego {
private:
	Lista<Tablero*>* tablerosJuego;
	Lector lector;
	Interaccion usuario;
	unsigned int turnos;
public:
	ControlJuego();

	void iniciarTableros();

	void mostrarTablero();

private:

};

#endif /* SRC_CONTROLJUEGO_H_ */
