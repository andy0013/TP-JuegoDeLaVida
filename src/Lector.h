/*
 * Lector.h
 *
 *  Created on: 14/10/2018
 *      Author: andres
 */

#ifndef LECTOR_H_
#define LECTOR_H_
typedef std::string str;
#include "Memoria.h"
#include "CreadorDeLista.h"
#include "Lista.h"
#include "Tablero.h"



class Lector {
	private:
		str rutaEntrada;
		CreadorDeLista creador;

	public:

		/*
		 * POST: inicializa la ruta de lectura del archivo.
		 */
		Lector();

		/*PRE: rutaDeLectura inicializada.
		 * POST : devuelve la lista con los tableros leidos , y sus parcelas iniciadas con los datos leidos.
		 */
		Lista<Tablero*>* leerNotasTablero();

	private:

		/* PRE: recibe una linea del archivo de texto , formato vector.
		 * POST: revuelve la cantidad de blancos en la linea leida.
		 */

		int cantidadDeBlancos(char[100]);

};


#endif /* LECTOR_H_ */
