/*
 * tablero.cpp
 *
 *  Created on: 06/10/2018
 *      Author: andres
 */

#include "Tablero.h"


#include <iostream>

namespace std {

tablero::tablero(int numFilas,int numColumnas) {
	this->celulasVivas = 0;
	this->numeroDeFilas = numFilas;
	this->numeroDeColumnas = numColumnas;
	this->matriz = new char*[this->numeroDeFilas];
	for ( int i = 0 ; i < this->numeroDeFilas ; i ++){
		this->matriz[i] = new char[this->numeroDeColumnas];
	}
	iniciarTablero();
}

void tablero::crearCelulas(int fila,int columna){
	*(*(this->matriz + fila) + columna) = 79;
}

void tablero::iniciarCelulas(){
	int fila,columna;
	char respuesta;
	do{
		fila = consola.solicitarPosicionDeCelulaFila();
		columna = consola.solicitarPosicionDeCelulaColumna();

		crearCelulas(fila,columna);
		this->celulasVivas++;
		respuesta = consola.ingresarCelula();
	}while(respuesta == 'S');
}

void tablero::iniciarTablero(){
	for(int i = 0 ; i < this->numeroDeFilas ; i++ ){
		for(int j = 0 ; j < this->numeroDeColumnas ; j++ ){
			*(*(this->matriz + i) + j) = 35;
		}
	}
}


void tablero::mostrarTableroDeJuego(){
	for(int i = 0 ; i < this->numeroDeFilas ; i++ ){
		for(int j = 0 ; j < this->numeroDeColumnas ; j++ ){
			cout << *(*(this->matriz + i) + j);
		}
	cout << endl;
	}
}

tablero::~tablero() {
	for(int i = 0 ; i < this->numeroDeFilas ; i++ ){
			delete [] this->matriz[i];
	}

	delete [] this->matriz;
}

} /* namespace std */
