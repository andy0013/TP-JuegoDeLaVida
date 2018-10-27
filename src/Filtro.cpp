/*
 * Filtro.cpp
 *
 *  Created on: 22/10/2018
 *      Author: andres
 */

#include "Filtro.h"
#include <iostream>

using namespace std;

Filtro::Filtro() {
	this->cantidadDeTableros = 0;
	this->tableroActual = NULL;
}

void Filtro::agregarTablero(std::string nombre,int fila,int columna){
	this->tableroActual = new Tablero(nombre,fila,columna);
	this->listaDeTablero.agregar(this->tableroActual);
}


void Filtro::iniciarTableros(){
	this->listaDeTablero.iniciarCursor();
	while(this->listaDeTablero.avanzarCursor()){
		Tablero* actual = this->listaDeTablero.obtenerCursor();
		actual->iniciarCelulas();
	}
}

void Filtro::mostrarTableros(){
	this->listaDeTablero.iniciarCursor();
	while(this->listaDeTablero.avanzarCursor()){
		Tablero* actual = this->listaDeTablero.obtenerCursor();
		actual->mostrarTableroDeJuego();
		cout << endl;
	}

}

void Filtro::cargarDatosEnParcela(std::string nombre,int fila,int columna,int rojo,int verde,int azul, float natalidad, float mortalidad){
	this->tableroActual->iniciarParcelas(fila,columna,rojo,verde,azul,natalidad,mortalidad);
}

Filtro::~Filtro(){
	this->listaDeTablero.iniciarCursor();
	while(this->listaDeTablero.avanzarCursor()){
		delete this->listaDeTablero.obtenerCursor();
	}
	delete this->listaDeTablero;
	delete this->tableroActual;
}

void Filtro::buscarTableroAdecuado(std::string nombreDelTablero){
	this->listaDeTablero.iniciarCursor();;
	while(this->listaDeTablero.avanzarCursor()){
		Tablero* actual = this->listaDeTablero.obtenerCursor();
		std::string nombreCandidato = actual->obtenerNombreTablero();
		if(nombreCandidato == nombreDelTablero){
			this->tableroActual = actual;
		}
	}
}
