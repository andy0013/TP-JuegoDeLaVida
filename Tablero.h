/*
 * tablero.h
 *
 *  Created on: 06/10/2018
 *      Author: andres
 */

#ifndef TABLERO_H_
#define TABLERO_H_

#include "Interaccion.h"
#include "Parcela.h"

namespace std {


/*
 *PUSE COMO CELULA VIVA Y MUERTA DOS CHARS CUALQUIERA , HABRIA QUE HACER
 *QUE CADA POSICION DE LA MATRIZ GUARDE UN OBJETO PARCELA DISTINTO
 *QUE PUEDA ENVIAR DATOS PROPIOS COMO OBJETO.
 */


class tablero {
	private:
		char** matriz;
		Interaccion consola;
		int numeroDeFilas,numeroDeColumnas,celulasVivas;
	public:
		/*
		 * PRE:NUM FILAS NUM COLUMNAS
		 *
		 *
		 */
		tablero(int numFilas,int numColumnas);

		/*
		 * PRE:TABLEROCREADO
		 *
		 */
		void mostrarTableroDeJuego();

		/*
		 *
		 */
		virtual ~tablero();

		/*
		 * POST:CHAR A CADA POSICION DEL TALBLERO.
		 */
		void iniciarTablero();

		/*
		 * POST:CREA CELULAS "MUERTAS" EN TODA LA MATRIZ.
		 */

		void iniciarCelulas();

		/*
		 * POST EN LA POSICION PASADA CREA UNA CELULA VIVA.
		 */
		void crearCelulas(int fila,int columna);

};

} /* namespace std */

#endif /* TABLERO_H_ */
