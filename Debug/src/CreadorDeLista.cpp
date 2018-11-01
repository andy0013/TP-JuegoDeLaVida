/*
 * CreadorDeLista.cpp
 *
 *  Created on: 31/10/2018
 *      Author: andres
 */

#include "CreadorDeLista.h"

CreadorDeLista::CreadorDeLista() {
	this->tableroActual = NULL;
}

void CreadorDeLista::agregarTablero(std::string nombre,int fila,int columna){
	this->tableroActual = new Tablero(nombre,fila,columna);
	this->listaDeTablero.agregar(this->tableroActual);
}

void CreadorDeLista::cargarDatosEnParcela(std::string nombre,int fila,int columna,int rojo,int verde,int azul, float natalidad, float mortalidad){
	Tablero* nombreCorrecto = buscarTableroAdecuado(nombre);
	nombreCorrecto->iniciarParcelas(fila,columna,rojo,verde,azul,natalidad,mortalidad);
}


Lista<Tablero*>* CreadorDeLista::obtenerListaCreada(){
	return &this->listaDeTablero;
}

Tablero* CreadorDeLista::buscarTableroAdecuado(std::string nombreDelTablero){
	bool noEncontrado = true;
	Tablero* tableroActual;
	this->listaDeTablero.iniciarCursor();
	while(this->listaDeTablero.avanzarCursor() && noEncontrado){
		tableroActual = this->listaDeTablero.obtenerCursor();
		std::string nombreCandidato = tableroActual->obtenerNombreTablero();
		if(nombreCandidato == nombreDelTablero){
			noEncontrado = false;
		}
	}
	return tableroActual;
}



CreadorDeLista::~CreadorDeLista(){
	unsigned int cantidadDeTablero = this->listaDeTablero.contarElementos();
	for(unsigned int tablero = 0;tablero < cantidadDeTablero;tablero++){
		this->listaDeTablero.remover(tablero);

	}

}












