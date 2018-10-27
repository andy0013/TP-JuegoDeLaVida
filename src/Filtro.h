/*
 * Filtro.h
 *
 *  Created on: 22/10/2018
 *      Author: andres
 */

#ifndef SRC_FILTRO_H_
#define SRC_FILTRO_H_
#include "Tablero.h"
#include "Lista.h"
#include <string>
using namespace std;

class Filtro {
private:
	Lista<Tablero*> listaDeTablero;
	int cantidadDeTableros;
	Tablero* tableroActual;



public:
	Filtro();

	void agregarTablero(std::string nombre,int fila,int columna);

	void iniciarTableros();

	void mostrarTableros();

	void cargarDatosEnParcela(std::string nombre,int fila,int columna,int rojo,int verde,int azul, float natalidad, float mortalidad);

	~Filtro();

private:

	void buscarTableroAdecuado(std::string nombreDelTablero);
};



#endif /* SRC_FILTRO_H_ */
