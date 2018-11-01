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
    this->contadorDeDatos = new Contador*[this->tablerosJuego->contarElementos()];
    for(unsigned int tableroActual=1;tableroActual<this->tablerosJuego->contarElementos();tableroActual++){
        Tablero* tableroLeido = this->tablerosJuego->obtener(tableroActual);
        this->contadorDeDatos[tableroActual] = new Contador(tableroLeido);
    }
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

void ControlJuego::actualizarTablero(){
	//this->contadorDeDatos.
}

void ControlJuego::informacionTablero(){
    int cantidadDeElementos = this->tablerosJuego->contarElementos();
    for(int tableros = 0;tableros < cantidadDeElementos ; tableros++){
        int celvi = this->contadorDeDatos[tableros]->contarCelulasVivas();
        cout << celvi;
    }
}

ControlJuego::~ControlJuego(){
	delete [] this->contadorDeDatos;
}










