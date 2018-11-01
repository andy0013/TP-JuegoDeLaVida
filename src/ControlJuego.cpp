/*
 * ControlJuego.cpp
 *
 *  Created on: 31/10/2018
 *      Author: andres
 */

#include <iostream>
#include <string>
#include "ControlJuego.h"
using namespace std;

ControlJuego::ControlJuego() {
	this->tablerosJuego = lector.leerNotasTablero();
	this->turnos = 0;
}

void ControlJuego::iniciarTableros(){
	this->tablerosJuego->iniciarCursor();
	std::string nombreTablero;
	while(this->tablerosJuego->avanzarCursor()){
		Tablero* tableroActual = this->tablerosJuego->obtenerCursor();
		nombreTablero = tableroActual->obtenerNombreTablero();
		if(usuario.ingresarCelulasEnTablero(nombreTablero)){
			tableroActual->iniciarCelulas();
		}
	}
}

void ControlJuego::mostrarTablero(){
	this->tablerosJuego->iniciarCursor();
	while(this->tablerosJuego->avanzarCursor()){
		Tablero* tableroActual = this->tablerosJuego->obtenerCursor();
		tableroActual->mostrarTablero();
		cout << endl;
	}
}











