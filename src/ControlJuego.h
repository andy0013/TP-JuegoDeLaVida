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
#include "Contador.h"
#include "Tablero.h"
#include "Interaccion.h"

class ControlJuego {
private:
	Lista<Tablero*>* tablerosJuego;
	Lector lector;
	Interaccion usuario;
	Contador** contadorDeDatos;
	unsigned int turnos;
public:
	/*
	 * POST: vector con contador de datos de cada tablero.
	 * 		 Lee los datos del archivo y trabaja con la lista final.
	 */
	ControlJuego();

	/*
	 * PRE : Tableros en la lista.
	 * POST: Si el usuario desea, inicia celulas en el tablero.
	 */
	void iniciarTableros();

	/*
	 * POST:IMPRIME CHAR DEL TABLERO(INUTIL SOLO PARA TESTEO)
	 */
	void mostrarTablero();

	/*
	 *
	 */
	void actualizarTablero();

	/*
	 * POST: Actualiza la clase contador asociada a cada tablero , con la informacion de celulas vivas.
	 */
	void informacionTablero();

	~ControlJuego();

private:

};

#endif /* SRC_CONTROLJUEGO_H_ */
