/*
 * CreadorDeLista.h
 *
 *  Created on: 31/10/2018
 *      Author: andres
 */

#ifndef SRC_CREADORDELISTA_H_
#define SRC_CREADORDELISTA_H_
#include "Tablero.h"
#include "Lista.h"
#include <string>

class CreadorDeLista {
private:
	Lista<Tablero*> listaDeTablero;
	Tablero* tableroActual;
public:

	/*
	 * POST: Lista esta vacia , tableroActual NULL;
	 */
	CreadorDeLista();

	/*
	 * POST:ultima posicion de la lista(si esta vacia , primera posicion), agrega el tablero creado.
	 */
	void agregarTablero(std::string nombre,int fila,int columna);

	/*
	 * PRE: hay tableros en la lista, el nombre recibido corresponde a un tablero.
	 * POST: carga datos de las parcelas , en los tableros.
	 */
	void cargarDatosEnParcela(std::string nombre,int fila,int columna,int rojo,int verde,int azul, float natalidad, float mortalidad);

	/*
	 * POST: devuelve la lista de tableros , despues de leer el archivo de texto.
	 */
	Lista<Tablero*>* obtenerListaCreada();

	~CreadorDeLista();

private:
	/*
	 * POST: devuelve el tablero que tiene como nombre "nombreDelTablero".
	 */
	Tablero* buscarTableroAdecuado(std::string nombreDelTablero);
};

#endif /* SRC_CREADORDELISTA_H_ */
